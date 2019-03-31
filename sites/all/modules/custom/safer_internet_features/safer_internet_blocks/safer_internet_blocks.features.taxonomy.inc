<?php

/**
 * @file
 * safer_internet_blocks.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function safer_internet_blocks_taxonomy_default_vocabularies() {
  return array(
    'organisation' => array(
      'name' => 'Organisation',
      'machine_name' => 'organisation',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'rapporttype' => array(
      'name' => 'Linkkategori',
      'machine_name' => 'rapporttype',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
