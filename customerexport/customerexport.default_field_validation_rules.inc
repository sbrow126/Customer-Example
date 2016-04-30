<?php
/**
 * @file
 * customerexport.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function customerexport_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Is Email';
  $rule->name = 'is_email';
  $rule->field_name = 'field_email';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'customer_';
  $rule->validator = 'field_validation_email_validator';
  $rule->settings = array(
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      3 => 0,
    ),
    'errors' => 0,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
  );
  $rule->error_message = 'Please be sure the email is in the correct format.';
  $export['is_email'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Is Numeric';
  $rule->name = 'is_numeric';
  $rule->field_name = 'field_phone1';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'customer_';
  $rule->validator = 'field_validation_numeric_validator';
  $rule->settings = array(
    'min' => '',
    'max' => '',
    'step' => '',
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      3 => 0,
    ),
    'errors' => 0,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
  );
  $rule->error_message = 'Please use only numbers for the Phone field.';
  $export['is_numeric'] = $rule;

  return $export;
}
