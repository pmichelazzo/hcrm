<?php
/**
 * @file
 * servicos.features.inc
 */

/**
 * Implements hook_node_info().
 */
function servicos_node_info() {
  $items = array(
    'servicos' => array(
      'name' => t('Servicos'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Nome do Servico'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
