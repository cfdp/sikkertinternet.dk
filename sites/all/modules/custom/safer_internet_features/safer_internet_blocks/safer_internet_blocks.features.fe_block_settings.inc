<?php

/**
 * @file
 * safer_internet_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function safer_internet_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['aggregator-category-1'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'category-1',
    'module' => 'aggregator',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'responsive' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'responsive',
        'weight' => 0,
      ),
      'safer_pixie' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'safer_pixie',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['aggregator-feed-1'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'feed-1',
    'module' => 'aggregator',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'responsive' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'responsive',
        'weight' => 0,
      ),
      'safer_pixie' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'safer_pixie',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['aggregator-feed-2'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'feed-2',
    'module' => 'aggregator',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'responsive' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'responsive',
        'weight' => 0,
      ),
      'safer_pixie' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'safer_pixie',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['backup_migrate-quick_backup'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'quick_backup',
    'module' => 'backup_migrate',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'responsive' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'responsive',
        'weight' => 0,
      ),
      'safer_pixie' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'safer_pixie',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-secondary-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'secondary-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'responsive' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'responsive',
        'weight' => 0,
      ),
      'safer_pixie' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'safer_pixie',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'responsive' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'responsive',
        'weight' => 0,
      ),
      'safer_pixie' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'safer_pixie',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'user-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'garland' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'responsive' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'responsive',
        'weight' => -14,
      ),
      'safer_pixie' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'safer_pixie',
        'weight' => -14,
      ),
      'zen' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'zen',
        'weight' => -14,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-login'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'garland' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'responsive' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'responsive',
        'weight' => 0,
      ),
      'safer_pixie' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'safer_pixie',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-online'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'online',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'responsive' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'responsive',
        'weight' => 0,
      ),
      'safer_pixie' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'safer_pixie',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-Introtekster-block_4'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'Introtekster-block_4',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'responsive' => array(
        'region' => 'front_welcome',
        'status' => 1,
        'theme' => 'responsive',
        'weight' => 0,
      ),
      'safer_pixie' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'safer_pixie',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-Introtekster-block_5'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'Introtekster-block_5',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'responsive' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'responsive',
        'weight' => -13,
      ),
      'safer_pixie' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'safer_pixie',
        'weight' => -13,
      ),
      'zen' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'zen',
        'weight' => -13,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-Seneste_aktiviteter-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'Seneste_aktiviteter-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'responsive' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'responsive',
        'weight' => -11,
      ),
      'safer_pixie' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'safer_pixie',
        'weight' => -18,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => -11,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-Seneste_aktiviteter-block_2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'Seneste_aktiviteter-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'responsive' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'responsive',
        'weight' => -13,
      ),
      'safer_pixie' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'safer_pixie',
        'weight' => -18,
      ),
      'zen' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'zen',
        'weight' => -13,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-Seneste_aktiviteter-block_3'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'Seneste_aktiviteter-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'responsive' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'responsive',
        'weight' => 0,
      ),
      'safer_pixie' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'safer_pixie',
        'weight' => -18,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-Seneste_aktiviteter-block_4'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'Seneste_aktiviteter-block_4',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'responsive' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'responsive',
        'weight' => 0,
      ),
      'safer_pixie' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'safer_pixie',
        'weight' => -17,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-Seneste_aktiviteter-block_5'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'Seneste_aktiviteter-block_5',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'responsive' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'responsive',
        'weight' => 0,
      ),
      'safer_pixie' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'safer_pixie',
        'weight' => -16,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-latest_news-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'latest_news-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'responsive' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'responsive',
        'weight' => 0,
      ),
      'safer_pixie' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'safer_pixie',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-latest_news-block_2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'latest_news-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'responsive' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'responsive',
        'weight' => 0,
      ),
      'safer_pixie' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'safer_pixie',
        'weight' => -16,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-latest_news-block_3'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'latest_news-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'garland' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'garland',
        'weight' => 0,
      ),
      'responsive' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'responsive',
        'weight' => 0,
      ),
      'safer_pixie' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'safer_pixie',
        'weight' => -17,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => 'Nyheder',
    'visibility' => 1,
  );

  return $export;
}
