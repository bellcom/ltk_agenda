<?php
/**
 * @file
 * os2web_meetings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_meetings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function os2web_meetings_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function os2web_meetings_node_info() {
  $items = array(
    'os2web_meetings_bullet' => array(
      'name' => t('Meetings: Bullet Point'),
      'base' => 'node_content',
      'description' => t('Bullet point on a meeting or agenda.'),
      'has_title' => '1',
      'title_label' => t('Overskrift'),
      'help' => '',
    ),
    'os2web_meetings_bullet_attach' => array(
      'name' => t('Meetings: Bullet Point Attachment'),
      'base' => 'node_content',
      'description' => t('An attachment to a meeting bullet point.'),
      'has_title' => '1',
      'title_label' => t('Overskrift'),
      'help' => '',
    ),
    'os2web_meetings_meeting' => array(
      'name' => t('Meetings: Meeting'),
      'base' => 'node_content',
      'description' => t('Meeting or agenda imported from an ESDH system.'),
      'has_title' => '1',
      'title_label' => t('Overskrift'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
