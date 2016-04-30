<?php
/**
 * @file
 * customerexport.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function customerexport_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
}

/**
 * Implements hook_node_info().
 */
function customerexport_node_info() {
  $items = array(
    'customer_' => array(
      'name' => t('Customer'),
      'base' => 'node_content',
      'description' => t('Test Customer form'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
