<?php
//error_reporting(E_ALL);
//ini_set('display_errors', 1);
/**
 * @file
 * Process theme data.
 *
 * Use this file to run your theme specific implimentations of theme functions,
 * such preprocess, process, alters, and theme function overrides.
 *
 * Preprocess and process functions are used to modify or create variables for
 * templates and theme functions. They are a common theming tool in Drupal, often
 * used as an alternative to directly editing or adding code to templates. Its
 * worth spending some time to learn more about these functions - they are a
 * powerful way to easily modify the output of any template variable.
 *
 * Preprocess and Process Functions SEE: http://drupal.org/node/254940#variables-processor
 * 1. Rename each function and instance of "ltk" to match
 *    your subthemes name, e.g. if your theme name is "footheme" then the function
 *    name will be "footheme_preprocess_hook". Tip - you can search/replace
 *    on "ltk".
 * 2. Uncomment the required function to use.
 */
include "dates.template.php";

/**
 * Preprocess variables for the html template.
 */
/* -- Delete this line to enable.
function ltk_preprocess_html(&$vars) {
  global $theme_key;

  // Two examples of adding custom classes to the body.

  // Add a body class for the active theme name.
  // $vars['classes_array'][] = drupal_html_class($theme_key);

  // Browser/platform sniff - adds body classes such as ipad, webkit, chrome etc.
  // $vars['classes_array'][] = css_browser_selector();

}
// */


/**
 * Process variables for the html template.
 */
/* -- Delete this line if you want to use this function
function ltk_process_html(&$vars) {
}
// */


/**
 * Override or insert variables for the page templates.
 */
/* -- Delete this line if you want to use these functions
function ltk_preprocess_page(&$vars) {
}
function ltk_process_page(&$vars) {
}
// */


/**
 * Override or insert variables into the node templates.
 */
function ltk_preprocess_node(&$vars) {
	if($vars['type'] == 'aabningstider') {
	//inspect($vars);
		unset($vars['content']['links']['statistics']['#links']['statistics_counter']);
	}

}
/*function ltk_process_node(&$vars) {
}
// */


/**
 * Override or insert variables into the comment templates.
 */
/* -- Delete this line if you want to use these functions
function ltk_preprocess_comment(&$vars) {
}
function ltk_process_comment(&$vars) {
}
// */


/**
 * Override or insert variables into the block templates.
 */
/* -- Delete this line if you want to use these functions
function ltk_preprocess_block(&$vars) {
}
function ltk_process_block(&$vars) {
}
// */


// Flyttet til preprocess_html() !
//drupal_add_css('http://fonts.googleapis.com/css?family=Source+Sans+Pro:300,400,500,600,700,400italic,700italic', array('group' => CSS_THEME, 'type' => 'external'));


/**
 * Form alters
 **/
