<?php

/**
 * @file
 * Theme functions for date output, which overrides default theme functions.
 *
 * @author Yaroslav Kharchenko <undertext.2010@gmail.com>
 *
 */

/**
 * If you want to override theme output for some date format you should use this function to declare
 *  mapping between date format and function name to call.
 * This must be an array with key of 'date format'.
 * The value is the array with possible 2 keys:
 * - range :  used for range date with different day values
 * - single : used for range date with equal day values
 * @return array
 *  Information about theme function for dates.
 */
function ltk_date_matches() {
  static $date_matches = array(
    'calendar_event_front_date' => array('range' => 'ltk_calendar_event_front_date_range'),
    'ec_date' => array(
      'range' => 'ltk_ec_date_range',
      'single' => 'ltk_ec_date_single',
    ),
    'ec_date_view' => array(
      'range' => 'ltk_ec_date_range',
      'single' => 'ltk_ec_date_view_single',
    ),
  );
  return $date_matches;
}

/**
 * Overrides theme_date_display_combination().
 *
 * Most of code stolen from default theme_date_display_combination function.
 * It seems there is no more ellegant solution.
 *
 * If Start and End dates match or there is no End date then we invoke date_display_single theme function
 *  or custom function from 'ltk_date_matches'.
 * If not then we invoke date_display_range theme function or custom function from 'ltk_date_matches'.
 *
 * @see theme_date_display_combination().
 */
function ltk_date_display_combination($variables) {
  $date_matches = ltk_date_matches();
  static $repeating_ids = array();

  $entity_type = $variables['entity_type'];
  $entity = $variables['entity'];
  $field = $variables['field'];
  $instance = $variables['instance'];
  $langcode = $variables['langcode'];
  $item = $variables['item'];
  $delta = $variables['delta'];
  $display = $variables['display'];
  $field_name = $field['field_name'];
  $formatter = $display['type'];
  $options = $display['settings'];
  $dates = $variables['dates'];
  $attributes = $variables['attributes'];
  $rdf_mapping = $variables['rdf_mapping'];
  $add_rdf = $variables['add_rdf'];
  $precision = date_granularity_precision($field['settings']['granularity']);

  $output = '';

  // If date_id is set for this field and delta doesn't match, don't display it.
  if (!empty($entity->date_id)) {
    foreach ((array) $entity->date_id as $key => $id) {
      list($module, $nid, $field_name, $item_delta, $other) = explode('.', $id . '.');
      if ($field_name == $field['field_name'] && isset($delta) && $item_delta != $delta) {
        return $output;
      }
    }
  }

  // Check the formatter settings to see if the repeat rule should be displayed.
  // Show it only with the first multiple value date.
  list($id) = entity_extract_ids($entity_type, $entity);
  if (!in_array($id, $repeating_ids) && module_exists('date_repeat_field') && !empty($item['rrule']) && $options['show_repeat_rule'] == 'show') {
    $repeat_vars = array(
      'field' => $field,
      'item' => $item,
      'entity_type' => $entity_type,
      'entity' => $entity,
    );
    $output .= theme('date_repeat_display', array(
      'rv' => $repeat_vars,
      'dates' => $dates,
    ));

    $repeating_ids[] = $id;
    return $output;
  }

  // If this is a full node or a pseudo node created by grouping multiple
  // values, see exactly which values are supposed to be visible.
  if (isset($entity->$field_name)) {
    $entity = date_prepare_entity($formatter, $entity_type, $entity, $field, $instance, $langcode, $item, $display);
    // Did the current value get removed by formatter settings?
    if (empty($entity->{$field_name}[$langcode][$delta])) {
      return $output;
    }
    // Adjust the $element values to match the changes.
    $element['#entity'] = $entity;
  }

  switch ($options['fromto']) {
    case 'value':
      $date1 = $dates['value']['formatted'];
      $date2 = $date1;
      break;

    case 'value2':
      $date2 = $dates['value2']['formatted'];
      $date1 = $date2;
      break;

    default:
      $date1 = $dates['value']['formatted'];
      $date2 = $dates['value2']['formatted'];
      break;
  }

  // Pull the timezone, if any, out of the formatted result and tack it back on
  // at the end, if it is in the current formatted date.
  $timezone = $dates['value']['formatted_timezone'];
  if ($timezone) {
    $timezone = ' ' . $timezone;
  }
  $date1 = str_replace($timezone, '', $date1);
  $date2 = str_replace($timezone, '', $date2);
  $time1 = preg_replace('`^([\(\[])`', '', $dates['value']['formatted_time']);
  $time1 = preg_replace('([\)\]]$)', '', $time1);
  $time1 = preg_replace('(den[\s]*)', '', $time1);
  $time2 = preg_replace('`^([\(\[])`', '', $dates['value2']['formatted_time']);
  $time2 = preg_replace('([\)\]]$)', '', $time2);
  $time2 = preg_replace('(den[\s]*)', '', $time2);
  $time1 = str_replace('d', '', $time1);
  $time2 = str_replace('d', '', $time2);

  // A date with a granularity of 'hour' has a time string that is an integer
  // value. We can't use that to replace time strings in formatted dates.
  $has_time_string = date_has_time($field['settings']['granularity']);
  if ($precision == 'hour') {
    $has_time_string = FALSE;
  }

  // No date values, display nothing.
  if (empty($date1) && empty($date2)) {
    $output .= '';
  }
  // Start and End dates match or there is no End date, display a complete
  // single date.
  elseif ($date1 == $date2 || empty($date2)) {
    $vars = array(
      'date' => $date1,
      'timezone' => $timezone,
      'attributes' => $attributes,
      'rdf_mapping' => $rdf_mapping,
      'add_rdf' => $add_rdf,
      'dates' => $dates,
    );
    $date_format = $display['settings']['format_type'];
    if (isset($date_matches[$date_format]['single'])) {
      $function = $date_matches[$date_format]['single'];
      $output .= $function($vars);
    }
    else {
      $output .= theme('date_display_single', $vars);
    }
  }

  else {
    $vars = array(
      'date1' => $date1,
      'date2' => $date2,
      'time1' => $time1,
      'time2' => $time2,
      'timezone' => $timezone,
      'attributes' => $attributes,
      'rdf_mapping' => $rdf_mapping,
      'add_rdf' => $add_rdf,
      'dates' => $dates,
    );

    $date_format = $display['settings']['format_type'];
    if (isset($date_matches[$date_format]['range'])) {
      $function = $date_matches[$date_format]['range'];
      $output .= $function($vars);
    }
    else {
      $output .= theme('date_display_range', $vars);
    }

  }
  return $output;
}




