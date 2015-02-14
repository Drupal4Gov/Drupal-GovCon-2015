<?php
/**
 * @file
 * ccgd_user_barcode.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ccgd_user_barcode_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_user_barcodes'
  $field_instances['user-user-field_user_barcodes'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'value' => 'A[user:uid]A',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'barcode',
        'settings' => array(),
        'type' => 'barcode_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_user_barcodes',
    'label' => 'User Barcode',
    'required' => 0,
    'settings' => array(
      'barcode_barcolor' => '#000000',
      'barcode_bgcolor' => '#FFFFFF',
      'barcode_height' => 40,
      'barcode_image_format' => 'png',
      'barcode_scale' => 2,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'barcode',
      'settings' => array(),
      'type' => 'barcode_textarea',
      'weight' => 7,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('User Barcode');

  return $field_instances;
}