function ltk_form_alter(&$form, &$form_state, $form_id) {
	if ($form_id == 'search_block_form') {
		// Add extra attributes to the text box
		$form['search_block_form']['#default_value'] = t('søg på ltk.dk');
		$form['search_block_form']['#attributes']['onblur'] = "if (this.value == '') {this.value = '" . t('søg på ltk.dk') ."';}";
		$form['search_block_form']['#attributes']['onfocus'] = "if (this.value == '". t('søg på ltk.dk') ."') {this.value = '';}";
	}
	if ($form_id == 'webform_client_form_15099'){
	$form['submitted']['firstname']['#title_display'] = 'invisible';
	$form['submitted']['firstname']['#default_value'] = $form['submitted']['firstname']['#title'];
	$form['submitted']['firstname']['#attributes']['onblur'] = "if (this.value == '') {this.value = '" . $form['submitted']['firstname']['#title'] ."';}";
	$form['submitted']['firstname']['#attributes']['onfocus'] = "if (this.value == '". $form['submitted']['firstname']['#title'] ."') {this.value = '';}";

	$form['submitted']['surname']['#title_display'] = 'invisible';
	$form['submitted']['surname']['#default_value'] = $form['submitted']['surname']['#title'];
	$form['submitted']['surname']['#attributes']['onblur'] = "if (this.value == '') {this.value = '" . $form['submitted']['surname']['#title'] ."';}";
	$form['submitted']['surname']['#attributes']['onfocus'] = "if (this.value == '". $form['submitted']['surname']['#title'] ."') {this.value = '';}";

	$form['submitted']['address']['#title_display'] = 'invisible';
	if(isset($form['submitted']['address']['#title'])) {$form['submitted']['address']['#default_value'] = $form['submitted']['address']['#title'];}
	$form['submitted']['address']['#attributes']['onblur'] = "if (this.value == '') {this.value = '" . $form['submitted']['address']['#title'] ."';}";
	$form['submitted']['address']['#attributes']['onfocus'] = "if (this.value == '". $form['submitted']['address']['#title'] ."') {this.value = '';}";

	$form['submitted']['postal']['#title_display'] = 'invisible';
	$form['submitted']['postal']['#default_value'] = $form['submitted']['postal']['#title'];
	$form['submitted']['postal']['#attributes']['onblur'] = "if (this.value == '') {this.value = '" . $form['submitted']['postal']['#title'] ."';}";
	$form['submitted']['postal']['#attributes']['onfocus'] = "if (this.value == '". $form['submitted']['postal']['#title'] ."') {this.value = '';}";

	$form['submitted']['email']['#title_display'] = 'invisible';
	//
	if($form['submitted']['email']['newsletter_email_address']['#default_value'] == ''){
	  //	  $form['submitted']['email']['newsletter_email_address']['#default_value'] = "EMAIL*";
	  $form['submitted']['email']['newsletter_email_address']['#default_value'] = $form['submitted']['email']['#title']; 
	  $form['submitted']['email']['newsletter_email_address']['#attributes']['onblur'] = "if (this.value == '') {this.value = '" . $form['submitted']['email']['#title'] ."';}";
	  $form['submitted']['email']['newsletter_email_address']['#attributes']['onfocus'] = "if (this.value == '". $form['submitted']['email']['#title'] ."') {this.value = '';}";
	}


	unset($form['submitted']['acceptdeals']['#theme_wrappers'][0]);
	unset($form['submitted']['acceptterms']['#theme_wrappers'][0]);
	/* var_dump($form['submitted']['firstname']);
	var_dump($form['submitted']['acceptdeals']); */
	}

	if ($form_id == 'ctools_jump_menu') {
	  $myformid = $form_state['build_info']['form_id'];
	  $form['jump']['#prefix'] .= '<label for="'.$myformid.'"><span class="element-invisible">Title</span></label>';
	}

	if ($form_id == 'webform-client-form-15099') {
	  $form['submitted']['email']['newsletter_selection']['#weight'] = -10;
	}
}

function ltk_preprocess_html(&$vars){
  //not used in css! drupal_add_css('http://fonts.googleapis.com/css?family=Source+Sans+Pro:300,400,500,600,700,400italic,700italic',
  //                  array('group' => CSS_THEME, 'type' => 'external'));
  /*$time = microtime();
$time = explode(' ', $time);
$time = $time[1] + $time[0];
$start = $time;*/
  $node = node_load(arg(1));
  /*$time = microtime();
$time = explode(' ', $time);
$time = $time[1] + $time[0];
$finish = $time;
$total_time = round(($finish - $start), 4);
inspect($total_time);*/
  if(isset($node->field_campaigncolor[LANGUAGE_NONE][0]['value'])){
    //var_dump($node->field_campaigncolor[LANGUAGE_NONE][0]['value'];
    $vars['classes_array'][] = $node->field_campaigncolor[LANGUAGE_NONE][0]['value'];
  }
  drupal_add_css('http://fonts.googleapis.com/css?family=Source+Sans+Pro:300,400,700,400italic,700italic', array('type' => 'external'));

  /*$menuItem = menu_get_item();
  if($menuItem){
	if($menuItem['page_arguments'][0] == 'newsarchive'){
	//var_dump($vars);
		$vars['classes_array'][] = 'page-search';
		//var_dump($menuItem['page_arguments']);
	}
  }*/
}

function ltk_preprocess_page(&$vars) {
	if(arg(0) == 'search'){hide($vars['page']['content']['system_main']['search_form']);}
  if (isset($vars['node']->type)) {
    $vars['theme_hook_suggestions'][] = 'page__' . $vars['node']->type;
  }
  //var_dump($vars);
  /*
  $menuItem = menu_get_item();
  //var_dump($menuItem['page_callback']);
  if($menuItem){
	if($menuItem['page_callback'] == 'views_page'){
	//var_dump($vars);
		//$vars['classes_array'][] = 'page-search';
		$vars['theme_hook_suggestions'][] = 'page__' . $menuItem['page_arguments'][0];
		//var_dump($menuItem['page_arguments']);
	}
  }
  */
}




/**
 * Themes each returned suggestion.
 */
