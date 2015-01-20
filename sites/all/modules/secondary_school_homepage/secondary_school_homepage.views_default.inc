<?php
/**
 * @file
 * secondary_school_homepage.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function secondary_school_homepage_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'main_home_side_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'main-home-side-view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'main-home-side-view';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: main-home-side-view */
  $handler = $view->new_display('block', 'main-home-side-view', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'sidebar-home grid-6';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: sidebar-image */
  $handler->display->display_options['fields']['field_sidebar_image']['id'] = 'field_sidebar_image';
  $handler->display->display_options['fields']['field_sidebar_image']['table'] = 'field_data_field_sidebar_image';
  $handler->display->display_options['fields']['field_sidebar_image']['field'] = 'field_sidebar_image';
  $handler->display->display_options['fields']['field_sidebar_image']['label'] = '';
  $handler->display->display_options['fields']['field_sidebar_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sidebar_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sidebar_image']['settings'] = array(
    'image_style' => 'sidebar-image-style',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div id="trans-title-sidebar"></div>
<div id="title-body-sidebar">[title]</div>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
    3 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: menu-reference (field_menu_reference) */
  $handler->display->display_options['filters']['field_menu_reference_tid']['id'] = 'field_menu_reference_tid';
  $handler->display->display_options['filters']['field_menu_reference_tid']['table'] = 'field_data_field_menu_reference';
  $handler->display->display_options['filters']['field_menu_reference_tid']['field'] = 'field_menu_reference_tid';
  $handler->display->display_options['filters']['field_menu_reference_tid']['value'] = array(
    25 => '25',
  );
  $handler->display->display_options['filters']['field_menu_reference_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_menu_reference_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_menu_reference_tid']['vocabulary'] = 'main_site_tax';
  /* Filter criterion: Content: menu-reference (field_menu_reference) */
  $handler->display->display_options['filters']['field_menu_reference_tid_1']['id'] = 'field_menu_reference_tid_1';
  $handler->display->display_options['filters']['field_menu_reference_tid_1']['table'] = 'field_data_field_menu_reference';
  $handler->display->display_options['filters']['field_menu_reference_tid_1']['field'] = 'field_menu_reference_tid';
  $handler->display->display_options['filters']['field_menu_reference_tid_1']['value'] = array(
    34 => '34',
  );
  $handler->display->display_options['filters']['field_menu_reference_tid_1']['group'] = 2;
  $handler->display->display_options['filters']['field_menu_reference_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_menu_reference_tid_1']['vocabulary'] = 'main_site_tax';
  /* Filter criterion: Content: menu-reference (field_menu_reference) */
  $handler->display->display_options['filters']['field_menu_reference_tid_2']['id'] = 'field_menu_reference_tid_2';
  $handler->display->display_options['filters']['field_menu_reference_tid_2']['table'] = 'field_data_field_menu_reference';
  $handler->display->display_options['filters']['field_menu_reference_tid_2']['field'] = 'field_menu_reference_tid';
  $handler->display->display_options['filters']['field_menu_reference_tid_2']['value'] = array(
    11 => '11',
  );
  $handler->display->display_options['filters']['field_menu_reference_tid_2']['group'] = 2;
  $handler->display->display_options['filters']['field_menu_reference_tid_2']['type'] = 'select';
  $handler->display->display_options['filters']['field_menu_reference_tid_2']['vocabulary'] = 'main_site_tax';
  /* Filter criterion: Content: sidebar-image (field_sidebar_image:fid) */
  $handler->display->display_options['filters']['field_sidebar_image_fid']['id'] = 'field_sidebar_image_fid';
  $handler->display->display_options['filters']['field_sidebar_image_fid']['table'] = 'field_data_field_sidebar_image';
  $handler->display->display_options['filters']['field_sidebar_image_fid']['field'] = 'field_sidebar_image_fid';
  $handler->display->display_options['filters']['field_sidebar_image_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_sidebar_image_fid']['group'] = 2;
  /* Filter criterion: Content: menu-reference (field_menu_reference) */
  $handler->display->display_options['filters']['field_menu_reference_tid_3']['id'] = 'field_menu_reference_tid_3';
  $handler->display->display_options['filters']['field_menu_reference_tid_3']['table'] = 'field_data_field_menu_reference';
  $handler->display->display_options['filters']['field_menu_reference_tid_3']['field'] = 'field_menu_reference_tid';
  $handler->display->display_options['filters']['field_menu_reference_tid_3']['value'] = array(
    19 => '19',
  );
  $handler->display->display_options['filters']['field_menu_reference_tid_3']['group'] = 3;
  $handler->display->display_options['filters']['field_menu_reference_tid_3']['type'] = 'select';
  $handler->display->display_options['filters']['field_menu_reference_tid_3']['vocabulary'] = 'main_site_tax';

  /* Display: view: eresources */
  $handler = $view->new_display('block', 'view: eresources', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'sidebar-home grid-6';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: sidebar-image */
  $handler->display->display_options['fields']['field_sidebar_image']['id'] = 'field_sidebar_image';
  $handler->display->display_options['fields']['field_sidebar_image']['table'] = 'field_data_field_sidebar_image';
  $handler->display->display_options['fields']['field_sidebar_image']['field'] = 'field_sidebar_image';
  $handler->display->display_options['fields']['field_sidebar_image']['label'] = '';
  $handler->display->display_options['fields']['field_sidebar_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sidebar_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sidebar_image']['settings'] = array(
    'image_style' => 'sidebar-image-style',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: menu-reference (field_menu_reference) */
  $handler->display->display_options['filters']['field_menu_reference_tid']['id'] = 'field_menu_reference_tid';
  $handler->display->display_options['filters']['field_menu_reference_tid']['table'] = 'field_data_field_menu_reference';
  $handler->display->display_options['filters']['field_menu_reference_tid']['field'] = 'field_menu_reference_tid';
  $handler->display->display_options['filters']['field_menu_reference_tid']['value'] = array(
    25 => '25',
  );
  $handler->display->display_options['filters']['field_menu_reference_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_menu_reference_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_menu_reference_tid']['vocabulary'] = 'main_site_tax';
  $handler->display->display_options['block_description'] = 'view: eresources';

  /* Display: view: community library */
  $handler = $view->new_display('block', 'view: community library', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'sidebar-home grid-6';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: sidebar-image */
  $handler->display->display_options['fields']['field_sidebar_image']['id'] = 'field_sidebar_image';
  $handler->display->display_options['fields']['field_sidebar_image']['table'] = 'field_data_field_sidebar_image';
  $handler->display->display_options['fields']['field_sidebar_image']['field'] = 'field_sidebar_image';
  $handler->display->display_options['fields']['field_sidebar_image']['label'] = '';
  $handler->display->display_options['fields']['field_sidebar_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sidebar_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sidebar_image']['settings'] = array(
    'image_style' => 'sidebar-image-style',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div id="trans-title-sidebar-1"></div>
<div id="title-body-sidebar-1">[title]</div>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'discover_nigeria' => 'discover_nigeria',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: sidebar-image (field_sidebar_image:fid) */
  $handler->display->display_options['filters']['field_sidebar_image_fid']['id'] = 'field_sidebar_image_fid';
  $handler->display->display_options['filters']['field_sidebar_image_fid']['table'] = 'field_data_field_sidebar_image';
  $handler->display->display_options['filters']['field_sidebar_image_fid']['field'] = 'field_sidebar_image_fid';
  $handler->display->display_options['filters']['field_sidebar_image_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_sidebar_image_fid']['group'] = 1;
  $handler->display->display_options['block_description'] = 'view: community library';

  /* Display: view: secondary secondary PQ */
  $handler = $view->new_display('block', 'view: secondary secondary PQ', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'sidebar-home grid-6';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: sidebar-image */
  $handler->display->display_options['fields']['field_sidebar_image']['id'] = 'field_sidebar_image';
  $handler->display->display_options['fields']['field_sidebar_image']['table'] = 'field_data_field_sidebar_image';
  $handler->display->display_options['fields']['field_sidebar_image']['field'] = 'field_sidebar_image';
  $handler->display->display_options['fields']['field_sidebar_image']['label'] = '';
  $handler->display->display_options['fields']['field_sidebar_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sidebar_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sidebar_image']['settings'] = array(
    'image_style' => 'sidebar-image-style',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: menu-reference (field_menu_reference) */
  $handler->display->display_options['filters']['field_menu_reference_tid']['id'] = 'field_menu_reference_tid';
  $handler->display->display_options['filters']['field_menu_reference_tid']['table'] = 'field_data_field_menu_reference';
  $handler->display->display_options['filters']['field_menu_reference_tid']['field'] = 'field_menu_reference_tid';
  $handler->display->display_options['filters']['field_menu_reference_tid']['value'] = array(
    1401 => '1401',
  );
  $handler->display->display_options['filters']['field_menu_reference_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_menu_reference_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_menu_reference_tid']['vocabulary'] = 'main_site_tax';
  $handler->display->display_options['block_description'] = 'view: secondary secondary PQ';

  /* Display: view: useful and cool websites */
  $handler = $view->new_display('block', 'view: useful and cool websites', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'sidebar-home grid-6';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: sidebar-image */
  $handler->display->display_options['fields']['field_sidebar_image']['id'] = 'field_sidebar_image';
  $handler->display->display_options['fields']['field_sidebar_image']['table'] = 'field_data_field_sidebar_image';
  $handler->display->display_options['fields']['field_sidebar_image']['field'] = 'field_sidebar_image';
  $handler->display->display_options['fields']['field_sidebar_image']['label'] = '';
  $handler->display->display_options['fields']['field_sidebar_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sidebar_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sidebar_image']['settings'] = array(
    'image_style' => 'sidebar-image-style',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'Useful and Cool Sites';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['block_description'] = 'view: useful and cool websites';

  /* Display: view: ebooks for secondary school */
  $handler = $view->new_display('block', 'view: ebooks for secondary school', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'sidebar-home grid-6';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: sidebar-image */
  $handler->display->display_options['fields']['field_sidebar_image']['id'] = 'field_sidebar_image';
  $handler->display->display_options['fields']['field_sidebar_image']['table'] = 'field_data_field_sidebar_image';
  $handler->display->display_options['fields']['field_sidebar_image']['field'] = 'field_sidebar_image';
  $handler->display->display_options['fields']['field_sidebar_image']['label'] = '';
  $handler->display->display_options['fields']['field_sidebar_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sidebar_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sidebar_image']['settings'] = array(
    'image_style' => 'sidebar-image-style',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'eBooks';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['block_description'] = 'view: ebooks for secondary school';

  /* Display: view: textbook and more for secondary sch */
  $handler = $view->new_display('block', 'view: textbook and more for secondary sch', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'sidebar-home grid-6';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: sidebar-image */
  $handler->display->display_options['fields']['field_sidebar_image']['id'] = 'field_sidebar_image';
  $handler->display->display_options['fields']['field_sidebar_image']['table'] = 'field_data_field_sidebar_image';
  $handler->display->display_options['fields']['field_sidebar_image']['field'] = 'field_sidebar_image';
  $handler->display->display_options['fields']['field_sidebar_image']['label'] = '';
  $handler->display->display_options['fields']['field_sidebar_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sidebar_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sidebar_image']['settings'] = array(
    'image_style' => 'sidebar-image-style',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'Textbooks and More';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['block_description'] = 'view: textbook and more for secondary sch';

  /* Display: view: other resource sec sch */
  $handler = $view->new_display('block', 'view: other resource sec sch', 'block_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'sidebar-home grid-6';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: sidebar-image */
  $handler->display->display_options['fields']['field_sidebar_image']['id'] = 'field_sidebar_image';
  $handler->display->display_options['fields']['field_sidebar_image']['table'] = 'field_data_field_sidebar_image';
  $handler->display->display_options['fields']['field_sidebar_image']['field'] = 'field_sidebar_image';
  $handler->display->display_options['fields']['field_sidebar_image']['label'] = '';
  $handler->display->display_options['fields']['field_sidebar_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sidebar_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sidebar_image']['settings'] = array(
    'image_style' => 'sidebar-image-style',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'Other Resources';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['block_description'] = 'view: other resource sec sch';
  $export['main_home_side_view'] = $view;

  return $export;
}
