<?php
/**
 * @file
 * zodml_ebook2_module.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function zodml_ebook2_module_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-ebook-category-menu.
  $menus['menu-ebook-category-menu'] = array(
    'menu_name' => 'menu-ebook-category-menu',
    'title' => 'eBook Category',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('eBook Category');


  return $menus;
}
