<?php
/**
 * @file
 * zodml_ebook2_module.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function zodml_ebook2_module_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function zodml_ebook2_module_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function zodml_ebook2_module_image_default_styles() {
  $styles = array();

  // Exported image style: ebook_135x180.
  $styles['ebook_135x180'] = array(
    'name' => 'ebook_135x180',
    'label' => 'ebook 135x180',
    'effects' => array(
      80 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 135,
          'height' => 180,
        ),
        'weight' => 1,
      ),
      81 => array(
        'label' => 'Adaptive',
        'help' => 'Adaptive image scale according to client resolution.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'adaptive_image_scale_form',
        'summary theme' => 'adaptive_image_scale_summary',
        'module' => 'adaptive_image',
        'name' => 'adaptive_image',
        'data' => array(
          'resolutions' => '1382, 992, 768, 480',
          'mobile_first' => 1,
          'height' => '',
          'width' => 1382,
          'upscale' => '',
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function zodml_ebook2_module_node_info() {
  $items = array(
    'ebook' => array(
      'name' => t('Ebook'),
      'base' => 'node_content',
      'description' => t('for ebook'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
