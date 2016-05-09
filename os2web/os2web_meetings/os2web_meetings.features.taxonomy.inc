<?php
/**
 * @file
 * os2web_meetings.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function os2web_meetings_taxonomy_default_vocabularies() {
  return array(
    'os2web_meetings_tax_committee' => array(
      'name' => 'OS2Web Meetings: Committees',
      'machine_name' => 'os2web_meetings_tax_committee',
      'description' => 'The committee having the meeting.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'os2web_meetings_tax_location' => array(
      'name' => 'OS2Web Meetings: Locations',
      'machine_name' => 'os2web_meetings_tax_location',
      'description' => 'The location where the meeting took place.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'os2web_meetings_tax_status' => array(
      'name' => 'OS2Web Meetings: Status',
      'machine_name' => 'os2web_meetings_tax_status',
      'description' => 'Represents the current status of the meeting.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
