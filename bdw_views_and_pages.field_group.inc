<?php
/**
 * @file
 * bdw_views_and_pages.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function bdw_views_and_pages_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_memberships|profile2|profile|form';
  $field_group->group_name = 'group_memberships';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Your Groups',
    'weight' => '33',
    'children' => array(
      0 => 'field_escapee_member',
      1 => 'field_rvillage_member',
      2 => 'field_escapee_member_data',
      3 => 'field_rvillage_member_data',
      4 => 'field_fmca_member',
      5 => 'field_fmca_member_data',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Your Groups',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_memberships|profile2|profile|form'] = $field_group;

  return $export;
}
