<?php
/**
 * @file
 * cliente.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cliente_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_abas|node|cliente|form';
  $field_group->group_name = 'group_abas';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cliente';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Abas',
    'weight' => '1',
    'children' => array(
      0 => 'group_g1',
      1 => 'group_g2',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_abas|node|cliente|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_g1|node|cliente|form';
  $field_group->group_name = 'group_g1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cliente';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_abas';
  $field_group->data = array(
    'label' => 'Dados Básicos',
    'weight' => '10',
    'children' => array(
      0 => 'field_cpf_cnpj',
      1 => 'field_txt_sv_01',
      2 => 'field_tipo_cliente',
      3 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_g1|node|cliente|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_g2|node|cliente|form';
  $field_group->group_name = 'group_g2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cliente';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_abas';
  $field_group->data = array(
    'label' => 'Contatos',
    'weight' => '11',
    'children' => array(
      0 => 'field_endereco',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_g2|node|cliente|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Abas');
  t('Contatos');
  t('Dados Básicos');

  return $field_groups;
}
