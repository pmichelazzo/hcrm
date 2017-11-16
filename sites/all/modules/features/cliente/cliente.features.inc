<?php
/**
 * @file
 * cliente.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cliente_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function cliente_node_info() {
  $items = array(
    'cliente' => array(
      'name' => t('Cliente'),
      'base' => 'node_content',
      'description' => t('Content type to manage clients'),
      'has_title' => '1',
      'title_label' => t('Nome do Cliente'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
