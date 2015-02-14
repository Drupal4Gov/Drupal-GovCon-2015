<?php
/**
 * @file
 * ccgd_user_barcode.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ccgd_user_barcode_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_user_barcodes'
  $field_bases['field_user_barcodes'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_user_barcodes',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'barcode',
    'settings' => array(
      'dbsize' => 255,
      'encoding' => 'CODABAR',
    ),
    'translatable' => 0,
    'type' => 'barcode_field',
  );

  return $field_bases;
}
