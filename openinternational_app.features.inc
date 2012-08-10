<?php
/**
 * @file
 * openinternational_app.features.inc
 */

/**
 * Implements hook_context_default_contexts_alter().
 */
function openinternational_app_context_default_contexts_alter(&$data) {
  if (isset($data['home'])) {
    $data['home']->reactions['block']['blocks']['twitter_pull-0']['delta'] = '0'; /* WAS: 0 */
    $data['home']->reactions['region']['openinternational_theme'] = array(
      'disable' => array(
        'content' => 'content',
        'sidebar_first' => 'sidebar_first',
        'sidebar_second' => 'sidebar_second',
        'page_top' => 0,
        'page_bottom' => 0,
        'user_first' => 0,
        'user_second' => 0,
        'branding' => 0,
        'menu' => 0,
        'header_first' => 0,
        'header_second' => 0,
        'preface_first' => 0,
        'preface_second' => 0,
        'preface_third' => 0,
        'postscript_first' => 0,
        'postscript_second' => 0,
        'postscript_third' => 0,
        'postscript_fourth' => 0,
        'footer_first' => 0,
        'footer_second' => 0,
        'dashboard_main' => 0,
        'dashboard_sidebar' => 0,
        'dashboard_inactive' => 0,
      ),
    ); /* WAS: '' */
    unset($data['home']->reactions['region']['spartan']);
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function openinternational_app_views_default_views_alter(&$data) {
  if (isset($data['blogs'])) {
    $data['blogs']->display['block_1']->display_options['fields']['created_1'] = array(
      'id' => 'created_1',
      'table' => 'node',
      'field' => 'created',
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
      'date_format' => 'custom',
      'custom_date_format' => 'j',
    ); /* WAS: '' */
    $data['blogs']->display['block_1']->display_options['fields']['created']['alter']['alter_text'] = 0; /* WAS: 1 */
    $data['blogs']->display['block_1']->display_options['fields']['created']['alter']['external'] = 0; /* WAS: '' */
    $data['blogs']->display['block_1']->display_options['fields']['created']['alter']['more_link'] = 0; /* WAS: '' */
    $data['blogs']->display['block_1']->display_options['fields']['created']['alter']['nl2br'] = 0; /* WAS: '' */
    $data['blogs']->display['block_1']->display_options['fields']['created']['alter']['replace_spaces'] = 0; /* WAS: '' */
    $data['blogs']->display['block_1']->display_options['fields']['created']['alter']['trim_whitespace'] = 0; /* WAS: '' */
    $data['blogs']->display['block_1']->display_options['fields']['created']['custom_date_format'] = 'M'; /* WAS: 'M j, Y' */
    $data['blogs']->display['block_1']->display_options['fields']['created']['element_label_colon'] = FALSE; /* WAS: 1 */
    $data['blogs']->display['block_1']->display_options['fields']['created']['hide_alter_empty'] = 1; /* WAS: '' */
    $data['blogs']->display['block_1']->display_options['fields']['entity_id_1']['alter']['external'] = 0; /* WAS: '' */
    $data['blogs']->display['block_1']->display_options['fields']['entity_id_1']['alter']['more_link'] = 0; /* WAS: '' */
    $data['blogs']->display['block_1']->display_options['fields']['entity_id_1']['alter']['nl2br'] = 0; /* WAS: '' */
    $data['blogs']->display['block_1']->display_options['fields']['entity_id_1']['alter']['replace_spaces'] = 0; /* WAS: '' */
    $data['blogs']->display['block_1']->display_options['fields']['entity_id_1']['alter']['trim_whitespace'] = 0; /* WAS: '' */
    $data['blogs']->display['block_1']->display_options['fields']['entity_id_1']['delta_first_last'] = 0; /* WAS: '' */
    $data['blogs']->display['block_1']->display_options['fields']['entity_id_1']['delta_offset'] = '0'; /* WAS: '' */
    $data['blogs']->display['block_1']->display_options['fields']['entity_id_1']['delta_reversed'] = 0; /* WAS: '' */
    $data['blogs']->display['block_1']->display_options['fields']['entity_id_1']['element_label_colon'] = FALSE; /* WAS: 0 */
    $data['blogs']->display['block_1']->display_options['fields']['entity_id_1']['field_api_classes'] = 0; /* WAS: '' */
    $data['blogs']->display['block_1']->display_options['fields']['entity_id_1']['group_rows'] = 1; /* WAS: '' */
    $data['blogs']->display['block_1']->display_options['fields']['entity_id_1']['hide_alter_empty'] = 1; /* WAS: '' */
    $data['blogs']->display['block_1']->display_options['fields']['entity_id_1']['type'] = 'node_reference_plain'; /* WAS: '' */
    $data['blogs']->display['block_1']->display_options['fields']['entity_id_2']['alter']['external'] = 0; /* WAS: '' */
    $data['blogs']->display['block_1']->display_options['fields']['entity_id_2']['alter']['more_link'] = 0; /* WAS: '' */
    $data['blogs']->display['block_1']->display_options['fields']['entity_id_2']['alter']['nl2br'] = 0; /* WAS: '' */
    $data['blogs']->display['block_1']->display_options['fields']['entity_id_2']['alter']['replace_spaces'] = 0; /* WAS: '' */
    $data['blogs']->display['block_1']->display_options['fields']['entity_id_2']['alter']['trim_whitespace'] = 0; /* WAS: '' */
    $data['blogs']->display['block_1']->display_options['fields']['entity_id_2']['delta_first_last'] = 0; /* WAS: '' */
    $data['blogs']->display['block_1']->display_options['fields']['entity_id_2']['delta_offset'] = '0'; /* WAS: '' */
    $data['blogs']->display['block_1']->display_options['fields']['entity_id_2']['delta_reversed'] = 0; /* WAS: '' */
    $data['blogs']->display['block_1']->display_options['fields']['entity_id_2']['element_label_colon'] = FALSE; /* WAS: 1 */
    $data['blogs']->display['block_1']->display_options['fields']['entity_id_2']['field_api_classes'] = 0; /* WAS: '' */
    $data['blogs']->display['block_1']->display_options['fields']['entity_id_2']['group_rows'] = 1; /* WAS: '' */
    $data['blogs']->display['block_1']->display_options['fields']['entity_id_2']['hide_alter_empty'] = 1; /* WAS: '' */
    $data['blogs']->display['block_1']->display_options['fields']['entity_id_2']['settings'] = array(
      'node_reference_view_mode' => 'full',
    ); /* WAS: '' */
    $data['blogs']->display['block_1']->display_options['fields']['view_node'] = array(
      'id' => 'view_node',
      'table' => 'views_entity_node',
      'field' => 'view_node',
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'make_link' => 0,
        'absolute' => 0,
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
      'text' => 'Read More &raquo;',
    ); /* WAS: '' */
    $data['blogs']->display['block_1']->display_options['row_options'] = array(
      'inline' => array(
        'entity_id' => 'entity_id',
        'view_node' => 'view_node',
      ),
      'hide_empty' => 0,
      'default_field_elements' => 1,
    ); /* WAS: '' */
    $data['blogs']->display['default']->display_options['fields']['view_node']['table'] = 'views_entity_node'; /* WAS: 'node' */
    unset($data['blogs']->display['block_1']->display_options['fields']['entity_id_1']['exclude']);
  }
  if (isset($data['press_releases'])) {
    $data['press_releases']->display['block_1']->display_options['fields']['created_1'] = array(
      'id' => 'created_1',
      'table' => 'node',
      'field' => 'created',
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
      'date_format' => 'custom',
      'custom_date_format' => 'j',
    ); /* WAS: '' */
    $data['press_releases']->display['block_1']->display_options['fields']['created']['alter']['alter_text'] = 1; /* WAS: 0 */
    $data['press_releases']->display['block_1']->display_options['fields']['created']['alter']['external'] = 0; /* WAS: '' */
    $data['press_releases']->display['block_1']->display_options['fields']['created']['alter']['more_link'] = 0; /* WAS: '' */
    $data['press_releases']->display['block_1']->display_options['fields']['created']['alter']['nl2br'] = 0; /* WAS: '' */
    $data['press_releases']->display['block_1']->display_options['fields']['created']['alter']['replace_spaces'] = 0; /* WAS: '' */
    $data['press_releases']->display['block_1']->display_options['fields']['created']['alter']['trim_whitespace'] = 0; /* WAS: '' */
    $data['press_releases']->display['block_1']->display_options['fields']['created']['custom_date_format'] = 'M'; /* WAS: 'M j, Y' */
    $data['press_releases']->display['block_1']->display_options['fields']['created']['element_label_colon'] = FALSE; /* WAS: 1 */
    $data['press_releases']->display['block_1']->display_options['fields']['created']['hide_alter_empty'] = 1; /* WAS: '' */
    $data['press_releases']->display['block_1']->display_options['fields']['view_node'] = array(
      'id' => 'view_node',
      'table' => 'views_entity_node',
      'field' => 'view_node',
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'make_link' => 0,
        'absolute' => 0,
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
      'text' => 'Read More &raquo;',
    ); /* WAS: '' */
    $data['press_releases']->display['block_1']->display_options['row_options'] = array(
      'inline' => array(
        'entity_id' => 'entity_id',
        'view_node' => 'view_node',
      ),
      'hide_empty' => 0,
      'default_field_elements' => 1,
    ); /* WAS: '' */
    unset($data['press_releases']->display['block_1']->display_options['fields']['created']['exclude']);
    unset($data['press_releases']->display['block_1']->display_options['fields']['type']);
  }
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
          'alter_text' => 1,
          'text' => '[title] &raquo;',
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

  // Exported image style: openinternational-list-page-thumbnail
  $styles['openinternational-list-page-thumbnail'] = array(
    'name' => 'openinternational-list-page-thumbnail',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '50',
          'height' => '50',
        ),
        'weight' => '1',
      ),
    ),
  );

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
