<?php

/**
 * @file
 * safer_internet_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function safer_internet_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function safer_internet_content_types_node_info() {
  $items = array(
    'link' => array(
      'name' => t('Link'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Side'),
      'base' => 'node_content',
      'description' => t('En <em>side</em>, som minder om en <em>artikel</em>, gør det nemt at oprette og vise indhold, der sjældent ændres, som f.eks. en "Om os"-sektion. Som standard tillader <em>sider</em> ikke kommentarer fra brugerne og vises ikke på sitets forside.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'story' => array(
      'name' => t('Artikel'),
      'base' => 'node_content',
      'description' => t('En <em>artikel</em>, som minder om en <em>side</em>, gør det nemt at oprette og vise indhold, der informerer eller engagerer sitets besøgende. Pressemeddelelser, opslag og blog-lignende indlæg kan alle oprettes som <em>artikler</em>. Som standard vises <em>artikler</em> på sitets forside, og det er muligt for brugerne at skrive kommentarer.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