function ltk_apachesolr_autocomplete_highlight($variables) {
  static $first = true;

  $html = '';
  $html .= '<div class="apachesolr_autocomplete suggestion clearfix">';
  $html .= '<strong>' . drupal_substr($variables['suggestion'], 0, strlen($variables['keys'])) . '</strong>' . drupal_substr($variables['suggestion'], strlen($variables['keys']));
  $html .= '</div>';
  if ($variables['count'] && $variables['show_counts']) {
    if ($first) {
      $html .= "<div class='apachesolr_autocomplete message' style='float:right;'>";
      $html .= t('!count results', array('!count' => $variables['count']));
      $html .= "</div><br style='clear:both'>";
      $first = false;
    } else {
      $html .= "<div class='apachesolr_autocomplete message count'>" . $variables['count'] . "</div>";
    }
  }
  return $html;
}


/**
 * Override date popup element theme function.
 *
 * Changes child elements id naming scheme to avoid ID conflicts.
 *
 * @see date/date_popup/date_popup.module for original
 */
function ltk_date_popup($vars) {
  $element = $vars['element'];
  $attributes = !empty($element['#wrapper_attributes']) ? $element['#wrapper_attributes'] : array('class' => array());
  $attributes['class'][] = 'container-inline-date';
  // If there is no description, the floating date elements need some extra padding below them.
  $wrapper_attributes = array('class' => array('date-padding'));
  if (empty($element['date']['#description'])) {
    $wrapper_attributes['class'][] = 'clearfix';
  }

  if (isset($element['date']['#id'])) {
    $element['#id'] = $element['date']['#id'];
  }

  // Add an wrapper to mimic the way a single value field works, for ease in using #states.
  if (isset($element['#children'])) {
    $element['#children'] = '<div id="' . $element['#id'] . '-wrapper" ' . drupal_attributes($wrapper_attributes) .'>' . $element['#children'] . '</div>';
  }
  return '<div ' . drupal_attributes($attributes) .'>' . theme('form_element', $element) . '</div>';
}

/**
 * Override select element as a set of checkboxes
 *
 * @see modules/better_exposed_filters/better_exposed_filters.theme
 *
 * @param array $vars - An array of arrays, the 'element' item holds the properties of the element.
 *                      Properties used: title, value, options, description
 * @return HTML string representing the form element.
 */
function ltk_select_as_checkboxes($vars) {
  $element = $vars['element'];
  if (!empty($element['#bef_nested'])) {
    if (empty($element['#attributes']['class'])) {
      $element['#attributes']['class'] = array();
    }
    $element['#attributes']['class'][] = 'form-checkboxes';
    return theme('select_as_tree', array('element' => $element));
  }

  // the selected keys from #options
  $selected_options = empty($element['#value']) ? $element['#default_value'] : $element['#value'];

  // Grab exposed filter description.  We'll put it under the label where it makes more sense.
  $description = '';
  if (!empty($element['#bef_description'])) {
    $description = '<div class="description">'. $element['#bef_description'] .'</div>';
  }

  $output = '<div class="bef-checkboxes">';
  foreach ($element['#options'] as $option => $elem) {
    if ('All' === $option) {
      // TODO: 'All' text is customizable in Views
      // No need for an 'All' option -- either unchecking or checking all the checkboxes is equivalent
      continue;
    }

    // Check for Taxonomy-based filters
    if (is_object($elem)) {
      $slice = array_slice($elem->option, 0, 1, TRUE);
      list($option, $elem) = each($slice);
    }

    /*
     * Check for optgroups.  Put subelements in the $element_set array and add a group heading.
     * Otherwise, just add the element to the set
     */
    $element_set = array();
    $is_optgroup = FALSE;
    if (is_array($elem)) {
      $output .= '<div class="bef-group">';
      $output .= '<div class="bef-group-heading">' . $option . '</div>';
      $output .= '<div class="bef-group-items">';
      $element_set = $elem;
      $is_optgroup = TRUE;
    }
    else {
      $element_set[$option] = $elem;
    }

    if (isset($element['#attributes']['multiple'])) {
      unset($element['#attributes']['multiple']);
    }

    foreach ($element_set as $key => $value) {
      $output .= bef_checkbox($element, $key, $value, array_search($key, $selected_options) !== FALSE);
    }

    if ($is_optgroup) {
      $output .= '</div></div>';    // Close group and item <div>s
    }

  }
  $output .= '</div>';

  // Fake theme_checkboxes() which we can't call because it calls theme_form_element() for each option
  $attributes['class'] = array('form-checkboxes', 'bef-select-as-checkboxes');
  if (!empty($element['#bef_select_all_none'])) {
    $attributes['class'][] = 'bef-select-all-none';
  }
  if (!empty($element['#attributes']['class'])) {
    $attributes['class'] = array_merge($element['#attributes']['class'], $attributes['class']);
  }

  return '<div' . drupal_attributes($attributes) . ">$description$output</div>";
}


