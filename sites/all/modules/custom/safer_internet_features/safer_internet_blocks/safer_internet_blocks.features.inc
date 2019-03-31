<?php

/**
 * @file
 * safer_internet_blocks.features.inc
 */

/**
 * Implements hook_views_api().
 */
function safer_internet_blocks_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function safer_internet_blocks_image_default_styles() {
  $styles = array();

  // Exported image style: sidebar_thumb__210x270_.
  $styles['sidebar_thumb__210x270_'] = array(
    'label' => 'Sidebar thumb (210x270)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 210,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      2 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 210,
          'height' => 270,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
