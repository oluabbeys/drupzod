<?php
/**
 * @file
 * zodml_server_2.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function zodml_server_2_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: features.
  $menus['features'] = array(
    'menu_name' => 'features',
    'title' => 'Features',
    'description' => 'Menu items for any enabled features.',
  );
  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'The <em>Management</em> menu contains links for administrative tasks.',
  );
  // Exported menu: menu-about-us.
  $menus['menu-about-us'] = array(
    'menu_name' => 'menu-about-us',
    'title' => 'About Us',
    'description' => '',
  );
  // Exported menu: menu-discover-nigeria-menu.
  $menus['menu-discover-nigeria-menu'] = array(
    'menu_name' => 'menu-discover-nigeria-menu',
    'title' => 'discover nigeria menu',
    'description' => '',
  );
  // Exported menu: menu-e-resources-menu.
  $menus['menu-e-resources-menu'] = array(
    'menu_name' => 'menu-e-resources-menu',
    'title' => 'eResources',
    'description' => '',
  );
  // Exported menu: menu-get-involved.
  $menus['menu-get-involved'] = array(
    'menu_name' => 'menu-get-involved',
    'title' => 'Get Involved',
    'description' => '',
  );
  // Exported menu: menu-kids-menu.
  $menus['menu-kids-menu'] = array(
    'menu_name' => 'menu-kids-menu',
    'title' => 'For Kids menu',
    'description' => '',
  );
  // Exported menu: menu-library.
  $menus['menu-library'] = array(
    'menu_name' => 'menu-library',
    'title' => 'Community Library',
    'description' => '',
  );
  // Exported menu: menu-project-sidebar-menu.
  $menus['menu-project-sidebar-menu'] = array(
    'menu_name' => 'menu-project-sidebar-menu',
    'title' => 'Projects',
    'description' => '',
  );
  // Exported menu: menu-secondary-school.
  $menus['menu-secondary-school'] = array(
    'menu_name' => 'menu-secondary-school',
    'title' => 'Secondary School',
    'description' => '',
  );
  // Exported menu: navigation.
  $menus['navigation'] = array(
    'menu_name' => 'navigation',
    'title' => 'Navigation',
    'description' => 'The <em>Navigation</em> menu contains links intended for site visitors. Links are added to the <em>Navigation</em> menu automatically by some modules.',
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About Us');
  t('Community Library');
  t('Features');
  t('For Kids menu');
  t('Get Involved');
  t('Main menu');
  t('Management');
  t('Menu items for any enabled features.');
  t('Navigation');
  t('Projects');
  t('Secondary School');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('The <em>Management</em> menu contains links for administrative tasks.');
  t('The <em>Navigation</em> menu contains links intended for site visitors. Links are added to the <em>Navigation</em> menu automatically by some modules.');
  t('The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.');
  t('User menu');
  t('discover nigeria menu');
  t('eResources');


  return $menus;
}
