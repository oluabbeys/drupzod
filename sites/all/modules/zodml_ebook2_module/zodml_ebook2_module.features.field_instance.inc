<?php
/**
 * @file
 * zodml_ebook2_module.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function zodml_ebook2_module_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-ebook-body'
  $field_instances['node-ebook-body'] = array(
    'bundle' => 'ebook',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'rss' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-ebook-field_author'
  $field_instances['node-ebook-field_author'] = array(
    'bundle' => 'ebook',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'rss' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_author',
    'label' => 'Author',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'node-ebook-field_category'
  $field_instances['node-ebook-field_category'] = array(
    'bundle' => 'ebook',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'rss' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_category',
    'label' => 'Category',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 44,
    ),
  );

  // Exported field_instance: 'node-ebook-field_cus_title'
  $field_instances['node-ebook-field_cus_title'] = array(
    'bundle' => 'ebook',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_cus_title',
    'label' => 'cus title',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 50,
    ),
  );

  // Exported field_instance: 'node-ebook-field_featured_checked'
  $field_instances['node-ebook-field_featured_checked'] = array(
    'bundle' => 'ebook',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_featured_checked',
    'label' => 'featured checked',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 52,
    ),
  );

  // Exported field_instance: 'node-ebook-field_image'
  $field_instances['node-ebook-field_image'] = array(
    'bundle' => 'ebook',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'ebook_135x180',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'rss' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'icon_link' => 0,
          'image' => 0,
          'image_aboutus-double-200x80' => 0,
          'image_aboutus-img-520x280' => 0,
          'image_action-button-img' => 0,
          'image_bot-img-style' => 0,
          'image_call-to-action-double-240x80' => 0,
          'image_call-to-action-single' => 0,
          'image_dn_landing_image_380x250' => 0,
          'image_dn_photo_upload_ads_380x120' => 0,
          'image_dn_state_dyk_hist_350x250' => 0,
          'image_dn_state_gov_300x300' => 0,
          'image_dn_state_lga_map_285x405' => 0,
          'image_dn_state_nig_map_250x200' => 0,
          'image_flexslider_customized_thumbnail-60x60' => 0,
          'image_flexslider_full' => 0,
          'image_flexslider_thumbnail' => 0,
          'image_front-image-style' => 0,
          'image_front-vision-image-styles' => 0,
          'image_gallery_image_830x450' => 0,
          'image_general_widget_280x50' => 0,
          'image_inner-page-image-style' => 0,
          'image_juicebox_large' => 0,
          'image_juicebox_medium' => 0,
          'image_juicebox_small' => 0,
          'image_juicebox_square_thumbnail' => 0,
          'image_kid_welcome_img_580x200' => 0,
          'image_kids_big_banner_580x410' => 0,
          'image_landing-page-image-style' => 0,
          'image_large' => 0,
          'image_medium' => 0,
          'image_new_830_x_450' => 0,
          'image_ocean_waves_feed_sidebar_style' => 0,
          'image_ocean_waves_feed_style' => 0,
          'image_old_blog' => 0,
          'image_our-team-img-style' => 0,
          'image_our-work-img' => 0,
          'image_photograher-profile-250x250' => 0,
          'image_quiz_ddlines' => 0,
          'image_return-img-160x30' => 0,
          'image_sidebar-image-style' => 0,
          'image_single-landing-page-image' => 0,
          'image_social-media-icon' => 0,
          'image_submit_photo_sidebar' => 0,
          'image_thumbnail' => 0,
          'image_user_image' => 0,
          'image_vision-mission_580x175' => 0,
          'image_young-zod' => 0,
          'image_zod-slide-image-style' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 47,
    ),
  );

  // Exported field_instance: 'node-ebook-field_main_general_category'
  $field_instances['node-ebook-field_main_general_category'] = array(
    'bundle' => 'ebook',
    'default_value' => array(
      0 => array(
        'tid' => 13970,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_main_general_category',
    'label' => 'Main General Category',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 49,
    ),
  );

  // Exported field_instance: 'node-ebook-field_most_download'
  $field_instances['node-ebook-field_most_download'] = array(
    'bundle' => 'ebook',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_most_download',
    'label' => 'Most Download',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 53,
    ),
  );

  // Exported field_instance: 'node-ebook-field_pdf_download'
  $field_instances['node-ebook-field_pdf_download'] = array(
    'bundle' => 'ebook',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'download_file',
        'settings' => array(),
        'type' => 'direct_download_accessible_icon',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 3,
      ),
      'rss' => array(
        'label' => 'inline',
        'module' => 'file_force',
        'settings' => array(),
        'type' => 'file_force_file_table',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_pdf_download',
    'label' => 'pdf download',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'pdf',
      'max_filesize' => '"512 MB"',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'icon_link' => 0,
          'image' => 0,
          'image_aboutus-double-200x80' => 0,
          'image_aboutus-img-520x280' => 0,
          'image_action-button-img' => 0,
          'image_bot-img-style' => 0,
          'image_call-to-action-double-240x80' => 0,
          'image_call-to-action-single' => 0,
          'image_dn_landing_image_380x250' => 0,
          'image_dn_photo_upload_ads_380x120' => 0,
          'image_dn_state_dyk_hist_350x250' => 0,
          'image_dn_state_gov_300x300' => 0,
          'image_dn_state_lga_map_285x405' => 0,
          'image_dn_state_nig_map_250x200' => 0,
          'image_flexslider_customized_thumbnail-60x60' => 0,
          'image_flexslider_full' => 0,
          'image_flexslider_thumbnail' => 0,
          'image_front-image-style' => 0,
          'image_front-vision-image-styles' => 0,
          'image_gallery_image_830x450' => 0,
          'image_general_widget_280x50' => 0,
          'image_inner-page-image-style' => 0,
          'image_juicebox_large' => 0,
          'image_juicebox_medium' => 0,
          'image_juicebox_small' => 0,
          'image_juicebox_square_thumbnail' => 0,
          'image_kid_welcome_img_580x200' => 0,
          'image_kids_big_banner_580x410' => 0,
          'image_landing-page-image-style' => 0,
          'image_large' => 0,
          'image_medium' => 0,
          'image_new_830_x_450' => 0,
          'image_ocean_waves_feed_sidebar_style' => 0,
          'image_ocean_waves_feed_style' => 0,
          'image_old_blog' => 0,
          'image_our-team-img-style' => 0,
          'image_our-work-img' => 0,
          'image_photograher-profile-250x250' => 0,
          'image_quiz_ddlines' => 0,
          'image_return-img-160x30' => 0,
          'image_sidebar-image-style' => 0,
          'image_single-landing-page-image' => 0,
          'image_social-media-icon' => 0,
          'image_submit_photo_sidebar' => 0,
          'image_thumbnail' => 0,
          'image_user_image' => 0,
          'image_vision-mission_580x175' => 0,
          'image_young-zod' => 0,
          'image_zod-slide-image-style' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 45,
    ),
  );

  // Exported field_instance: 'node-ebook-field_tags'
  $field_instances['node-ebook-field_tags'] = array(
    'bundle' => 'ebook',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'rss' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tags',
    'label' => 'Tag',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 42,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Author');
  t('Body');
  t('Category');
  t('Image');
  t('Main General Category');
  t('Most Download');
  t('Tag');
  t('cus title');
  t('featured checked');
  t('pdf download');

  return $field_instances;
}
