<?php
/**
 * @file
 * ccgd_user_barcode.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ccgd_user_barcode_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
