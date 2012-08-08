<?php
/**
 * @file
 * openinternational_app.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function openinternational_app_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: context
  $overrides["context.home.reactions|block|blocks|twitter_pull-0|delta"] = '0';
  $overrides["context.home.reactions|region|openinternational_theme"] = array(
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
  );
  $overrides["context.home.reactions|region|spartan"]["DELETED"] = TRUE;

  // Exported overrides for: views_view
  $overrides["views_view.services.display|block_1|display_options|defaults"] = array(
    'fields' => FALSE,
  );
  $overrides["views_view.services.display|block_1|display_options|fields"] = array(
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
  );
  $overrides["views_view.services.display|page_1|display_options|fields|view_node|table"] = 'views_entity_node';

 return $overrides;
}