/**
 * Single date theme function for 'ec_date' date format.
 */
function ltk_ec_date_single($variables) {
  $day = $variables['dates']['value']['formatted_date'];
  $day = substr($day, 0, 1) . strtolower(substr($day, 1));
  $time = $variables['dates']['value']['formatted_time'];

  return
    '<div class="event-date"><label class="table-event-label">' . t('Date') . '</label>' . '<span class="event-date-data">' .
    t('!start-day', array(
      '!start-day' => $day,
    )) . '</span></div><div class="event-time">' .
    '<label class="table-event-label">' . t('Time') . '</label><span class="event-time-data">' .

    t('Kl. !start-time', array(
      '!start-time' => $time,
    )) . '</span></div>';
}

/**
 * Theme function for 'ec_date' date format.
 *
 * Outputs 'start-end' date in next format:
 *  - If start and end dates(without time) are equal then display it as separate
 *  date field and time field with two
 *    time items.
 *  - If not then display the datetime as one field.
 */
function ltk_ec_date_range($variables) {
  $day1 = $variables['dates']['value']['formatted_date'];
  $day1 = substr($day1, 0, 1) . strtolower(substr($day1, 1));
  $day2 = $variables['dates']['value2']['formatted_date'];
  $day2 = substr($day2, 0, 1) . strtolower(substr($day2, 1));
  $time1 = $variables['time1'];
  $time2 = $variables['time2'];

  if ($day1 === $day2) {
    return
      '<div class="event-date"><label class="table-event-label">' . t('Date') . '</label>' . '<span class="event-date-data">' .
      t('!start-day', array(
        '!start-day' => $day1,
      )) . '</span></div><div class="event-time">' .
      '<label class="table-event-label">' . t('Time') . '</label><span class="event-time-data">' .

      t('Kl. !start-time - !end-time', array(
        '!start-time' => $time1,
        '!end-time' => $time2,
      )) . '</span></div>';
  }
  else {
    return '<div class="event-date"><label class="table-event-label">' . t('Date') . '</label><span class="event-date-data">' .
    t("!start-day. Kl. !start-time", array(
      '!start-day' => $day1,
      '!start-time' => $time1,
    )) . '<br>' .
    t("!end-day. Kl. !end-time", array(
      '!end-day' => $day2,
      '!end-time' => $time2,
    )) . '</span></div>';
  }
}

/**
 * Single date theme function for 'ec_date_view' date format.
 */
function ltk_ec_date_view_single($variables) {
  $day = $variables['dates']['value']['formatted_date'];
  $day = substr($day, 0, 1) . strtolower(substr($day, 1));
  $time = $variables['dates']['value']['formatted_time'];
  $time = preg_replace('(den[\s]*)', '', $time);

  return
    '<div class="event-date"><label class="table-event-label">' . t('Date') . '</label>' . '<span class="event-date-data">' .
    t('!start-day', array(
      '!start-day' => $day,
    )) . '</span></div><div class="event-time">' .
    '<label class="table-event-label">' . t('Time') . '</label><span class="event-time-data">' .

    t('Kl. !start-time', array(
      '!start-time' => $time,
    )) . '</span></div>';
}

/**
 * Overrides theme_date_repeat_display().
 */
function ltk_date_repeat_display($vars) {
  $item = $vars['rv']['item'];
  $output = '';
  if (!empty($item['rrule'])) {
    $output = ltk_repeat_rrule_description($item['rrule']);
    $output = '<div class="event-date"><label class = "event-label">' . t('Date') . '</label>' . '<span class="data-val">' . $output . '</span></div>';
  }
  $day1 = strtotime($vars['dates']['value']['local']['datetime']);
  $day2 = strtotime($vars['dates']['value2']['local']['datetime']);
  if ((int) ($day1 / (60 * 60 * 24)) == (int) ($day1 / (60 * 60 * 24))) {

    $output .= '<div class="event-time"><label class="table-event-label">' . t('Time') . '</label><span class="event-time-data">' .
      t('Kl. !start-time - !end-time', array(
        '!start-time' => format_date($day1, 'custom', 'H:i'),
        '!end-time' => format_date($day2, 'custom', 'H:i'),
      )) . '</span></div>';

  }

  return $output;
}