/**
 * Override theme_pager_link() to make sure that '[' and ']' gets urlencoded
 *
 * url() does not provide RFC compliant urls apparently.
 * @see: https://api.drupal.org/api/drupal/includes!common.inc/function/drupal_http_build_query/7
 */
function ltk_pager_link($variables) {
  $text = $variables['text'];
  $page_new = $variables['page_new'];
  $element = $variables['element'];
  $parameters = $variables['parameters'];
  $attributes = $variables['attributes'];

  $page = isset($_GET['page']) ? $_GET['page'] : '';
  if ($new_page = implode(',', pager_load_array($page_new[$element], $element, explode(',', $page)))) {
    $parameters['page'] = $new_page;
  }

  $query = array();
  if (count($parameters)) {
    $query = drupal_get_query_parameters($parameters, array());
  }
  if ($query_pager = pager_get_query_parameters()) {
    $query = array_merge($query, $query_pager);
  }

  // Set each pager link title
  if (!isset($attributes['title'])) {
    static $titles = NULL;
    if (!isset($titles)) {
      $titles = array(
        t('« first') => t('Go to first page'),
        t('‹ previous') => t('Go to previous page'),
        t('next ›') => t('Go to next page'),
        t('last »') => t('Go to last page'),
      );
    }
    if (isset($titles[$text])) {
      $attributes['title'] = $titles[$text];
    }
    elseif (is_numeric($text)) {
      $attributes['title'] = t('Go to page @number', array('@number' => $text));
    }
  }

  // @todo l() cannot be used here, since it adds an 'active' class based on the
  //   path only (which is always the current path for pager links). Apparently,
  //   none of the pager links is active at any time - but it should still be
  //   possible to use l() here.
  // @see http://drupal.org/node/1410574
  $attributes['href'] = url($_GET['q'], array('query' => $query));
  $attributes['href'] = str_replace('[', '%5b', $attributes['href']);
  $attributes['href'] = str_replace(']', '%5d', $attributes['href']);
  return '<a' . drupal_attributes($attributes) . '>' . check_plain($text) . '</a>';
}

/**
 * Process variables for search-result.tpl.php.
 *
 * The $variables array contains the following arguments:
 * - $result
 * - $module
 *
 * @see search-result.tpl.php
 */
function ltk_preprocess_search_result(&$vars) {
  if ($vars['result']['entity_type'] == 'node' && $vars['result']['bundle'] == 'press2go') {
    try {
      $node_wrapper = entity_metadata_wrapper('node', $vars['result']['fields']['entity_id']);
      $vars['url'] = $node_wrapper->field_url->value();
    } catch (EntityMetadataWrapperException $e) {
      // kill the error, and don't do anything.
    }
  }
}

/**
 * @see apachesolr_attachment.module
 * @param type $vars
 * @return type
 *
 * Themer snippet linien i filattachment soegeresultater
 */
function ltk_apachesolr_search_snippets__file($vars) {
  $doc = $vars['doc'];
  $snippets = $vars['snippets'];
  $parent_entity_links = array();

  // Retrieve our parent entities. They have been saved as
  // a small serialized entity
  foreach ($doc->zm_parent_entity as $parent_entity_encoded) {
    $parent_entity = (object) drupal_json_decode($parent_entity_encoded);
    $parent_entity_uri = entity_uri($parent_entity->entity_type, $parent_entity);
    $parent_entity_uri['options']['absolute'] = TRUE;
    $parent_label = entity_label($parent_entity->entity_type, $parent_entity);
    $parent_entity_links[] = l($parent_label, $parent_entity_uri['path'], $parent_entity_uri['options']);
  }

  if (module_exists('file')) {
    $file_type = t('!icon @filemime', array('@filemime' => $doc->ss_filemime, '!icon' => theme('file_icon', array('file' => (object) array('filemime' => $doc->ss_filemime)))));
  }
  else {
    $file_type = t('@filemime', array('@filemime' => $doc->ss_filemime));
  }

  return "<span>Fundet i $file_type <em>på siden</em> " . implode(', ', $parent_entity_links) . '</span>';
}
