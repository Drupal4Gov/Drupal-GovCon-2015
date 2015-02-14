<?php
/**
 * @file
 * ccgd_user_barcode.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ccgd_user_barcode_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'barcode_default_path';
  $strongarm->value = 'public://barcodes';
  $export['barcode_default_path'] = $strongarm;

  return $export;
}
