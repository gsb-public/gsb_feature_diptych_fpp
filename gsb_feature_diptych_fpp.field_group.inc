<?php
/**
 * @file
 * gsb_feature_diptych_fpp.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_diptych_fpp_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_diptych_txt_block2|fieldable_panels_pane|diptych|default';
  $field_group->group_name = 'group_diptych_txt_block2';
  $field_group->entity_type = 'fieldable_panels_pane';
  $field_group->bundle = 'diptych';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'diptych-txt-block',
    'weight' => '1',
    'children' => array(
      0 => 'field_body',
      1 => 'field_link_single',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'diptych-txt-block',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'diptych-txt-block',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_diptych_txt_block2|fieldable_panels_pane|diptych|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_diptych_txt_block|fieldable_panels_pane|diptych|default';
  $field_group->group_name = 'group_diptych_txt_block';
  $field_group->entity_type = 'fieldable_panels_pane';
  $field_group->bundle = 'diptych';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'diptych-txt-block',
    'weight' => '5',
    'children' => array(
      0 => 'field_diptych_right_cta_link',
      1 => 'field_editorial_summary',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'diptych-txt-block',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-diptych-txt-block',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_diptych_txt_block|fieldable_panels_pane|diptych|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('diptych-txt-block');

  return $field_groups;
}
