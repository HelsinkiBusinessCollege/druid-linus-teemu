<?php
/**
 * @file
 * ruokalista.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ruokalista_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-ruokalista-body'
  $field_instances['node-ruokalista-body'] = array(
    'bundle' => 'ruokalista',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Syötä tähän ruokalistasi 

esim.
Liharuoka
 - Perunamuusi ja lihapyöryköitä

Kasvisruoka
 - Soija-kasviswokkia ja nuudeleita

Keitto
 - Siskonmakkara keittoa',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Ruokalista',
    'required' => 1,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 10,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-ruokalista-field_paiva'
  $field_instances['node-ruokalista-field_paiva'] = array(
    'bundle' => 'ruokalista',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_paiva',
    'label' => 'Päivä',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'custom',
        'input_format_custom' => 'd-m-Y',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-0:+1',
      ),
      'type' => 'date_select',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Päivä');
  t('Ruokalista');
  t('Syötä tähän ruokalistasi 

esim.
Liharuoka
 - Perunamuusi ja lihapyöryköitä

Kasvisruoka
 - Soija-kasviswokkia ja nuudeleita

Keitto
 - Siskonmakkara keittoa');

  return $field_instances;
}
