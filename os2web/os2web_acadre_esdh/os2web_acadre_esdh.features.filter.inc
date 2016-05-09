<?php
/**
 * @file
 * os2web_acadre_esdh.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function os2web_acadre_esdh_filter_default_formats() {
  $formats = array();

  // Exported format: OS2Web Acadre ESDH.
  $formats['os2web_acadre_esdh'] = array(
    'format' => 'os2web_acadre_esdh',
    'name' => 'OS2Web Acadre ESDH',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_url' => array(
        'weight' => -50,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_html' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <table> <tr> <td> <th> <thead> <tfoot> <tbody> <h1> <h2> <h3> <b> <i> <p> <br /> <br> <a>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 1,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -46,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
