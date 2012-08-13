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

  // Exported overrides for: content
  $overrides["content.footer_info.comment"] = '1';
  $overrides["content.footer_info.field_editors_choice_summary|und|0|safe_value"] = '<div class="address-location">123 Main Street <br />Washington, DC 20036</div>
  <div class="footer-email"><a href="mailto:info@example.gov">info@example.gov</a></div>
  <div class="footer-phone">(202) 555-1212</div>
  ';
  $overrides["content.footer_info.field_editors_choice_summary|und|0|value"] = '<div class="address-location">123 Main Street <br>Washington, DC 20036</div>
  <div class="footer-email"><a href="mailto:info@example.gov">info@example.gov</a></div>
  <div class="footer-phone">(202) 555-1212</div>';

  // Exported overrides for: context
  $overrides["context.home.reactions|block|blocks|follow-site"]["DELETED"] = TRUE;
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
  $overrides["context.site_wide_after.reactions|block|blocks|follow-site|region"] = 'footer_first';
  $overrides["context.site_wide_after.reactions|block|blocks|follow-site|weight"] = '2';
  $overrides["context.site_wide_after.reactions|block|blocks|menu-menu-footer-utility"] = array(
    'module' => 'menu',
    'delta' => 'menu-footer-utility',
    'region' => 'footer_first',
    'weight' => '1',
  );
  $overrides["context.site_wide_after.reactions|block|blocks|nodeblock-footer_info|weight"] = '0';
  $overrides["context.site_wide_before.reactions|block|blocks|openpublic_defaults-openpublic_footer_utility_menu"]["DELETED"] = TRUE;

  // Exported overrides for: views_view
  $overrides["views_view.blogs.display|block_1|display_options|fields|created_1"] = array(
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
  );
  $overrides["views_view.blogs.display|block_1|display_options|fields|created|alter|alter_text"] = 0;
  $overrides["views_view.blogs.display|block_1|display_options|fields|created|alter|external"] = 0;
  $overrides["views_view.blogs.display|block_1|display_options|fields|created|alter|more_link"] = 0;
  $overrides["views_view.blogs.display|block_1|display_options|fields|created|alter|nl2br"] = 0;
  $overrides["views_view.blogs.display|block_1|display_options|fields|created|alter|replace_spaces"] = 0;
  $overrides["views_view.blogs.display|block_1|display_options|fields|created|alter|trim_whitespace"] = 0;
  $overrides["views_view.blogs.display|block_1|display_options|fields|created|custom_date_format"] = 'M';
  $overrides["views_view.blogs.display|block_1|display_options|fields|created|element_label_colon"] = FALSE;
  $overrides["views_view.blogs.display|block_1|display_options|fields|created|hide_alter_empty"] = 1;
  $overrides["views_view.blogs.display|block_1|display_options|fields|entity_id_1|alter|external"] = 0;
  $overrides["views_view.blogs.display|block_1|display_options|fields|entity_id_1|alter|more_link"] = 0;
  $overrides["views_view.blogs.display|block_1|display_options|fields|entity_id_1|alter|nl2br"] = 0;
  $overrides["views_view.blogs.display|block_1|display_options|fields|entity_id_1|alter|replace_spaces"] = 0;
  $overrides["views_view.blogs.display|block_1|display_options|fields|entity_id_1|alter|trim_whitespace"] = 0;
  $overrides["views_view.blogs.display|block_1|display_options|fields|entity_id_1|delta_first_last"] = 0;
  $overrides["views_view.blogs.display|block_1|display_options|fields|entity_id_1|delta_offset"] = '0';
  $overrides["views_view.blogs.display|block_1|display_options|fields|entity_id_1|delta_reversed"] = 0;
  $overrides["views_view.blogs.display|block_1|display_options|fields|entity_id_1|element_label_colon"] = FALSE;
  $overrides["views_view.blogs.display|block_1|display_options|fields|entity_id_1|exclude"]["DELETED"] = TRUE;
  $overrides["views_view.blogs.display|block_1|display_options|fields|entity_id_1|field_api_classes"] = 0;
  $overrides["views_view.blogs.display|block_1|display_options|fields|entity_id_1|group_rows"] = 1;
  $overrides["views_view.blogs.display|block_1|display_options|fields|entity_id_1|hide_alter_empty"] = 1;
  $overrides["views_view.blogs.display|block_1|display_options|fields|entity_id_1|type"] = 'node_reference_plain';
  $overrides["views_view.blogs.display|block_1|display_options|fields|entity_id_2|alter|external"] = 0;
  $overrides["views_view.blogs.display|block_1|display_options|fields|entity_id_2|alter|more_link"] = 0;
  $overrides["views_view.blogs.display|block_1|display_options|fields|entity_id_2|alter|nl2br"] = 0;
  $overrides["views_view.blogs.display|block_1|display_options|fields|entity_id_2|alter|replace_spaces"] = 0;
  $overrides["views_view.blogs.display|block_1|display_options|fields|entity_id_2|alter|trim_whitespace"] = 0;
  $overrides["views_view.blogs.display|block_1|display_options|fields|entity_id_2|delta_first_last"] = 0;
  $overrides["views_view.blogs.display|block_1|display_options|fields|entity_id_2|delta_offset"] = '0';
  $overrides["views_view.blogs.display|block_1|display_options|fields|entity_id_2|delta_reversed"] = 0;
  $overrides["views_view.blogs.display|block_1|display_options|fields|entity_id_2|element_label_colon"] = FALSE;
  $overrides["views_view.blogs.display|block_1|display_options|fields|entity_id_2|field_api_classes"] = 0;
  $overrides["views_view.blogs.display|block_1|display_options|fields|entity_id_2|group_rows"] = 1;
  $overrides["views_view.blogs.display|block_1|display_options|fields|entity_id_2|hide_alter_empty"] = 1;
  $overrides["views_view.blogs.display|block_1|display_options|fields|entity_id_2|settings"] = array(
    'node_reference_view_mode' => 'full',
  );
  $overrides["views_view.blogs.display|block_1|display_options|fields|view_node"] = array(
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
  );
  $overrides["views_view.blogs.display|block_1|display_options|row_options"] = array(
    'inline' => array(
      'entity_id' => 'entity_id',
      'view_node' => 'view_node',
    ),
    'hide_empty' => 0,
    'default_field_elements' => 1,
  );
  $overrides["views_view.blogs.display|default|display_options|fields|view_node|table"] = 'views_entity_node';
  $overrides["views_view.press_releases.display|block_1|display_options|fields|created_1"] = array(
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
  );
  $overrides["views_view.press_releases.display|block_1|display_options|fields|created|alter|alter_text"] = 1;
  $overrides["views_view.press_releases.display|block_1|display_options|fields|created|alter|external"] = 0;
  $overrides["views_view.press_releases.display|block_1|display_options|fields|created|alter|more_link"] = 0;
  $overrides["views_view.press_releases.display|block_1|display_options|fields|created|alter|nl2br"] = 0;
  $overrides["views_view.press_releases.display|block_1|display_options|fields|created|alter|replace_spaces"] = 0;
  $overrides["views_view.press_releases.display|block_1|display_options|fields|created|alter|trim_whitespace"] = 0;
  $overrides["views_view.press_releases.display|block_1|display_options|fields|created|custom_date_format"] = 'M';
  $overrides["views_view.press_releases.display|block_1|display_options|fields|created|element_label_colon"] = FALSE;
  $overrides["views_view.press_releases.display|block_1|display_options|fields|created|exclude"]["DELETED"] = TRUE;
  $overrides["views_view.press_releases.display|block_1|display_options|fields|created|hide_alter_empty"] = 1;
  $overrides["views_view.press_releases.display|block_1|display_options|fields|type"]["DELETED"] = TRUE;
  $overrides["views_view.press_releases.display|block_1|display_options|fields|view_node"] = array(
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
  );
  $overrides["views_view.press_releases.display|block_1|display_options|row_options"] = array(
    'inline' => array(
      'entity_id' => 'entity_id',
      'view_node' => 'view_node',
    ),
    'hide_empty' => 0,
    'default_field_elements' => 1,
  );
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
  );
  $overrides["views_view.services.display|page_1|display_options|fields|view_node|table"] = 'views_entity_node';

 return $overrides;
}
