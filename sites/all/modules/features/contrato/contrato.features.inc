<?php
/**
 * @file
 * contrato.features.inc
 */

/**
 * Implements hook_views_api().
 */
function contrato_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function contrato_node_info() {
  $items = array(
    'contrato' => array(
      'name' => t('Contrato'),
      'base' => 'node_content',
      'description' => t('tipo de conteúdo para gerenciamento de contratos'),
      'has_title' => '1',
      'title_label' => t('Número do Contrato'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
