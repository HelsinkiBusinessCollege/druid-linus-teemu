<?php
/**
 * @file
 * rekrysivut.features.inc
 */

/**
 * Implements hook_views_api().
 */
function rekrysivut_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function rekrysivut_node_info() {
  $items = array(
    'ty_paikka' => array(
      'name' => t('Työpaikka'),
      'base' => 'node_content',
      'description' => t('Avoinna oleva työpaikka'),
      'has_title' => '1',
      'title_label' => t('Työpaikka otsikko'),
      'help' => '',
    ),
    'vapaat_paikat' => array(
      'name' => t('Vapaat paikat'),
      'base' => 'node_content',
      'description' => t('Avoimet työpaikat'),
      'has_title' => '1',
      'title_label' => t('Titteli'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
