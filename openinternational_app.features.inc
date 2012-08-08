<?php
/**
 * @file
 * openinternational_app.features.inc
 */

/**
 * Implements hook_views_default_views_alter().
 */
function openinternational_app_views_default_views_alter(&$data) {
  if (isset($data['services'])) {
    $data['services']->display['block_1']->display_options['defaults'] = array(
      'fields' => FALSE,
    ); /* WAS: '' */
    $data['services']->display['block_1']->display_options['fields'] = array(
      'entity_id' => array(
        'id' => 'entity_id',
        'table' => 'field_data_field_services_photo',
        'field' => 'field_services_photo',
        'label' => '',
        'alter' => array(
          'alter_text' => 0,
          'make_link' => 0,
          'absolute' => 0,
          'external' => 0,
          'replace_spaces' => 0,
          'trim_whitespace' => 0,
          'nl2br' => 0,
          'word_boundary' => 1,
          'ellipsis' => 1,
          'more_link' => 0,
          'strip_tags' => 0,
          'trim' => 0,
          'html' => 0,
        ),
        'element_label_colon' => FALSE,
        'element_default_classes' => 1,
        'hide_empty' => 0,
        'empty_zero' => 0,
        'hide_alter_empty' => 1,
        'click_sort_column' => 'fid',
        'settings' => array(
          'image_style' => 'openinternational-services-carousel',
          'image_link' => 'content',
        ),
        'field_api_classes' => 0,
      ),
      'title' => array(
        'id' => 'title',
        'table' => 'node',
        'field' => 'title',
        'label' => '',
        'alter' => array(
          'alter_text' => 0,
          'make_link' => 0,
          'absolute' => 0,
          'word_boundary' => 1,
          'ellipsis' => 1,
          'strip_tags' => 0,
          'trim' => 0,
          'html' => 0,
        ),
        'element_label_colon' => 1,
        'element_default_classes' => 1,
        'hide_empty' => 0,
        'empty_zero' => 0,
        'link_to_node' => 1,
      ),
    ); /* WAS: '' */
    $data['services']->display['page_1']->display_options['fields']['view_node']['table'] = 'views_entity_node'; /* WAS: 'node' */
  }
}

/**
 * Implements hook_image_default_styles().
 */
function openinternational_app_image_default_styles() {
  $styles = array();

  // Exported image style: openinternational-services-carousel
  $styles['openinternational-services-carousel'] = array(
    'name' => 'openinternational-services-carousel',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '278',
          'height' => '106',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
