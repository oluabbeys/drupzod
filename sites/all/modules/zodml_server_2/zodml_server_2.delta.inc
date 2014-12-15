<?php
/**
 * @file
 * zodml_server_2.delta.inc
 */

/**
 * Implements hook_delta_default_templates().
 */
function zodml_server_2_delta_default_templates() {
  $export = array();

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'blog_delta';
  $delta->name = 'blog delta';
  $delta->description = '';
  $delta->theme = 'zodml';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_zodml_settings' => array(
      'alpha_exclude' => array(
        'sites/all/modules/adaptive_image/css/adaptive-image.css' => 0,
        'modules/aggregator/aggregator.css' => 0,
        'modules/book/book.css' => 0,
        'modules/field/theme/field.css' => 0,
        'modules/node/node.css' => 0,
        'modules/search/search.css' => 0,
        'modules/user/user.css' => 0,
        'sites/all/modules/views/css/views.css' => 0,
        'misc/vertical-tabs.css' => 0,
        'modules/block/block.css' => 0,
        'modules/dblog/dblog.css' => 0,
        'modules/file/file.css' => 0,
        'modules/filter/filter.css' => 0,
        'modules/help/help.css' => 0,
        'modules/menu/menu.css' => 0,
        'modules/openid/openid.css' => 0,
        'modules/profile/profile.css' => 0,
        'modules/statistics/statistics.css' => 0,
        'modules/syslog/syslog.css' => 0,
        'modules/system/admin.css' => 0,
        'modules/system/maintenance.css' => 0,
        'modules/system/system.css' => 0,
        'modules/system/system.admin.css' => 0,
        'modules/system/system.base.css' => 0,
        'modules/system/system.maintenance.css' => 0,
        'modules/system/system.menus.css' => 0,
        'modules/system/system.messages.css' => 0,
        'modules/system/system.theme.css' => 0,
        'modules/taxonomy/taxonomy.css' => 0,
        'modules/tracker/tracker.css' => 0,
        'modules/update/update.css' => 0,
      ),
      'alpha_region_header_first_columns' => '24',
      'alpha_region_header_second_zone' => NULL,
    ),
  );
  $export['blog_delta'] = $delta;

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'dn_homepage';
  $delta->name = 'DN homepage';
  $delta->description = '';
  $delta->theme = 'zodml';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_zodml_settings' => array(
      'alpha_region_preface_third_zone' => NULL,
      'alpha_region_preface_third_equal_height_element' => FALSE,
      'alpha_region_user_first_position' => '2',
      'alpha_region_user_second_position' => '1',
      'alpha_region_header_first_force' => 1,
      'alpha_region_header_second_force' => 1,
      'alpha_region_preface_first_force' => 1,
      'alpha_region_preface_first_columns' => '5',
      'alpha_region_preface_second_columns' => '19',
      'alpha_zone_content_order' => 0,
      'alpha_region_sidebar_first_columns' => '8',
      'alpha_region_sidebar_first_weight' => '1',
      'alpha_region_content_columns' => '8',
      'alpha_region_content_weight' => '2',
      'alpha_region_sidebar_second_zone' => 'content',
      'alpha_region_sidebar_second_columns' => '8',
      'alpha_region_sidebar_second_position' => '3',
      'alpha_region_sidebar_second_equal_height_element' => 0,
    ),
  );
  $export['dn_homepage'] = $delta;

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'dn_landing_page_layout';
  $delta->name = 'DN landing page layout';
  $delta->description = '';
  $delta->theme = 'zodml';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_zodml_settings' => array(
      'alpha_region_sidebar_first_force' => 0,
      'alpha_region_sidebar_first_zone' => NULL,
      'alpha_region_sidebar_first_equal_height_element' => FALSE,
      'alpha_region_content_columns' => '24',
      'alpha_region_content_position' => '1',
    ),
  );
  $export['dn_landing_page_layout'] = $delta;

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'home_page_layout';
  $delta->name = 'home-page-layout';
  $delta->description = '';
  $delta->theme = 'zodml';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_zodml_settings' => array(
      'alpha_exclude' => array(
        'sites/all/modules/adaptive_image/css/adaptive-image.css' => 0,
        'modules/aggregator/aggregator.css' => 0,
        'modules/book/book.css' => 0,
        'modules/field/theme/field.css' => 0,
        'modules/node/node.css' => 0,
        'modules/search/search.css' => 0,
        'modules/user/user.css' => 0,
        'sites/all/modules/views/css/views.css' => 0,
        'misc/vertical-tabs.css' => 0,
        'modules/block/block.css' => 0,
        'modules/dblog/dblog.css' => 0,
        'modules/file/file.css' => 0,
        'modules/filter/filter.css' => 0,
        'modules/help/help.css' => 0,
        'modules/menu/menu.css' => 0,
        'modules/openid/openid.css' => 0,
        'modules/profile/profile.css' => 0,
        'modules/statistics/statistics.css' => 0,
        'modules/syslog/syslog.css' => 0,
        'modules/system/admin.css' => 0,
        'modules/system/maintenance.css' => 0,
        'modules/system/system.css' => 0,
        'modules/system/system.admin.css' => 0,
        'modules/system/system.base.css' => 0,
        'modules/system/system.maintenance.css' => 0,
        'modules/system/system.menus.css' => 0,
        'modules/system/system.messages.css' => 0,
        'modules/system/system.theme.css' => 0,
        'modules/taxonomy/taxonomy.css' => 0,
        'modules/tracker/tracker.css' => 0,
        'modules/update/update.css' => 0,
      ),
      'alpha_region_header_first_columns' => '24',
      'alpha_region_header_second_zone' => NULL,
      'alpha_zone_content_order' => 0,
      'alpha_region_content_columns' => '12',
      'alpha_region_sidebar_first_columns' => '12',
    ),
  );
  $export['home_page_layout'] = $delta;

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'individual_page_delta';
  $delta->name = 'Individual page delta';
  $delta->description = '';
  $delta->theme = 'zodml';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_zodml_settings' => array(
      'alpha_exclude' => array(
        'sites/all/modules/adaptive_image/css/adaptive-image.css' => 0,
        'modules/aggregator/aggregator.css' => 0,
        'modules/book/book.css' => 0,
        'modules/field/theme/field.css' => 0,
        'modules/node/node.css' => 0,
        'modules/search/search.css' => 0,
        'modules/user/user.css' => 0,
        'sites/all/modules/views/css/views.css' => 0,
        'misc/vertical-tabs.css' => 0,
        'modules/block/block.css' => 0,
        'modules/dblog/dblog.css' => 0,
        'modules/file/file.css' => 0,
        'modules/filter/filter.css' => 0,
        'modules/help/help.css' => 0,
        'modules/menu/menu.css' => 0,
        'modules/openid/openid.css' => 0,
        'modules/profile/profile.css' => 0,
        'modules/statistics/statistics.css' => 0,
        'modules/syslog/syslog.css' => 0,
        'modules/system/admin.css' => 0,
        'modules/system/maintenance.css' => 0,
        'modules/system/system.css' => 0,
        'modules/system/system.admin.css' => 0,
        'modules/system/system.base.css' => 0,
        'modules/system/system.maintenance.css' => 0,
        'modules/system/system.menus.css' => 0,
        'modules/system/system.messages.css' => 0,
        'modules/system/system.theme.css' => 0,
        'modules/taxonomy/taxonomy.css' => 0,
        'modules/tracker/tracker.css' => 0,
        'modules/update/update.css' => 0,
      ),
      'alpha_hidden_title' => 0,
    ),
  );
  $export['individual_page_delta'] = $delta;

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'kids_delta';
  $delta->name = 'kids delta';
  $delta->description = '';
  $delta->theme = 'zodml';
  $delta->mode = 'preserve';
  $delta->parent = 'home_page_layout';
  $delta->settings = array(
    'theme_zodml_settings' => array(
      'alpha_region_sidebar_second_zone' => 'content',
      'alpha_region_sidebar_second_columns' => '6',
      'alpha_region_sidebar_second_position' => '3',
      'alpha_region_sidebar_first_columns' => '6',
    ),
  );
  $export['kids_delta'] = $delta;

  return $export;
}
