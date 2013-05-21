<?php
/**
 * @file
 * gsb_feature_diptych_fpp.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function gsb_feature_diptych_fpp_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'fieldable_panels_pane|diptych|default';
  $ds_layout->entity_type = 'fieldable_panels_pane';
  $ds_layout->bundle = 'diptych';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_image_single_public',
        1 => 'field_body',
        2 => 'field_link_single',
      ),
      'right' => array(
        3 => 'field_file_single_public',
        4 => 'field_editorial_summary',
        5 => 'field_diptych_right_cta_link',
      ),
    ),
    'fields' => array(
      'field_image_single_public' => 'left',
      'field_body' => 'left',
      'field_link_single' => 'left',
      'field_file_single_public' => 'right',
      'field_editorial_summary' => 'right',
      'field_diptych_right_cta_link' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['fieldable_panels_pane|diptych|default'] = $ds_layout;

  return $export;
}
