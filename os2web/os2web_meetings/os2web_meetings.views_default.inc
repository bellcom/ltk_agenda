<?php
/**
 * @file
 * os2web_meetings.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os2web_meetings_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'os2web_meetings';
  $view->description = 'Listing and panes for the OS2Web meetings ';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'OS2Web Meetings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Upcomming meetings';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '-1';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '-1';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Avancerede indstillinger',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_os2web_meetings_date_value' => array(
      'bef_format' => 'bef_datepicker',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_os2web_meetings_date_value_1' => array(
      'bef_format' => 'bef_datepicker',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_os2web_meetings_committee_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'newsletter';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'field_os2web_meetings_committee' => 'field_os2web_meetings_committee',
    'field_os2web_meetings_date' => 'field_os2web_meetings_date',
    'field_os2web_meetings_location' => 'field_os2web_meetings_location',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_os2web_meetings_committee' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_os2web_meetings_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_os2web_meetings_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'os2web_meetings_meeting/[nid]';
  /* Felt: Indhold: Committee */
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['id'] = 'field_os2web_meetings_committee';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['table'] = 'field_data_field_os2web_meetings_committee';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['field'] = 'field_os2web_meetings_committee';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['label'] = 'Udvalg';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Date */
  $handler->display->display_options['fields']['field_os2web_meetings_date']['id'] = 'field_os2web_meetings_date';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['table'] = 'field_data_field_os2web_meetings_date';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['field'] = 'field_os2web_meetings_date';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_meetings_date']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_meetings_date']['settings'] = array(
    'format_type' => 'os2web_meetings_short_date',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Sorteringskriterie: Indhold: Date -  startdato (field_os2web_meetings_date) */
  $handler->display->display_options['sorts']['field_os2web_meetings_date_value']['id'] = 'field_os2web_meetings_date_value';
  $handler->display->display_options['sorts']['field_os2web_meetings_date_value']['table'] = 'field_data_field_os2web_meetings_date';
  $handler->display->display_options['sorts']['field_os2web_meetings_date_value']['field'] = 'field_os2web_meetings_date_value';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_meetings_meeting' => 'os2web_meetings_meeting',
  );
  /* Filterkriterie: Indhold: Date -  startdato (field_os2web_meetings_date) */
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['id'] = 'field_os2web_meetings_date_value';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['table'] = 'field_data_field_os2web_meetings_date';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['field'] = 'field_os2web_meetings_date_value';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['expose']['operator_id'] = 'field_os2web_meetings_date_value_op';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['expose']['label'] = 'Date -  start date (field_os2web_meetings_date)';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['expose']['operator'] = 'field_os2web_meetings_date_value_op';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['expose']['identifier'] = 'field_os2web_meetings_date_value';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Meeting agendas and summaries';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'dagsorden';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'field_os2web_meetings_committee' => 'field_os2web_meetings_committee',
    'field_os2web_meetings_date' => 'field_os2web_meetings_date',
    'field_os2web_meetings_location' => 'field_os2web_meetings_location',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_os2web_meetings_committee' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_os2web_meetings_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_os2web_meetings_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_meetings_meeting' => 'os2web_meetings_meeting',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Indhold: Date -  startdato (field_os2web_meetings_date) */
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['id'] = 'field_os2web_meetings_date_value';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['table'] = 'field_data_field_os2web_meetings_date';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['field'] = 'field_os2web_meetings_date_value';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['expose']['operator_id'] = 'field_os2web_meetings_date_value_op';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['expose']['label'] = 'Fra dato';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['expose']['operator'] = 'field_os2web_meetings_date_value_op';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['expose']['identifier'] = 'meetings_from_date';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['default_date'] = '-1 month';
  /* Filterkriterie: Indhold: Date -  startdato (field_os2web_meetings_date) */
  $handler->display->display_options['filters']['field_os2web_meetings_date_value_1']['id'] = 'field_os2web_meetings_date_value_1';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value_1']['table'] = 'field_data_field_os2web_meetings_date';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value_1']['field'] = 'field_os2web_meetings_date_value';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value_1']['operator'] = '<=';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_os2web_meetings_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_os2web_meetings_date_value_1']['expose']['operator_id'] = 'field_os2web_meetings_date_value_1_op';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value_1']['expose']['label'] = 'TIl dato';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value_1']['expose']['operator'] = 'field_os2web_meetings_date_value_1_op';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value_1']['expose']['identifier'] = 'meetings_to_date';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_os2web_meetings_date_value_1']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value_1']['default_date'] = '+14 days';
  /* Filterkriterie: Indhold: Committee (field_os2web_meetings_committee) */
  $handler->display->display_options['filters']['field_os2web_meetings_committee_tid']['id'] = 'field_os2web_meetings_committee_tid';
  $handler->display->display_options['filters']['field_os2web_meetings_committee_tid']['table'] = 'field_data_field_os2web_meetings_committee';
  $handler->display->display_options['filters']['field_os2web_meetings_committee_tid']['field'] = 'field_os2web_meetings_committee_tid';
  $handler->display->display_options['filters']['field_os2web_meetings_committee_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_os2web_meetings_committee_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_os2web_meetings_committee_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_os2web_meetings_committee_tid']['expose']['operator_id'] = 'field_os2web_meetings_committee_tid_op';
  $handler->display->display_options['filters']['field_os2web_meetings_committee_tid']['expose']['label'] = 'Udvalg';
  $handler->display->display_options['filters']['field_os2web_meetings_committee_tid']['expose']['operator'] = 'field_os2web_meetings_committee_tid_op';
  $handler->display->display_options['filters']['field_os2web_meetings_committee_tid']['expose']['identifier'] = 'meetings_committee';
  $handler->display->display_options['filters']['field_os2web_meetings_committee_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_os2web_meetings_committee_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    14 => 0,
    9 => 0,
    16 => 0,
    4 => 0,
    15 => 0,
    8 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    13 => 0,
  );
  $handler->display->display_options['filters']['field_os2web_meetings_committee_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_os2web_meetings_committee_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_os2web_meetings_committee_tid']['vocabulary'] = 'os2web_meetings_tax_committee';
  /* Filterkriterie: Addenum */
  $handler->display->display_options['filters']['field_os2web_meetings_addendum_nid']['id'] = 'field_os2web_meetings_addendum_nid';
  $handler->display->display_options['filters']['field_os2web_meetings_addendum_nid']['table'] = 'field_data_field_os2web_meetings_addendum';
  $handler->display->display_options['filters']['field_os2web_meetings_addendum_nid']['field'] = 'field_os2web_meetings_addendum_nid';
  $handler->display->display_options['filters']['field_os2web_meetings_addendum_nid']['ui_name'] = 'Addenum';
  $handler->display->display_options['filters']['field_os2web_meetings_addendum_nid']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_os2web_meetings_addendum_nid']['group'] = 1;
  $handler->display->display_options['path'] = 'dagsorden-og-referat';

  /* Display: Upcomming meetings */
  $handler = $view->new_display('panel_pane', 'Upcomming meetings', 'panel_pane_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'os2web_meetings_meeting/[nid]';
  /* Felt: Indhold: Committee */
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['id'] = 'field_os2web_meetings_committee';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['table'] = 'field_data_field_os2web_meetings_committee';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['field'] = 'field_os2web_meetings_committee';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['label'] = 'Udvalg';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Addendum to */
  $handler->display->display_options['fields']['field_os2web_meetings_addendum']['id'] = 'field_os2web_meetings_addendum';
  $handler->display->display_options['fields']['field_os2web_meetings_addendum']['table'] = 'field_data_field_os2web_meetings_addendum';
  $handler->display->display_options['fields']['field_os2web_meetings_addendum']['field'] = 'field_os2web_meetings_addendum';
  $handler->display->display_options['fields']['field_os2web_meetings_addendum']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_meetings_addendum']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_meetings_addendum']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_meetings_addendum']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_meetings_addendum']['type'] = 'node_reference_nid';
  /* Felt: Handler mangler eller er i stykker */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = 'Udvalg';
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Date */
  $handler->display->display_options['fields']['field_os2web_meetings_date']['id'] = 'field_os2web_meetings_date';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['table'] = 'field_data_field_os2web_meetings_date';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['field'] = 'field_os2web_meetings_date';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_meetings_date']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_meetings_date']['settings'] = array(
    'format_type' => 'os2web_meetings_short_date',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_meetings_meeting' => 'os2web_meetings_meeting',
  );
  /* Filterkriterie: Indhold: Date -  startdato (field_os2web_meetings_date) */
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['id'] = 'field_os2web_meetings_date_value';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['table'] = 'field_data_field_os2web_meetings_date';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['field'] = 'field_os2web_meetings_date_value';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['expose']['operator_id'] = 'field_os2web_meetings_date_value_op';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['expose']['label'] = 'Date -  start date (field_os2web_meetings_date)';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['expose']['operator'] = 'field_os2web_meetings_date_value_op';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['expose']['identifier'] = 'field_os2web_meetings_date_value';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['default_date'] = 'now';
  /* Filterkriterie: Indhold: Type (field_os2web_meetings_type) */
  $handler->display->display_options['filters']['field_os2web_meetings_type_value']['id'] = 'field_os2web_meetings_type_value';
  $handler->display->display_options['filters']['field_os2web_meetings_type_value']['table'] = 'field_data_field_os2web_meetings_type';
  $handler->display->display_options['filters']['field_os2web_meetings_type_value']['field'] = 'field_os2web_meetings_type_value';
  $handler->display->display_options['filters']['field_os2web_meetings_type_value']['value'] = array(
    'Dagsorden' => 'Dagsorden',
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Latest meetings */
  $handler = $view->new_display('panel_pane', 'Latest meetings', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Seneste møder med publicerede referater';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Date -  startdato (field_os2web_meetings_date) */
  $handler->display->display_options['sorts']['field_os2web_meetings_date_value']['id'] = 'field_os2web_meetings_date_value';
  $handler->display->display_options['sorts']['field_os2web_meetings_date_value']['table'] = 'field_data_field_os2web_meetings_date';
  $handler->display->display_options['sorts']['field_os2web_meetings_date_value']['field'] = 'field_os2web_meetings_date_value';
  $handler->display->display_options['sorts']['field_os2web_meetings_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_meetings_meeting' => 'os2web_meetings_meeting',
  );
  /* Filterkriterie: Indhold: Date -  startdato (field_os2web_meetings_date) */
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['id'] = 'field_os2web_meetings_date_value';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['table'] = 'field_data_field_os2web_meetings_date';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['field'] = 'field_os2web_meetings_date_value';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['expose']['operator_id'] = 'field_os2web_meetings_date_value_op';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['expose']['label'] = 'Date -  start date (field_os2web_meetings_date)';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['expose']['operator'] = 'field_os2web_meetings_date_value_op';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['expose']['identifier'] = 'field_os2web_meetings_date_value';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['default_date'] = 'now';
  /* Filterkriterie: Indhold: Type (field_os2web_meetings_type) */
  $handler->display->display_options['filters']['field_os2web_meetings_type_value']['id'] = 'field_os2web_meetings_type_value';
  $handler->display->display_options['filters']['field_os2web_meetings_type_value']['table'] = 'field_data_field_os2web_meetings_type';
  $handler->display->display_options['filters']['field_os2web_meetings_type_value']['field'] = 'field_os2web_meetings_type_value';
  $handler->display->display_options['filters']['field_os2web_meetings_type_value']['value'] = array(
    'Referat' => 'Referat',
  );
  /* Filterkriterie: Indhold: Addendum to (field_os2web_meetings_addendum) */
  $handler->display->display_options['filters']['field_os2web_meetings_addendum_nid']['id'] = 'field_os2web_meetings_addendum_nid';
  $handler->display->display_options['filters']['field_os2web_meetings_addendum_nid']['table'] = 'field_data_field_os2web_meetings_addendum';
  $handler->display->display_options['filters']['field_os2web_meetings_addendum_nid']['field'] = 'field_os2web_meetings_addendum_nid';
  $handler->display->display_options['filters']['field_os2web_meetings_addendum_nid']['operator'] = 'empty';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Listing with exposed filters */
  $handler = $view->new_display('panel_pane', 'Listing with exposed filters', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Meetings list';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'os2web_meetings_meeting/[nid]';
  /* Felt: Indhold: Committee */
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['id'] = 'field_os2web_meetings_committee';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['table'] = 'field_data_field_os2web_meetings_committee';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['field'] = 'field_os2web_meetings_committee';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['label'] = 'Udvalg';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Addendum to */
  $handler->display->display_options['fields']['field_os2web_meetings_addendum']['id'] = 'field_os2web_meetings_addendum';
  $handler->display->display_options['fields']['field_os2web_meetings_addendum']['table'] = 'field_data_field_os2web_meetings_addendum';
  $handler->display->display_options['fields']['field_os2web_meetings_addendum']['field'] = 'field_os2web_meetings_addendum';
  $handler->display->display_options['fields']['field_os2web_meetings_addendum']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_meetings_addendum']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_meetings_addendum']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_meetings_addendum']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_meetings_addendum']['type'] = 'node_reference_nid';
  /* Felt: Handler mangler eller er i stykker */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = 'Udvalg';
  $handler->display->display_options['fields']['views_conditional']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Date */
  $handler->display->display_options['fields']['field_os2web_meetings_date']['id'] = 'field_os2web_meetings_date';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['table'] = 'field_data_field_os2web_meetings_date';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['field'] = 'field_os2web_meetings_date';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_meetings_date']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_meetings_date']['settings'] = array(
    'format_type' => 'os2web_meetings_short_date',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Date -  startdato (field_os2web_meetings_date) */
  $handler->display->display_options['sorts']['field_os2web_meetings_date_value']['id'] = 'field_os2web_meetings_date_value';
  $handler->display->display_options['sorts']['field_os2web_meetings_date_value']['table'] = 'field_data_field_os2web_meetings_date';
  $handler->display->display_options['sorts']['field_os2web_meetings_date_value']['field'] = 'field_os2web_meetings_date_value';
  $handler->display->display_options['sorts']['field_os2web_meetings_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_meetings_meeting' => 'os2web_meetings_meeting',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Indhold: Date -  startdato (field_os2web_meetings_date) */
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['id'] = 'field_os2web_meetings_date_value';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['table'] = 'field_data_field_os2web_meetings_date';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['field'] = 'field_os2web_meetings_date_value';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['expose']['operator_id'] = 'field_os2web_meetings_date_value_op';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['expose']['label'] = 'Fra dato';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['expose']['operator'] = 'field_os2web_meetings_date_value_op';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['expose']['identifier'] = 'meetings_date_from';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['group_info']['label'] = 'Date -  start date (field_os2web_meetings_date)';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['group_info']['identifier'] = 'field_os2web_meetings_date_value';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['default_date'] = '-12 months';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['year_range'] = '-10:+10';
  /* Filterkriterie: Indhold: Date -  startdato (field_os2web_meetings_date) */
  $handler->display->display_options['filters']['field_os2web_meetings_date_value_1']['id'] = 'field_os2web_meetings_date_value_1';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value_1']['table'] = 'field_data_field_os2web_meetings_date';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value_1']['field'] = 'field_os2web_meetings_date_value';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value_1']['operator'] = '<=';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_os2web_meetings_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_os2web_meetings_date_value_1']['expose']['operator_id'] = 'field_os2web_meetings_date_value_1_op';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value_1']['expose']['label'] = 'Til dato';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value_1']['expose']['operator'] = 'field_os2web_meetings_date_value_1_op';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value_1']['expose']['identifier'] = 'meetings_to_date';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_os2web_meetings_date_value_1']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value_1']['default_date'] = '+14 days';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value_1']['year_range'] = '-10:+10';
  /* Filterkriterie: Indhold: Committee (field_os2web_meetings_committee) */
  $handler->display->display_options['filters']['field_os2web_meetings_committee_tid']['id'] = 'field_os2web_meetings_committee_tid';
  $handler->display->display_options['filters']['field_os2web_meetings_committee_tid']['table'] = 'field_data_field_os2web_meetings_committee';
  $handler->display->display_options['filters']['field_os2web_meetings_committee_tid']['field'] = 'field_os2web_meetings_committee_tid';
  $handler->display->display_options['filters']['field_os2web_meetings_committee_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_os2web_meetings_committee_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_os2web_meetings_committee_tid']['expose']['operator_id'] = 'field_os2web_meetings_committee_tid_op';
  $handler->display->display_options['filters']['field_os2web_meetings_committee_tid']['expose']['label'] = 'Udvalg';
  $handler->display->display_options['filters']['field_os2web_meetings_committee_tid']['expose']['operator'] = 'field_os2web_meetings_committee_tid_op';
  $handler->display->display_options['filters']['field_os2web_meetings_committee_tid']['expose']['identifier'] = 'field_os2web_meetings_committee_tid';
  $handler->display->display_options['filters']['field_os2web_meetings_committee_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_os2web_meetings_committee_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_os2web_meetings_committee_tid']['vocabulary'] = 'os2web_meetings_tax_committee';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Listing pane with committee filter */
  $handler = $view->new_display('panel_pane', 'Listing pane with committee filter', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Meetings list';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'field_os2web_meetings_committee' => 'field_os2web_meetings_committee',
    'field_os2web_meetings_date' => 'field_os2web_meetings_date',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_os2web_meetings_committee' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_os2web_meetings_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'os2web_meetings_meeting/[nid]';
  /* Felt: Indhold: Committee */
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['id'] = 'field_os2web_meetings_committee';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['table'] = 'field_data_field_os2web_meetings_committee';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['field'] = 'field_os2web_meetings_committee';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_meetings_committee']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Indhold: Date */
  $handler->display->display_options['fields']['field_os2web_meetings_date']['id'] = 'field_os2web_meetings_date';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['table'] = 'field_data_field_os2web_meetings_date';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['field'] = 'field_os2web_meetings_date';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_meetings_date']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_meetings_date']['settings'] = array(
    'format_type' => 'os2web_meetings_short_date',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Date -  startdato (field_os2web_meetings_date) */
  $handler->display->display_options['sorts']['field_os2web_meetings_date_value']['id'] = 'field_os2web_meetings_date_value';
  $handler->display->display_options['sorts']['field_os2web_meetings_date_value']['table'] = 'field_data_field_os2web_meetings_date';
  $handler->display->display_options['sorts']['field_os2web_meetings_date_value']['field'] = 'field_os2web_meetings_date_value';
  $handler->display->display_options['sorts']['field_os2web_meetings_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Committee (field_os2web_meetings_committee) */
  $handler->display->display_options['arguments']['field_os2web_meetings_committee_tid']['id'] = 'field_os2web_meetings_committee_tid';
  $handler->display->display_options['arguments']['field_os2web_meetings_committee_tid']['table'] = 'field_data_field_os2web_meetings_committee';
  $handler->display->display_options['arguments']['field_os2web_meetings_committee_tid']['field'] = 'field_os2web_meetings_committee_tid';
  $handler->display->display_options['arguments']['field_os2web_meetings_committee_tid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_os2web_meetings_committee_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_os2web_meetings_committee_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_os2web_meetings_committee_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_os2web_meetings_committee_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_os2web_meetings_committee_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_meetings_meeting' => 'os2web_meetings_meeting',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Indhold: Addendum to (field_os2web_meetings_addendum) */
  $handler->display->display_options['filters']['field_os2web_meetings_addendum_nid']['id'] = 'field_os2web_meetings_addendum_nid';
  $handler->display->display_options['filters']['field_os2web_meetings_addendum_nid']['table'] = 'field_data_field_os2web_meetings_addendum';
  $handler->display->display_options['filters']['field_os2web_meetings_addendum_nid']['field'] = 'field_os2web_meetings_addendum_nid';
  $handler->display->display_options['filters']['field_os2web_meetings_addendum_nid']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_os2web_meetings_addendum_nid']['group'] = 1;
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_os2web_meetings_committee_tid' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Committee term ID',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Listing pane for specific committee and with exposed date filter */
  $handler = $view->new_display('panel_pane', 'Listing pane for specific committee and with exposed date filter', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Meetings list';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_os2web_meetings_type' => 'field_os2web_meetings_type',
    'field_os2web_meetings_date' => 'field_os2web_meetings_date',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_os2web_meetings_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_os2web_meetings_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Type */
  $handler->display->display_options['fields']['field_os2web_meetings_type']['id'] = 'field_os2web_meetings_type';
  $handler->display->display_options['fields']['field_os2web_meetings_type']['table'] = 'field_data_field_os2web_meetings_type';
  $handler->display->display_options['fields']['field_os2web_meetings_type']['field'] = 'field_os2web_meetings_type';
  $handler->display->display_options['fields']['field_os2web_meetings_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_meetings_type']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_meetings_type']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_os2web_meetings_type']['alter']['path_case'] = 'ucfirst';
  $handler->display->display_options['fields']['field_os2web_meetings_type']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Addendum to */
  $handler->display->display_options['fields']['field_os2web_meetings_addendum']['id'] = 'field_os2web_meetings_addendum';
  $handler->display->display_options['fields']['field_os2web_meetings_addendum']['table'] = 'field_data_field_os2web_meetings_addendum';
  $handler->display->display_options['fields']['field_os2web_meetings_addendum']['field'] = 'field_os2web_meetings_addendum';
  $handler->display->display_options['fields']['field_os2web_meetings_addendum']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_meetings_addendum']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_meetings_addendum']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_meetings_addendum']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_meetings_addendum']['type'] = 'node_reference_nid';
  /* Felt: Handler mangler eller er i stykker */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = 'Type';
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Date */
  $handler->display->display_options['fields']['field_os2web_meetings_date']['id'] = 'field_os2web_meetings_date';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['table'] = 'field_data_field_os2web_meetings_date';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['field'] = 'field_os2web_meetings_date';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['label'] = 'Dato';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_os2web_meetings_date']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_os2web_meetings_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_os2web_meetings_date']['settings'] = array(
    'format_type' => 'os2web_meetings_short_date',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Date -  startdato (field_os2web_meetings_date) */
  $handler->display->display_options['sorts']['field_os2web_meetings_date_value']['id'] = 'field_os2web_meetings_date_value';
  $handler->display->display_options['sorts']['field_os2web_meetings_date_value']['table'] = 'field_data_field_os2web_meetings_date';
  $handler->display->display_options['sorts']['field_os2web_meetings_date_value']['field'] = 'field_os2web_meetings_date_value';
  $handler->display->display_options['sorts']['field_os2web_meetings_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Committee (field_os2web_meetings_committee) */
  $handler->display->display_options['arguments']['field_os2web_meetings_committee_tid']['id'] = 'field_os2web_meetings_committee_tid';
  $handler->display->display_options['arguments']['field_os2web_meetings_committee_tid']['table'] = 'field_data_field_os2web_meetings_committee';
  $handler->display->display_options['arguments']['field_os2web_meetings_committee_tid']['field'] = 'field_os2web_meetings_committee_tid';
  $handler->display->display_options['arguments']['field_os2web_meetings_committee_tid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_os2web_meetings_committee_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_os2web_meetings_committee_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_os2web_meetings_committee_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_os2web_meetings_committee_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_os2web_meetings_committee_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_os2web_meetings_committee_tid']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_meetings_meeting' => 'os2web_meetings_meeting',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterie: Indhold: Date -  startdato (field_os2web_meetings_date) */
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['id'] = 'field_os2web_meetings_date_value';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['table'] = 'field_data_field_os2web_meetings_date';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['field'] = 'field_os2web_meetings_date_value';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['expose']['operator_id'] = 'field_os2web_meetings_date_value_op';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['expose']['label'] = 'Fra dato';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['expose']['operator'] = 'field_os2web_meetings_date_value_op';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['expose']['identifier'] = 'meetings_from_date';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['default_date'] = '-12 months';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value']['year_range'] = '-10:+10';
  /* Filterkriterie: Indhold: Date -  startdato (field_os2web_meetings_date) */
  $handler->display->display_options['filters']['field_os2web_meetings_date_value_1']['id'] = 'field_os2web_meetings_date_value_1';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value_1']['table'] = 'field_data_field_os2web_meetings_date';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value_1']['field'] = 'field_os2web_meetings_date_value';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value_1']['operator'] = '<=';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_os2web_meetings_date_value_1']['expose']['operator_id'] = 'field_os2web_meetings_date_value_1_op';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value_1']['expose']['label'] = 'Til dato';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value_1']['expose']['operator'] = 'field_os2web_meetings_date_value_1_op';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value_1']['expose']['identifier'] = 'meetings_to_date';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_os2web_meetings_date_value_1']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value_1']['default_date'] = '+14 days';
  $handler->display->display_options['filters']['field_os2web_meetings_date_value_1']['year_range'] = '-10:+10';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_os2web_meetings_committee_tid' => array(
      'type' => 'user',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Committee term ID',
    ),
  );
  $handler->display->display_options['link_to_view'] = '0';
  $handler->display->display_options['inherit_panels_path'] = '1';
  $translatables['os2web_meetings'] = array(
    t('Master'),
    t('Upcomming meetings'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Avancerede indstillinger'),
    t('Vælg et filter og klik på Anvend for at se resultater'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Titel'),
    t('Udvalg'),
    t('Date -  start date (field_os2web_meetings_date)'),
    t('Page'),
    t('Meeting agendas and summaries'),
    t('Fra dato'),
    t('TIl dato'),
    t('View panes'),
    t('Latest meetings'),
    t('Seneste møder med publicerede referater'),
    t('Listing with exposed filters'),
    t('Meetings list'),
    t('Til dato'),
    t('Listing pane with committee filter'),
    t('Alle'),
    t('Listing pane for specific committee and with exposed date filter'),
    t('Type'),
    t('Dato'),
  );
  $export['os2web_meetings'] = $view;

  return $export;
}
