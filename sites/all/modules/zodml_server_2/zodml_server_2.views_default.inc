<?php
/**
 * @file
 * zodml_server_2.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function zodml_server_2_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'action_button_for_involved';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'action-button-for-involved';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'action-button-for-involved';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: action-button-for-involved */
  $handler = $view->new_display('block', 'action-button-for-involved', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'get-involved grid-6';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: call-to-action-button */
  $handler->display->display_options['fields']['field_call_to_action_button']['id'] = 'field_call_to_action_button';
  $handler->display->display_options['fields']['field_call_to_action_button']['table'] = 'field_data_field_call_to_action_button';
  $handler->display->display_options['fields']['field_call_to_action_button']['field'] = 'field_call_to_action_button';
  $handler->display->display_options['fields']['field_call_to_action_button']['label'] = '';
  $handler->display->display_options['fields']['field_call_to_action_button']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_call_to_action_button']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_call_to_action_button']['settings'] = array(
    'image_style' => 'call-to-action-single',
    'image_link' => 'content',
  );
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'main_site_content' => 'main_site_content',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['value'] = 'Become a Friend of the Library';
  $handler->display->display_options['filters']['title_1']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'Jobs and Internships';
  $handler->display->display_options['filters']['title']['group'] = 2;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_2']['id'] = 'title_2';
  $handler->display->display_options['filters']['title_2']['table'] = 'node';
  $handler->display->display_options['filters']['title_2']['field'] = 'title';
  $handler->display->display_options['filters']['title_2']['value'] = 'Donate to ZODML';
  $handler->display->display_options['filters']['title_2']['group'] = 3;
  $handler->display->display_options['block_description'] = 'action-button-for-involved';
  $export['action_button_for_involved'] = $view;

  $view = new view();
  $view->name = 'biology_waec';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Biology WAEC';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Year (field_year) */
  $handler->display->display_options['sorts']['field_year_value']['id'] = 'field_year_value';
  $handler->display->display_options['sorts']['field_year_value']['table'] = 'field_data_field_year';
  $handler->display->display_options['sorts']['field_year_value']['field'] = 'field_year_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );

  /* Display: WAEC Biology */
  $handler = $view->new_display('block', 'WAEC Biology', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    101 => '101',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'WAEC Biology';

  /* Display: UME English */
  $handler = $view->new_display('block', 'UME English', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    97 => '97',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1428 => '1428',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'UME English';

  /* Display: WAEC Agriculture */
  $handler = $view->new_display('block', 'WAEC Agriculture', 'block_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1429 => '1429',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'WAEC Agriculture';

  /* Display: WAEC Chemistry */
  $handler = $view->new_display('block', 'WAEC Chemistry', 'block_3');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1421 => '1421',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'WAEC Chemistry';

  /* Display: WAEC Civic Education */
  $handler = $view->new_display('block', 'WAEC Civic Education', 'block_4');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1435 => '1435',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'WAEC Civic Education';

  /* Display: WAEC Commerce */
  $handler = $view->new_display('block', 'WAEC Commerce', 'block_5');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1425 => '1425',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'WAEC Commerce';

  /* Display: WAEC Computer Studies */
  $handler = $view->new_display('block', 'WAEC Computer Studies', 'block_6');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1436 => '1436',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'WAEC Computer Studies';

  /* Display: WAEC CRK */
  $handler = $view->new_display('block', 'WAEC CRK', 'block_7');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1427 => '1427',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'WAEC CRK';

  /* Display: WAEC Data Processing */
  $handler = $view->new_display('block', 'WAEC Data Processing', 'block_8');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1437 => '1437',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'WAEC Data Processing';

  /* Display: WAEC Economics */
  $handler = $view->new_display('block', 'WAEC Economics', 'block_9');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1424 => '1424',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'WAEC Economics';

  /* Display: WAEC Edo */
  $handler = $view->new_display('block', 'WAEC Edo', 'block_10');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1438 => '1438',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'WAEC Edo';

  /* Display: WAEC Efik */
  $handler = $view->new_display('block', 'WAEC Efik', 'block_11');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1439 => '1439',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'WAEC Efik';

  /* Display: WAEC English Language */
  $handler = $view->new_display('block', 'WAEC English Language', 'block_12');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1428 => '1428',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'WAEC English Language';

  /* Display: WAEC Financial Accounting */
  $handler = $view->new_display('block', 'WAEC Financial Accounting', 'block_13');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1433 => '1433',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'WAEC Financial Accounting';

  /* Display: WAEC Food and Nutrition */
  $handler = $view->new_display('block', 'WAEC Food and Nutrition', 'block_14');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1440 => '1440',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'WAEC Food and Nutrition';

  /* Display: WAEC Further Mathematics */
  $handler = $view->new_display('block', 'WAEC Further Mathematics', 'block_15');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1426 => '1426',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'WAEC Further Mathematics';

  /* Display: WAEC Geography */
  $handler = $view->new_display('block', 'WAEC Geography', 'block_16');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1441 => '1441',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'WAEC Geography';

  /* Display: WAEC Home Management */
  $handler = $view->new_display('block', 'WAEC Home Management', 'block_17');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1427 => '1427',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'WAEC Home Management';

  /* Display: WAEC Government */
  $handler = $view->new_display('block', 'WAEC Government', 'block_18');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    0 => '101',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'WAEC Government';

  /* Display: WAEC Hausa */
  $handler = $view->new_display('block', 'WAEC Hausa', 'block_19');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1434 => '1434',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'WAEC Hausa';

  /* Display: WAEC Health Science */
  $handler = $view->new_display('block', 'WAEC Health Science', 'block_20');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1442 => '1442',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'WAEC Health Science';

  /* Display: WAEC History */
  $handler = $view->new_display('block', 'WAEC History', 'block_21');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    0 => '101',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'WAEC History';

  /* Display: WAEC Ibibio */
  $handler = $view->new_display('block', 'WAEC Ibibio', 'block_22');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1445 => '1445',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'WAEC Ibibio';

  /* Display: WAEC Igbo */
  $handler = $view->new_display('block', 'WAEC Igbo', 'block_23');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    0 => '101',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'WAEC Igbo';

  /* Display: WAEC Islamic Studies  */
  $handler = $view->new_display('block', 'WAEC Islamic Studies ', 'block_24');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1430 => '1430',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'WAEC Islamic Studies ';

  /* Display: WAEC Literature-in-English */
  $handler = $view->new_display('block', 'WAEC Literature-in-English', 'block_25');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1423 => '1423',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'WAEC Literature-in-English';

  /* Display: WAEC Office Practice */
  $handler = $view->new_display('block', 'WAEC Office Practice', 'block_26');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1449 => '1449',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'WAEC Office Practice';

  /* Display: WAEC Painting and Decorating */
  $handler = $view->new_display('block', 'WAEC Painting and Decorating', 'block_27');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1450 => '1450',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'WAEC Painting and Decorating';

  /* Display: WAEC Physical Education */
  $handler = $view->new_display('block', 'WAEC Physical Education', 'block_28');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1451 => '1451',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'WAEC Physical Education';

  /* Display: WAEC Physics */
  $handler = $view->new_display('block', 'WAEC Physics', 'block_29');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1452 => '1452',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'WAEC Physics';

  /* Display: WAEC Technical Drawing */
  $handler = $view->new_display('block', 'WAEC Technical Drawing', 'block_30');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1453 => '1453',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'WAEC Technical Drawing';

  /* Display: WAEC Visual Arts */
  $handler = $view->new_display('block', 'WAEC Visual Arts', 'block_32');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1454 => '1454',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'WAEC Visual Arts';

  /* Display: WAEC Yoruba */
  $handler = $view->new_display('block', 'WAEC Yoruba', 'block_33');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1431 => '1431',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'WAEC Yoruba';

  /* Display: UME Biology */
  $handler = $view->new_display('block', 'UME Biology', 'block_31');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    97 => '97',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    101 => '101',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'UME Biology';

  /* Display: UME Chemistry */
  $handler = $view->new_display('block', 'UME Chemistry', 'block_34');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    97 => '97',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1421 => '1421',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'UME Chemistry';

  /* Display: UME Commerce */
  $handler = $view->new_display('block', 'UME Commerce', 'block_35');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    97 => '97',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1425 => '1425',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'UME Commerce';

  /* Display: UME CRK */
  $handler = $view->new_display('block', 'UME CRK', 'block_36');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    97 => '97',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1427 => '1427',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'UME CRK';

  /* Display: UME Economics  */
  $handler = $view->new_display('block', 'UME Economics ', 'block_37');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    97 => '97',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1424 => '1424',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'UME Economics ';

  /* Display: UME Government */
  $handler = $view->new_display('block', 'UME Government', 'block_38');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    97 => '97',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1432 => '1432',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'UME Government';

  /* Display: UME Islamic Studies */
  $handler = $view->new_display('block', 'UME Islamic Studies', 'block_39');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    97 => '97',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1430 => '1430',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'UME Islamic Studies';

  /* Display: UME Mathematics */
  $handler = $view->new_display('block', 'UME Mathematics', 'block_40');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    97 => '97',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1455 => '1455',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'UME Mathematics';

  /* Display: UME Physics */
  $handler = $view->new_display('block', 'UME Physics', 'block_41');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    97 => '97',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1452 => '1452',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'UME Physics';

  /* Display: UME Principles of Accounting */
  $handler = $view->new_display('block', 'UME Principles of Accounting', 'block_42');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    97 => '97',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1433 => '1433',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'UME Principles of Accounting';

  /* Display: NECO Biology */
  $handler = $view->new_display('block', 'NECO Biology', 'block_43');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    1456 => '1456',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    0 => '101',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'NECO Biology';

  /* Display: NECO Chemistry */
  $handler = $view->new_display('block', 'NECO Chemistry', 'block_44');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    1456 => '1456',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1421 => '1421',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'NECO Chemistry';

  /* Display: NECO Economics */
  $handler = $view->new_display('block', 'NECO Economics', 'block_45');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    1456 => '1456',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1424 => '1424',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'NECO Economics';

  /* Display: NECO English Language  */
  $handler = $view->new_display('block', 'NECO English Language ', 'block_46');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    1456 => '1456',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1428 => '1428',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'NECO English Language ';

  /* Display: NECO Government */
  $handler = $view->new_display('block', 'NECO Government', 'block_47');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    1456 => '1456',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    0 => '101',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'NECO Government';

  /* Display: NECO Literature-in-English */
  $handler = $view->new_display('block', 'NECO Literature-in-English', 'block_48');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    1456 => '1456',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1423 => '1423',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'NECO Literature-in-English';

  /* Display: NECO Mathematics */
  $handler = $view->new_display('block', 'NECO Mathematics', 'block_49');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    1456 => '1456',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1455 => '1455',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'NECO Mathematics';

  /* Display: NECO Physics  */
  $handler = $view->new_display('block', 'NECO Physics ', 'block_50');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    95 => '95',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    1456 => '1456',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1452 => '1452',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'NECO Physics ';

  /* Display: ICAN General */
  $handler = $view->new_display('block', 'ICAN General', 'block_51');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    94 => '94',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    98 => '98',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1458 => '1458',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'ICAN General';

  /* Display: ICAN ATSWA */
  $handler = $view->new_display('block', 'ICAN ATSWA', 'block_52');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    94 => '94',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    98 => '98',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1459 => '1459',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'ICAN ATSWA';

  /* Display: ICAN Foundation */
  $handler = $view->new_display('block', 'ICAN Foundation', 'block_53');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    94 => '94',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    98 => '98',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1460 => '1460',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'ICAN Foundation';

  /* Display: NIM Business */
  $handler = $view->new_display('block', 'NIM Business', 'block_54');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    94 => '94',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    99 => '99',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1464 => '1464',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'NIM Business';

  /* Display: NIM Communication */
  $handler = $view->new_display('block', 'NIM Communication', 'block_55');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    94 => '94',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    99 => '99',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1465 => '1465',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'NIM Communication';

  /* Display: NIM Corporate */
  $handler = $view->new_display('block', 'NIM Corporate', 'block_56');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    94 => '94',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    99 => '99',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1466 => '1466',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'NIM Corporate';

  /* Display: NIM Entrepreneurship */
  $handler = $view->new_display('block', 'NIM Entrepreneurship', 'block_57');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    94 => '94',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    99 => '99',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1467 => '1467',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'NIM Entrepreneurship';

  /* Display: NIM Financial */
  $handler = $view->new_display('block', 'NIM Financial', 'block_58');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    94 => '94',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    99 => '99',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1468 => '1468',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'NIM Financial';

  /* Display: NIM Mgtcase */
  $handler = $view->new_display('block', 'NIM Mgtcase', 'block_59');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    94 => '94',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    99 => '99',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1469 => '1469',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'NIM Mgtcase';

  /* Display: NIM Mgtprinciples */
  $handler = $view->new_display('block', 'NIM Mgtprinciples', 'block_60');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    94 => '94',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    99 => '99',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1470 => '1470',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'NIM Mgtprinciples';

  /* Display: NIM Marketing */
  $handler = $view->new_display('block', 'NIM Marketing', 'block_61');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    94 => '94',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    99 => '99',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1471 => '1471',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'NIM Marketing';

  /* Display: NIM small */
  $handler = $view->new_display('block', 'NIM small', 'block_62');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    94 => '94',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    99 => '99',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1472 => '1472',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'NIM small';

  /* Display: CITN General */
  $handler = $view->new_display('block', 'CITN General', 'block_63');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    94 => '94',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    1485 => '1485',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1458 => '1458',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'CITN General';

  /* Display: CITN Foundations */
  $handler = $view->new_display('block', 'CITN Foundations', 'block_64');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    94 => '94',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    1485 => '1485',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1460 => '1460',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'CITN Foundations';

  /* Display: CITN Professional I */
  $handler = $view->new_display('block', 'CITN Professional I', 'block_65');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    94 => '94',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    1485 => '1485',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1489 => '1489',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'CITN Professional I';

  /* Display: CITN Taxation I */
  $handler = $view->new_display('block', 'CITN Taxation I', 'block_66');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    94 => '94',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    1485 => '1485',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1463 => '1463',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'CITN Taxation I';

  /* Display: CIBNG General */
  $handler = $view->new_display('block', 'CIBNG General', 'block_67');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    94 => '94',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    1484 => '1484',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1458 => '1458',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'CIBNG General';

  /* Display: CISB Derivatives */
  $handler = $view->new_display('block', 'CISB Derivatives', 'block_68');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    94 => '94',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    1482 => '1482',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1473 => '1473',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'CISB Derivatives';

  /* Display: CISB Financial */
  $handler = $view->new_display('block', 'CISB Financial', 'block_69');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    94 => '94',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    1482 => '1482',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1474 => '1474',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'CISB Financial';

  /* Display: CISB Corporate */
  $handler = $view->new_display('block', 'CISB Corporate', 'block_70');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    94 => '94',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    1482 => '1482',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1475 => '1475',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'CISB Corporate';

  /* Display: CISB Ethics */
  $handler = $view->new_display('block', 'CISB Ethics', 'block_71');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    94 => '94',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    1482 => '1482',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1476 => '1476',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'CISB Ethics';

  /* Display: CITLS Prelim */
  $handler = $view->new_display('block', 'CITLS Prelim', 'block_72');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    94 => '94',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    1483 => '1483',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1477 => '1477',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'CITLS Prelim';

  /* Display: CITLS Mid */
  $handler = $view->new_display('block', 'CITLS Mid', 'block_73');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    94 => '94',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    1483 => '1483',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1478 => '1478',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'CITLS Mid';

  /* Display: CITLS International */
  $handler = $view->new_display('block', 'CITLS International', 'block_74');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    94 => '94',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    1483 => '1483',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1479 => '1479',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'CITLS International';

  /* Display: CITLS Pre-Certification */
  $handler = $view->new_display('block', 'CITLS Pre-Certification', 'block_75');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    94 => '94',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    1483 => '1483',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1480 => '1480',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'CITLS Pre-Certification';

  /* Display: CITLS Supply */
  $handler = $view->new_display('block', 'CITLS Supply', 'block_76');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    94 => '94',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    1483 => '1483',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1481 => '1481',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'CITLS Supply';

  /* Display: ICAN Intermediate */
  $handler = $view->new_display('block', 'ICAN Intermediate', 'block_77');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    94 => '94',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    98 => '98',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1488 => '1488',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'ICAN Intermediate';

  /* Display: ICAN Professional I */
  $handler = $view->new_display('block', 'ICAN Professional I', 'block_78');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    94 => '94',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    98 => '98',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1489 => '1489',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'ICAN Professional I';

  /* Display: ICAN Professional II */
  $handler = $view->new_display('block', 'ICAN Professional II', 'block_79');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    94 => '94',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    98 => '98',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1490 => '1490',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'ICAN Professional II';

  /* Display: CITN Professional II */
  $handler = $view->new_display('block', 'CITN Professional II', 'block_80');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    94 => '94',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    1485 => '1485',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    1490 => '1490',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'CITN Professional II';

  /* Display: CITN Taxation II */
  $handler = $view->new_display('block', 'CITN Taxation II', 'block_81');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'meem grid-5';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'field_file_upload' => array(
      'element_type' => 'div',
      'class' => 'login-download',
    ),
    'field_login_statues' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File Upload */
  $handler->display->display_options['fields']['field_file_upload']['id'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['table'] = 'field_data_field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['field'] = 'field_file_upload';
  $handler->display->display_options['fields']['field_file_upload']['label'] = '';
  $handler->display->display_options['fields']['field_file_upload']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_upload']['click_sort_column'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'past_quesstions' => 'past_quesstions',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: PQ Type (field_pq_type) */
  $handler->display->display_options['filters']['field_pq_type_tid']['id'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['table'] = 'field_data_field_pq_type';
  $handler->display->display_options['filters']['field_pq_type_tid']['field'] = 'field_pq_type_tid';
  $handler->display->display_options['filters']['field_pq_type_tid']['value'] = array(
    94 => '94',
  );
  $handler->display->display_options['filters']['field_pq_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_pq_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_pq_type_tid']['vocabulary'] = 'past_question_type';
  /* Filter criterion: Content: Exam Body (field_exam_body) */
  $handler->display->display_options['filters']['field_exam_body_tid']['id'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['table'] = 'field_data_field_exam_body';
  $handler->display->display_options['filters']['field_exam_body_tid']['field'] = 'field_exam_body_tid';
  $handler->display->display_options['filters']['field_exam_body_tid']['value'] = array(
    1485 => '1485',
  );
  $handler->display->display_options['filters']['field_exam_body_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_body_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_body_tid']['vocabulary'] = 'examination_body';
  /* Filter criterion: Content: Exam/Subject Type (field_exam_subject_type) */
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['id'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['table'] = 'field_data_field_exam_subject_type';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['field'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['value'] = array(
    9750 => '9750',
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator_id'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['label'] = 'Subject';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['operator'] = 'field_exam_subject_type_tid_op';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['identifier'] = 'field_exam_subject_type_tid';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_exam_subject_type_tid']['vocabulary'] = 'exam_subject_type';
  $handler->display->display_options['block_description'] = 'CITN Taxation II';
  $export['biology_waec'] = $view;

  $view = new view();
  $view->name = 'clipping';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Clipping';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Clipping';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'picture_collections' => 'picture_collections',
  );

  /* Display: Clipping */
  $handler = $view->new_display('block', 'Clipping', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'picture_collections' => 'picture_collections',
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['value'] = 'scanned-papers';
  $handler->display->display_options['block_description'] = 'Clipping';
  $export['clipping'] = $view;

  $view = new view();
  $view->name = 'clone_of_glossary';
  $view->description = 'A list of all content, by letter.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Clone of Glossary';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 36;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'name' => 'name',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 1,
      'separator' => '',
    ),
    'changed' => array(
      'sortable' => 1,
      'separator' => '',
    ),
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Last update';
  $handler->display->display_options['fields']['changed']['date_format'] = 'large';
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_action'] = 'default';
  $handler->display->display_options['arguments']['title']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['default_argument_options']['argument'] = 'a';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['title']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['title']['limit'] = '1';
  $handler->display->display_options['arguments']['title']['case'] = 'upper';
  $handler->display->display_options['arguments']['title']['path_case'] = 'lower';

  /* Display: Attachment */
  $handler = $view->new_display('attachment', 'Attachment', 'attachment');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['title']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['default_argument_options']['argument'] = 'a';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['summary_options']['inline'] = TRUE;
  $handler->display->display_options['arguments']['title']['summary_options']['separator'] = ' | ';
  $handler->display->display_options['arguments']['title']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['title']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['title']['limit'] = '1';
  $handler->display->display_options['arguments']['title']['case'] = 'upper';
  $handler->display->display_options['arguments']['title']['path_case'] = 'lower';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['inherit_arguments'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');

  /* Display: Discover Nigeria Glossary */
  $handler = $view->new_display('page', 'Discover Nigeria Glossary', 'page_1');
  $handler->display->display_options['path'] = 'discover-nigeria/glossary';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Glossary';
  $handler->display->display_options['menu']['weight'] = '0';
  $export['clone_of_glossary'] = $view;

  $view = new view();
  $view->name = 'contact_us_widget';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'contact us widget';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'contact us widget';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: contact us widget */
  $handler = $view->new_display('block', 'contact us widget', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: action button form */
  $handler->display->display_options['fields']['field_action_button_form_1']['id'] = 'field_action_button_form_1';
  $handler->display->display_options['fields']['field_action_button_form_1']['table'] = 'field_data_field_action_button_form';
  $handler->display->display_options['fields']['field_action_button_form_1']['field'] = 'field_action_button_form';
  $handler->display->display_options['fields']['field_action_button_form_1']['label'] = '';
  $handler->display->display_options['fields']['field_action_button_form_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_action_button_form_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_action_button_form_1']['settings'] = array(
    'image_style' => 'general_widget_280x50',
    'image_link' => 'content',
  );
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
  $handler->display->display_options['filters']['title']['value'] = 'Contact Us';
  $handler->display->display_options['block_description'] = 'contact us widget';

  /* Display: view: our blog */
  $handler = $view->new_display('block', 'view: our blog', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'From Our Blog';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog' => 'blog',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'view: our blog';
  $export['contact_us_widget'] = $view;

  $view = new view();
  $view->name = 'dn_people_landing_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'dn people landing view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'dn people landing view';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'discover_nigeria' => 'discover_nigeria',
  );

  /* Display: dn people landing view-block */
  $handler = $view->new_display('block', 'dn people landing view-block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ prev';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'seyi-boy grid-8';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: landing-page-image */
  $handler->display->display_options['fields']['field_landing_page_image']['id'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['table'] = 'field_data_field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['field'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_landing_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_landing_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_landing_page_image']['settings'] = array(
    'image_style' => 'dn_landing_image_380x250',
    'image_link' => 'content',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: cross label */
  $handler->display->display_options['fields']['field_cross_label']['id'] = 'field_cross_label';
  $handler->display->display_options['fields']['field_cross_label']['table'] = 'field_data_field_cross_label';
  $handler->display->display_options['fields']['field_cross_label']['field'] = 'field_cross_label';
  $handler->display->display_options['fields']['field_cross_label']['label'] = '';
  $handler->display->display_options['fields']['field_cross_label']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cross_label']['alter']['text'] = '<div id="dn-cross-label"></div>
<div id="cross-label">[field_cross_label]</div>';
  $handler->display->display_options['fields']['field_cross_label']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_cross_label']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_cross_label']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_cross_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'discover_nigeria' => 'discover_nigeria',
  );
  /* Filter criterion: Content: menu referenc (field_menu_referenc) */
  $handler->display->display_options['filters']['field_menu_referenc_tid']['id'] = 'field_menu_referenc_tid';
  $handler->display->display_options['filters']['field_menu_referenc_tid']['table'] = 'field_data_field_menu_referenc';
  $handler->display->display_options['filters']['field_menu_referenc_tid']['field'] = 'field_menu_referenc_tid';
  $handler->display->display_options['filters']['field_menu_referenc_tid']['value'] = array(
    73 => '73',
  );
  $handler->display->display_options['filters']['field_menu_referenc_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_menu_referenc_tid']['vocabulary'] = 'discover_nigeria_tax';
  $handler->display->display_options['block_description'] = 'dn people landing view';

  /* Display: dn heritage landing view-block */
  $handler = $view->new_display('block', 'dn heritage landing view-block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ prev';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'seyi-boy grid-8';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: landing-page-image */
  $handler->display->display_options['fields']['field_landing_page_image']['id'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['table'] = 'field_data_field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['field'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_landing_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_landing_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_landing_page_image']['settings'] = array(
    'image_style' => 'dn_landing_image_380x250',
    'image_link' => 'content',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: cross label */
  $handler->display->display_options['fields']['field_cross_label']['id'] = 'field_cross_label';
  $handler->display->display_options['fields']['field_cross_label']['table'] = 'field_data_field_cross_label';
  $handler->display->display_options['fields']['field_cross_label']['field'] = 'field_cross_label';
  $handler->display->display_options['fields']['field_cross_label']['label'] = '';
  $handler->display->display_options['fields']['field_cross_label']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cross_label']['alter']['text'] = '<div id="dn-cross-label"></div>
<div id="cross-label">[field_cross_label]</div>';
  $handler->display->display_options['fields']['field_cross_label']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_cross_label']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_cross_label']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_cross_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'discover_nigeria' => 'discover_nigeria',
  );
  /* Filter criterion: Content: menu referenc (field_menu_referenc) */
  $handler->display->display_options['filters']['field_menu_referenc_tid']['id'] = 'field_menu_referenc_tid';
  $handler->display->display_options['filters']['field_menu_referenc_tid']['table'] = 'field_data_field_menu_referenc';
  $handler->display->display_options['filters']['field_menu_referenc_tid']['field'] = 'field_menu_referenc_tid';
  $handler->display->display_options['filters']['field_menu_referenc_tid']['value'] = array(
    75 => '75',
  );
  $handler->display->display_options['filters']['field_menu_referenc_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_menu_referenc_tid']['vocabulary'] = 'discover_nigeria_tax';
  $handler->display->display_options['block_description'] = 'dn heritage landing view';

  /* Display: dn state landing view-block */
  $handler = $view->new_display('block', 'dn state landing view-block', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ prev';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'seyi-boy grid-8';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: landing-page-image */
  $handler->display->display_options['fields']['field_landing_page_image']['id'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['table'] = 'field_data_field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['field'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_landing_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_landing_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_landing_page_image']['settings'] = array(
    'image_style' => 'dn_landing_image_380x250',
    'image_link' => 'content',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: cross label */
  $handler->display->display_options['fields']['field_cross_label']['id'] = 'field_cross_label';
  $handler->display->display_options['fields']['field_cross_label']['table'] = 'field_data_field_cross_label';
  $handler->display->display_options['fields']['field_cross_label']['field'] = 'field_cross_label';
  $handler->display->display_options['fields']['field_cross_label']['label'] = '';
  $handler->display->display_options['fields']['field_cross_label']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cross_label']['alter']['text'] = '<div id="dn-cross-label"></div>
<div id="cross-label">[field_cross_label]</div>';
  $handler->display->display_options['fields']['field_cross_label']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_cross_label']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_cross_label']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_cross_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'discover_nigeria' => 'discover_nigeria',
  );
  /* Filter criterion: Content: menu referenc (field_menu_referenc) */
  $handler->display->display_options['filters']['field_menu_referenc_tid']['id'] = 'field_menu_referenc_tid';
  $handler->display->display_options['filters']['field_menu_referenc_tid']['table'] = 'field_data_field_menu_referenc';
  $handler->display->display_options['filters']['field_menu_referenc_tid']['field'] = 'field_menu_referenc_tid';
  $handler->display->display_options['filters']['field_menu_referenc_tid']['value'] = array(
    72 => '72',
  );
  $handler->display->display_options['filters']['field_menu_referenc_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_menu_referenc_tid']['vocabulary'] = 'discover_nigeria_tax';
  $handler->display->display_options['block_description'] = 'dn state landing view';

  /* Display: dn gallery landing view-block */
  $handler = $view->new_display('block', 'dn gallery landing view-block', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ prev';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'seyi-boy grid-8';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: landing-page-image */
  $handler->display->display_options['fields']['field_landing_page_image']['id'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['table'] = 'field_data_field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['field'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_landing_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_landing_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_landing_page_image']['settings'] = array(
    'image_style' => 'dn_landing_image_380x250',
    'image_link' => 'content',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: cross label */
  $handler->display->display_options['fields']['field_cross_label']['id'] = 'field_cross_label';
  $handler->display->display_options['fields']['field_cross_label']['table'] = 'field_data_field_cross_label';
  $handler->display->display_options['fields']['field_cross_label']['field'] = 'field_cross_label';
  $handler->display->display_options['fields']['field_cross_label']['label'] = '';
  $handler->display->display_options['fields']['field_cross_label']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cross_label']['alter']['text'] = '<div id="dn-cross-label"></div>
<div id="cross-label">[field_cross_label]</div>';
  $handler->display->display_options['fields']['field_cross_label']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_cross_label']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_cross_label']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_cross_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'discover_nigeria' => 'discover_nigeria',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: menu referenc (field_menu_referenc) */
  $handler->display->display_options['filters']['field_menu_referenc_tid']['id'] = 'field_menu_referenc_tid';
  $handler->display->display_options['filters']['field_menu_referenc_tid']['table'] = 'field_data_field_menu_referenc';
  $handler->display->display_options['filters']['field_menu_referenc_tid']['field'] = 'field_menu_referenc_tid';
  $handler->display->display_options['filters']['field_menu_referenc_tid']['value'] = array(
    74 => '74',
  );
  $handler->display->display_options['filters']['field_menu_referenc_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_menu_referenc_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_menu_referenc_tid']['vocabulary'] = 'discover_nigeria_tax';
  $handler->display->display_options['block_description'] = 'dn gallery landing view';

  /* Display: dn people landing view-block */
  $handler = $view->new_display('block', 'dn people landing view-block', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ prev';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'seyi-boy grid-8';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'discover_nigeria' => 'discover_nigeria',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: menu referenc (field_menu_referenc) */
  $handler->display->display_options['filters']['field_menu_referenc_tid']['id'] = 'field_menu_referenc_tid';
  $handler->display->display_options['filters']['field_menu_referenc_tid']['table'] = 'field_data_field_menu_referenc';
  $handler->display->display_options['filters']['field_menu_referenc_tid']['field'] = 'field_menu_referenc_tid';
  $handler->display->display_options['filters']['field_menu_referenc_tid']['value'] = array(
    73 => '73',
  );
  $handler->display->display_options['filters']['field_menu_referenc_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_menu_referenc_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_menu_referenc_tid']['expose']['operator_id'] = 'field_menu_referenc_tid_op';
  $handler->display->display_options['filters']['field_menu_referenc_tid']['expose']['label'] = 'menu referenc (field_menu_referenc)';
  $handler->display->display_options['filters']['field_menu_referenc_tid']['expose']['operator'] = 'field_menu_referenc_tid_op';
  $handler->display->display_options['filters']['field_menu_referenc_tid']['expose']['identifier'] = 'field_menu_referenc_tid';
  $handler->display->display_options['filters']['field_menu_referenc_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_menu_referenc_tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_menu_referenc_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_menu_referenc_tid']['vocabulary'] = 'discover_nigeria_tax';
  $handler->display->display_options['filters']['field_menu_referenc_tid']['error_message'] = FALSE;
  $handler->display->display_options['block_description'] = 'dn people landing view';
  $export['dn_people_landing_view'] = $view;

  $view = new view();
  $view->name = 'dn_state_front_ads';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'dn state front ads';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'dn-state-front-ads';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'discover_nigeria' => 'discover_nigeria',
  );

  /* Display: dn-state-front-ads */
  $handler = $view->new_display('block', 'dn-state-front-ads', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: landing-page-image */
  $handler->display->display_options['fields']['field_landing_page_image']['id'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['table'] = 'field_data_field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['field'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_landing_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_landing_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_landing_page_image']['settings'] = array(
    'image_style' => 'dn_landing_image_380x250',
    'image_link' => 'content',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: cross label */
  $handler->display->display_options['fields']['field_cross_label']['id'] = 'field_cross_label';
  $handler->display->display_options['fields']['field_cross_label']['table'] = 'field_data_field_cross_label';
  $handler->display->display_options['fields']['field_cross_label']['field'] = 'field_cross_label';
  $handler->display->display_options['fields']['field_cross_label']['label'] = '';
  $handler->display->display_options['fields']['field_cross_label']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cross_label']['alter']['text'] = '<div id="dn-state-front-cross-label"></div>
<div id="state-front-cross-label">[field_cross_label]</div>

';
  $handler->display->display_options['fields']['field_cross_label']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_cross_label']['alter']['path'] = 'http://stage.zodml.org/[path] ';
  $handler->display->display_options['fields']['field_cross_label']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'discover_nigeria' => 'discover_nigeria',
  );
  /* Filter criterion: Content: menu referenc (field_menu_referenc) */
  $handler->display->display_options['filters']['field_menu_referenc_tid']['id'] = 'field_menu_referenc_tid';
  $handler->display->display_options['filters']['field_menu_referenc_tid']['table'] = 'field_data_field_menu_referenc';
  $handler->display->display_options['filters']['field_menu_referenc_tid']['field'] = 'field_menu_referenc_tid';
  $handler->display->display_options['filters']['field_menu_referenc_tid']['value'] = array(
    72 => '72',
  );
  $handler->display->display_options['filters']['field_menu_referenc_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_menu_referenc_tid']['vocabulary'] = 'discover_nigeria_tax';
  $handler->display->display_options['block_description'] = 'dn-state-front-ads';

  /* Display: dn-people-front-ads */
  $handler = $view->new_display('block', 'dn-people-front-ads', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: landing-page-image */
  $handler->display->display_options['fields']['field_landing_page_image']['id'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['table'] = 'field_data_field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['field'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_landing_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_landing_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_landing_page_image']['settings'] = array(
    'image_style' => 'dn_landing_image_380x250',
    'image_link' => 'content',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: cross label */
  $handler->display->display_options['fields']['field_cross_label']['id'] = 'field_cross_label';
  $handler->display->display_options['fields']['field_cross_label']['table'] = 'field_data_field_cross_label';
  $handler->display->display_options['fields']['field_cross_label']['field'] = 'field_cross_label';
  $handler->display->display_options['fields']['field_cross_label']['label'] = '';
  $handler->display->display_options['fields']['field_cross_label']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cross_label']['alter']['text'] = '<div id="dn-people-front-cross-label"></div>
<div id="people-front-cross-label">[field_cross_label]</div>

';
  $handler->display->display_options['fields']['field_cross_label']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_cross_label']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_cross_label']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_cross_label']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'discover_nigeria' => 'discover_nigeria',
  );
  /* Filter criterion: Content: menu referenc (field_menu_referenc) */
  $handler->display->display_options['filters']['field_menu_referenc_tid']['id'] = 'field_menu_referenc_tid';
  $handler->display->display_options['filters']['field_menu_referenc_tid']['table'] = 'field_data_field_menu_referenc';
  $handler->display->display_options['filters']['field_menu_referenc_tid']['field'] = 'field_menu_referenc_tid';
  $handler->display->display_options['filters']['field_menu_referenc_tid']['value'] = array(
    73 => '73',
  );
  $handler->display->display_options['filters']['field_menu_referenc_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_menu_referenc_tid']['vocabulary'] = 'discover_nigeria_tax';
  $handler->display->display_options['block_description'] = 'dn-peole-front-ads';

  /* Display: dn-visual-arts-front-ads */
  $handler = $view->new_display('block', 'dn-visual-arts-front-ads', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: landing-page-image */
  $handler->display->display_options['fields']['field_landing_page_image']['id'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['table'] = 'field_data_field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['field'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_landing_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_landing_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_landing_page_image']['settings'] = array(
    'image_style' => 'dn_landing_image_380x250',
    'image_link' => 'content',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: cross label */
  $handler->display->display_options['fields']['field_cross_label']['id'] = 'field_cross_label';
  $handler->display->display_options['fields']['field_cross_label']['table'] = 'field_data_field_cross_label';
  $handler->display->display_options['fields']['field_cross_label']['field'] = 'field_cross_label';
  $handler->display->display_options['fields']['field_cross_label']['label'] = '';
  $handler->display->display_options['fields']['field_cross_label']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cross_label']['alter']['text'] = '<div id="dn-people-front-cross-label"></div>
<div id="people-front-cross-label">[field_cross_label]</div>';
  $handler->display->display_options['fields']['field_cross_label']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_cross_label']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_cross_label']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_cross_label']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'discover_nigeria' => 'discover_nigeria',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: menu referenc (field_menu_referenc) */
  $handler->display->display_options['filters']['field_menu_referenc_tid']['id'] = 'field_menu_referenc_tid';
  $handler->display->display_options['filters']['field_menu_referenc_tid']['table'] = 'field_data_field_menu_referenc';
  $handler->display->display_options['filters']['field_menu_referenc_tid']['field'] = 'field_menu_referenc_tid';
  $handler->display->display_options['filters']['field_menu_referenc_tid']['value'] = array(
    74 => '74',
  );
  $handler->display->display_options['filters']['field_menu_referenc_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_menu_referenc_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_menu_referenc_tid']['vocabulary'] = 'discover_nigeria_tax';
  $handler->display->display_options['block_description'] = 'dn-visual-arts-front-ads';

  /* Display: dn-heritage-and-culture-front-ads */
  $handler = $view->new_display('block', 'dn-heritage-and-culture-front-ads', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: landing-page-image */
  $handler->display->display_options['fields']['field_landing_page_image']['id'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['table'] = 'field_data_field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['field'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_landing_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_landing_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_landing_page_image']['settings'] = array(
    'image_style' => 'dn_landing_image_380x250',
    'image_link' => 'content',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: cross label */
  $handler->display->display_options['fields']['field_cross_label']['id'] = 'field_cross_label';
  $handler->display->display_options['fields']['field_cross_label']['table'] = 'field_data_field_cross_label';
  $handler->display->display_options['fields']['field_cross_label']['field'] = 'field_cross_label';
  $handler->display->display_options['fields']['field_cross_label']['label'] = '';
  $handler->display->display_options['fields']['field_cross_label']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cross_label']['alter']['text'] = '<div id="dn-state-front-cross-label"></div>
<div id="state-front-cross-label">[field_cross_label]</div>';
  $handler->display->display_options['fields']['field_cross_label']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_cross_label']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_cross_label']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_cross_label']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'discover_nigeria' => 'discover_nigeria',
  );
  /* Filter criterion: Content: menu referenc (field_menu_referenc) */
  $handler->display->display_options['filters']['field_menu_referenc_tid']['id'] = 'field_menu_referenc_tid';
  $handler->display->display_options['filters']['field_menu_referenc_tid']['table'] = 'field_data_field_menu_referenc';
  $handler->display->display_options['filters']['field_menu_referenc_tid']['field'] = 'field_menu_referenc_tid';
  $handler->display->display_options['filters']['field_menu_referenc_tid']['value'] = array(
    75 => '75',
  );
  $handler->display->display_options['filters']['field_menu_referenc_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_menu_referenc_tid']['vocabulary'] = 'discover_nigeria_tax';
  $handler->display->display_options['block_description'] = 'dn-heritage-and-culturefront-ads';

  /* Display: dn-nigeria-fact-file-front-ads */
  $handler = $view->new_display('block', 'dn-nigeria-fact-file-front-ads', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: landing-page-image */
  $handler->display->display_options['fields']['field_landing_page_image']['id'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['table'] = 'field_data_field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['field'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_landing_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_landing_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_landing_page_image']['settings'] = array(
    'image_style' => 'dn_landing_image_380x250',
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
  $handler->display->display_options['filters']['title']['value'] = 'Nigeria Fact File';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['block_description'] = 'dn-nigeria-fact-file-front-ads';

  /* Display: dn-submit-front-ads */
  $handler = $view->new_display('block', 'dn-submit-front-ads', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: landing-page-image */
  $handler->display->display_options['fields']['field_landing_page_image']['id'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['table'] = 'field_data_field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['field'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_landing_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_landing_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_landing_page_image']['settings'] = array(
    'image_style' => 'dn_photo_upload_ads_380x120',
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
  $handler->display->display_options['filters']['title']['value'] = 'Submit a Photo';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['block_description'] = 'dn-submit-front-ads';
  $export['dn_state_front_ads'] = $view;

  $view = new view();
  $view->name = 'dn_state_quick_fact';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'dn state quick fact';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'states' => 'states',
  );

  /* Display: dn state quick fact */
  $handler = $view->new_display('block', 'dn state quick fact', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_dn_quick_fact_imag' => array(
      'element_type' => 'div',
      'class' => 'quickfact',
    ),
    'field_dn_quick_fact_body' => array(
      'element_type' => 'div',
      'class' => 'quickfact',
    ),
    'field_dn_lga_image' => array(
      'element_type' => 'div',
      'class' => 'lga',
    ),
    'field_dn_lga_body' => array(
      'element_type' => 'div',
      'class' => 'lga',
    ),
    'field_dn_gov_image' => array(
      'element_type' => 'div',
      'class' => 'gov',
    ),
    'field_dn_gov_body' => array(
      'element_type' => 'div',
      'class' => 'gov',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: dn quick fact imag */
  $handler->display->display_options['fields']['field_dn_quick_fact_imag']['id'] = 'field_dn_quick_fact_imag';
  $handler->display->display_options['fields']['field_dn_quick_fact_imag']['table'] = 'field_data_field_dn_quick_fact_imag';
  $handler->display->display_options['fields']['field_dn_quick_fact_imag']['field'] = 'field_dn_quick_fact_imag';
  $handler->display->display_options['fields']['field_dn_quick_fact_imag']['label'] = '';
  $handler->display->display_options['fields']['field_dn_quick_fact_imag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dn_quick_fact_imag']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_dn_quick_fact_imag']['settings'] = array(
    'image_style' => 'dn_state_nig_map_250x200',
    'image_link' => '',
  );
  /* Field: Content: dn quick fact body */
  $handler->display->display_options['fields']['field_dn_quick_fact_body']['id'] = 'field_dn_quick_fact_body';
  $handler->display->display_options['fields']['field_dn_quick_fact_body']['table'] = 'field_data_field_dn_quick_fact_body';
  $handler->display->display_options['fields']['field_dn_quick_fact_body']['field'] = 'field_dn_quick_fact_body';
  $handler->display->display_options['fields']['field_dn_quick_fact_body']['label'] = '';
  $handler->display->display_options['fields']['field_dn_quick_fact_body']['element_label_colon'] = FALSE;
  /* Field: Content: dn lga image */
  $handler->display->display_options['fields']['field_dn_lga_image']['id'] = 'field_dn_lga_image';
  $handler->display->display_options['fields']['field_dn_lga_image']['table'] = 'field_data_field_dn_lga_image';
  $handler->display->display_options['fields']['field_dn_lga_image']['field'] = 'field_dn_lga_image';
  $handler->display->display_options['fields']['field_dn_lga_image']['label'] = '';
  $handler->display->display_options['fields']['field_dn_lga_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dn_lga_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_dn_lga_image']['settings'] = array(
    'image_style' => 'dn_state_lga_map_285x405',
    'image_link' => '',
  );
  /* Field: Content: dn lga body */
  $handler->display->display_options['fields']['field_dn_lga_body']['id'] = 'field_dn_lga_body';
  $handler->display->display_options['fields']['field_dn_lga_body']['table'] = 'field_data_field_dn_lga_body';
  $handler->display->display_options['fields']['field_dn_lga_body']['field'] = 'field_dn_lga_body';
  $handler->display->display_options['fields']['field_dn_lga_body']['label'] = '';
  $handler->display->display_options['fields']['field_dn_lga_body']['element_label_colon'] = FALSE;
  /* Field: Content: dn gov image */
  $handler->display->display_options['fields']['field_dn_gov_image']['id'] = 'field_dn_gov_image';
  $handler->display->display_options['fields']['field_dn_gov_image']['table'] = 'field_data_field_dn_gov_image';
  $handler->display->display_options['fields']['field_dn_gov_image']['field'] = 'field_dn_gov_image';
  $handler->display->display_options['fields']['field_dn_gov_image']['label'] = '';
  $handler->display->display_options['fields']['field_dn_gov_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dn_gov_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_dn_gov_image']['settings'] = array(
    'image_style' => 'dn_state_gov_300x300',
    'image_link' => '',
  );
  /* Field: Content: dn gov body */
  $handler->display->display_options['fields']['field_dn_gov_body']['id'] = 'field_dn_gov_body';
  $handler->display->display_options['fields']['field_dn_gov_body']['table'] = 'field_data_field_dn_gov_body';
  $handler->display->display_options['fields']['field_dn_gov_body']['field'] = 'field_dn_gov_body';
  $handler->display->display_options['fields']['field_dn_gov_body']['label'] = '';
  $handler->display->display_options['fields']['field_dn_gov_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'discover_nigeria' => 'discover_nigeria',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'dn state quick fact';

  /* Display: dn eco and edu view */
  $handler = $view->new_display('block', 'dn eco and edu view', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_dn_eco_and_edu_body' => array(
      'element_type' => 'div',
      'class' => 'economy-body',
    ),
    'field_dn_did_you_know_img' => array(
      'element_type' => 'div',
      'class' => 'economy',
    ),
    'field_dn_did_you_know_body' => array(
      'element_type' => 'div',
      'class' => 'economy',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: dn eco and edu body */
  $handler->display->display_options['fields']['field_dn_eco_and_edu_body']['id'] = 'field_dn_eco_and_edu_body';
  $handler->display->display_options['fields']['field_dn_eco_and_edu_body']['table'] = 'field_data_field_dn_eco_and_edu_body';
  $handler->display->display_options['fields']['field_dn_eco_and_edu_body']['field'] = 'field_dn_eco_and_edu_body';
  $handler->display->display_options['fields']['field_dn_eco_and_edu_body']['label'] = '';
  $handler->display->display_options['fields']['field_dn_eco_and_edu_body']['element_label_colon'] = FALSE;
  /* Field: Content: dn did you know img */
  $handler->display->display_options['fields']['field_dn_did_you_know_img']['id'] = 'field_dn_did_you_know_img';
  $handler->display->display_options['fields']['field_dn_did_you_know_img']['table'] = 'field_data_field_dn_did_you_know_img';
  $handler->display->display_options['fields']['field_dn_did_you_know_img']['field'] = 'field_dn_did_you_know_img';
  $handler->display->display_options['fields']['field_dn_did_you_know_img']['label'] = '';
  $handler->display->display_options['fields']['field_dn_did_you_know_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dn_did_you_know_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_dn_did_you_know_img']['settings'] = array(
    'image_style' => 'dn_state_dyk_hist_350x250',
    'image_link' => '',
  );
  /* Field: Content: dn did you know body */
  $handler->display->display_options['fields']['field_dn_did_you_know_body']['id'] = 'field_dn_did_you_know_body';
  $handler->display->display_options['fields']['field_dn_did_you_know_body']['table'] = 'field_data_field_dn_did_you_know_body';
  $handler->display->display_options['fields']['field_dn_did_you_know_body']['field'] = 'field_dn_did_you_know_body';
  $handler->display->display_options['fields']['field_dn_did_you_know_body']['label'] = '';
  $handler->display->display_options['fields']['field_dn_did_you_know_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'discover_nigeria' => 'discover_nigeria',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'dn eco and edu view';

  /* Display: dn history and people view */
  $handler = $view->new_display('block', 'dn history and people view', 'block_2');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_dn_hist_and_peo_body' => array(
      'element_type' => 'div',
      'class' => 'history',
    ),
    'field_dn_notable_indigenes_img' => array(
      'element_type' => 'div',
      'class' => 'notable',
    ),
    'field_dn_notable_indigenes_body' => array(
      'element_type' => 'div',
      'class' => 'notable',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: dn hist and peo body */
  $handler->display->display_options['fields']['field_dn_hist_and_peo_body']['id'] = 'field_dn_hist_and_peo_body';
  $handler->display->display_options['fields']['field_dn_hist_and_peo_body']['table'] = 'field_data_field_dn_hist_and_peo_body';
  $handler->display->display_options['fields']['field_dn_hist_and_peo_body']['field'] = 'field_dn_hist_and_peo_body';
  $handler->display->display_options['fields']['field_dn_hist_and_peo_body']['label'] = '';
  $handler->display->display_options['fields']['field_dn_hist_and_peo_body']['element_label_colon'] = FALSE;
  /* Field: Content: dn notable indigenes img */
  $handler->display->display_options['fields']['field_dn_notable_indigenes_img']['id'] = 'field_dn_notable_indigenes_img';
  $handler->display->display_options['fields']['field_dn_notable_indigenes_img']['table'] = 'field_data_field_dn_notable_indigenes_img';
  $handler->display->display_options['fields']['field_dn_notable_indigenes_img']['field'] = 'field_dn_notable_indigenes_img';
  $handler->display->display_options['fields']['field_dn_notable_indigenes_img']['label'] = '';
  $handler->display->display_options['fields']['field_dn_notable_indigenes_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dn_notable_indigenes_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_dn_notable_indigenes_img']['settings'] = array(
    'image_style' => 'dn_state_dyk_hist_350x250',
    'image_link' => '',
  );
  /* Field: Content: dn notable indigenes body */
  $handler->display->display_options['fields']['field_dn_notable_indigenes_body']['id'] = 'field_dn_notable_indigenes_body';
  $handler->display->display_options['fields']['field_dn_notable_indigenes_body']['table'] = 'field_data_field_dn_notable_indigenes_body';
  $handler->display->display_options['fields']['field_dn_notable_indigenes_body']['field'] = 'field_dn_notable_indigenes_body';
  $handler->display->display_options['fields']['field_dn_notable_indigenes_body']['label'] = '';
  $handler->display->display_options['fields']['field_dn_notable_indigenes_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'discover_nigeria' => 'discover_nigeria',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'dn history and people view';

  /* Display: dn introduction view */
  $handler = $view->new_display('block', 'dn introduction view', 'block_3');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_dn_introduction_body' => array(
      'element_type' => 'div',
      'class' => 'introduction',
    ),
    'field_dn_introduction_img' => array(
      'element_type' => 'div',
      'class' => 'introduction',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: dn introduction img */
  $handler->display->display_options['fields']['field_dn_introduction_img']['id'] = 'field_dn_introduction_img';
  $handler->display->display_options['fields']['field_dn_introduction_img']['table'] = 'field_data_field_dn_introduction_img';
  $handler->display->display_options['fields']['field_dn_introduction_img']['field'] = 'field_dn_introduction_img';
  $handler->display->display_options['fields']['field_dn_introduction_img']['label'] = '';
  $handler->display->display_options['fields']['field_dn_introduction_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dn_introduction_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_dn_introduction_img']['settings'] = array(
    'image_style' => 'gallery_image_830x450',
    'image_link' => '',
  );
  /* Field: Content: dn introduction body */
  $handler->display->display_options['fields']['field_dn_introduction_body']['id'] = 'field_dn_introduction_body';
  $handler->display->display_options['fields']['field_dn_introduction_body']['table'] = 'field_data_field_dn_introduction_body';
  $handler->display->display_options['fields']['field_dn_introduction_body']['field'] = 'field_dn_introduction_body';
  $handler->display->display_options['fields']['field_dn_introduction_body']['label'] = '';
  $handler->display->display_options['fields']['field_dn_introduction_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'discover_nigeria' => 'discover_nigeria',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'dn introduction view';
  $export['dn_state_quick_fact'] = $view;

  $view = new view();
  $view->name = 'general_sidebar_widget';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'General Sidebar Widget';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'General Sidebar Widget';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: donation widget */
  $handler = $view->new_display('block', 'donation widget', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: action button form */
  $handler->display->display_options['fields']['field_action_button_form']['id'] = 'field_action_button_form';
  $handler->display->display_options['fields']['field_action_button_form']['table'] = 'field_data_field_action_button_form';
  $handler->display->display_options['fields']['field_action_button_form']['field'] = 'field_action_button_form';
  $handler->display->display_options['fields']['field_action_button_form']['label'] = '';
  $handler->display->display_options['fields']['field_action_button_form']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_action_button_form']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_action_button_form']['settings'] = array(
    'image_style' => 'general_widget_280x50',
    'image_link' => 'content',
  );
  /* Field: Content: call-to-action-button-double */
  $handler->display->display_options['fields']['field_call_to_action_button_doub']['id'] = 'field_call_to_action_button_doub';
  $handler->display->display_options['fields']['field_call_to_action_button_doub']['table'] = 'field_data_field_call_to_action_button_doub';
  $handler->display->display_options['fields']['field_call_to_action_button_doub']['field'] = 'field_call_to_action_button_doub';
  $handler->display->display_options['fields']['field_call_to_action_button_doub']['label'] = '';
  $handler->display->display_options['fields']['field_call_to_action_button_doub']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_call_to_action_button_doub']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_call_to_action_button_doub']['settings'] = array(
    'image_style' => 'general_widget_280x50',
    'image_link' => 'content',
  );
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
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['value'] = 'Donate';
  $handler->display->display_options['filters']['title_1']['group'] = 1;
  $handler->display->display_options['block_description'] = 'donation widget';
  $export['general_sidebar_widget'] = $view;

  $view = new view();
  $view->name = 'get_involved_about';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'get-involved-about';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'main_site_content' => 'main_site_content',
  );

  /* Display: get-involved-about */
  $handler = $view->new_display('block', 'get-involved-about', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Quote */
  $handler->display->display_options['fields']['field_quote']['id'] = 'field_quote';
  $handler->display->display_options['fields']['field_quote']['table'] = 'field_data_field_quote';
  $handler->display->display_options['fields']['field_quote']['field'] = 'field_quote';
  $handler->display->display_options['fields']['field_quote']['label'] = '';
  $handler->display->display_options['fields']['field_quote']['element_label_colon'] = FALSE;
  /* Field: Content: action-button */
  $handler->display->display_options['fields']['field_action_button']['id'] = 'field_action_button';
  $handler->display->display_options['fields']['field_action_button']['table'] = 'field_data_field_action_button';
  $handler->display->display_options['fields']['field_action_button']['field'] = 'field_action_button';
  $handler->display->display_options['fields']['field_action_button']['label'] = '';
  $handler->display->display_options['fields']['field_action_button']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_action_button']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_action_button']['settings'] = array(
    'image_style' => 'call-to-action-single',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'main_site_content' => 'main_site_content',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'Friend of the Library';
  $handler->display->display_options['filters']['title']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'page' => 'page',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_2']['id'] = 'title_2';
  $handler->display->display_options['filters']['title_2']['table'] = 'node';
  $handler->display->display_options['filters']['title_2']['field'] = 'title';
  $handler->display->display_options['filters']['title_2']['value'] = 'Get Involved';
  $handler->display->display_options['filters']['title_2']['group'] = 2;
  $handler->display->display_options['block_description'] = 'get-involved-about';
  $export['get_involved_about'] = $view;

  $view = new view();
  $view->name = 'ict_and_resource_learning_access_centre';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'ict-and-resource-learning-access-centre';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'ict-and-resource-learning-access-centre';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'main_site_content' => 'main_site_content',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'ICT and Knowledge Resource Centres';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'project grid-9';
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
  /* Field: Content: landing-page-image */
  $handler->display->display_options['fields']['field_landing_page_image']['id'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['table'] = 'field_data_field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['field'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_landing_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_landing_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_landing_page_image']['settings'] = array(
    'image_style' => 'landing-page-image-style',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'main_site_content' => 'main_site_content',
  );
  /* Filter criterion: Content: main-content-category (field_main_content_category) */
  $handler->display->display_options['filters']['field_main_content_category_tid']['id'] = 'field_main_content_category_tid';
  $handler->display->display_options['filters']['field_main_content_category_tid']['table'] = 'field_data_field_main_content_category';
  $handler->display->display_options['filters']['field_main_content_category_tid']['field'] = 'field_main_content_category_tid';
  $handler->display->display_options['filters']['field_main_content_category_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_main_content_category_tid']['value'] = array(
    8 => '8',
  );
  $handler->display->display_options['filters']['field_main_content_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_main_content_category_tid']['vocabulary'] = 'main_site_tax';
  $export['ict_and_resource_learning_access_centre'] = $view;

  $view = new view();
  $view->name = 'jobs_and_intern_about_link';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'jobs and intern about link';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'jobs-and-intern-about-link';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: call-to-action-button */
  $handler->display->display_options['fields']['field_call_to_action_button']['id'] = 'field_call_to_action_button';
  $handler->display->display_options['fields']['field_call_to_action_button']['table'] = 'field_data_field_call_to_action_button';
  $handler->display->display_options['fields']['field_call_to_action_button']['field'] = 'field_call_to_action_button';
  $handler->display->display_options['fields']['field_call_to_action_button']['label'] = '';
  $handler->display->display_options['fields']['field_call_to_action_button']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_call_to_action_button']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_call_to_action_button']['settings'] = array(
    'image_style' => 'call-to-action-single',
    'image_link' => 'content',
  );
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
  $handler->display->display_options['filters']['title']['value'] = 'Jobs and Internships';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['block_description'] = 'jobs-and-intern-about-link';
  $export['jobs_and_intern_about_link'] = $view;

  $view = new view();
  $view->name = 'libraries_view_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'libraries-view-block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'libraries-view-block';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'main_site_content' => 'main_site_content',
  );

  /* Display: libraries-view-block */
  $handler = $view->new_display('block', 'libraries-view-block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Libraries';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'project grid-9';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_landing_page_image' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: landing-page-image */
  $handler->display->display_options['fields']['field_landing_page_image']['id'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['table'] = 'field_data_field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['field'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_landing_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_landing_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_landing_page_image']['settings'] = array(
    'image_style' => 'landing-page-image-style',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'main_site_content' => 'main_site_content',
  );
  /* Filter criterion: Content: main-content-category (field_main_content_category) */
  $handler->display->display_options['filters']['field_main_content_category_tid']['id'] = 'field_main_content_category_tid';
  $handler->display->display_options['filters']['field_main_content_category_tid']['table'] = 'field_data_field_main_content_category';
  $handler->display->display_options['filters']['field_main_content_category_tid']['field'] = 'field_main_content_category_tid';
  $handler->display->display_options['filters']['field_main_content_category_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_main_content_category_tid']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_main_content_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_main_content_category_tid']['vocabulary'] = 'main_site_tax';
  $handler->display->display_options['block_description'] = 'Libraries';

  /* Display: school-view-block */
  $handler = $view->new_display('block', 'school-view-block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Schools';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'project grid-9';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_landing_page_image' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: landing-page-image */
  $handler->display->display_options['fields']['field_landing_page_image']['id'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['table'] = 'field_data_field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['field'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_landing_page_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_landing_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_landing_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_landing_page_image']['settings'] = array(
    'image_style' => 'landing-page-image-style',
    'image_link' => 'content',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'landing-page-image-style',
    'image_link' => 'content',
  );
  /* Field: Content: Quote */
  $handler->display->display_options['fields']['field_quote']['id'] = 'field_quote';
  $handler->display->display_options['fields']['field_quote']['table'] = 'field_data_field_quote';
  $handler->display->display_options['fields']['field_quote']['field'] = 'field_quote';
  $handler->display->display_options['fields']['field_quote']['label'] = '';
  $handler->display->display_options['fields']['field_quote']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Content: General Category (field_general_category) */
  $handler->display->display_options['filters']['field_general_category_tid']['id'] = 'field_general_category_tid';
  $handler->display->display_options['filters']['field_general_category_tid']['table'] = 'field_data_field_general_category';
  $handler->display->display_options['filters']['field_general_category_tid']['field'] = 'field_general_category_tid';
  $handler->display->display_options['filters']['field_general_category_tid']['value'] = array(
    1491 => '1491',
  );
  $handler->display->display_options['filters']['field_general_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_general_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_general_category_tid']['vocabulary'] = 'general_category';
  $handler->display->display_options['block_description'] = 'school-view-block';

  /* Display: students-view-block */
  $handler = $view->new_display('block', 'students-view-block', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Students';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'project grid-9';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_landing_page_image' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: landing-page-image */
  $handler->display->display_options['fields']['field_landing_page_image']['id'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['table'] = 'field_data_field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['field'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_landing_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_landing_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_landing_page_image']['settings'] = array(
    'image_style' => 'landing-page-image-style',
    'image_link' => 'content',
  );
  /* Field: Content: Quote */
  $handler->display->display_options['fields']['field_quote']['id'] = 'field_quote';
  $handler->display->display_options['fields']['field_quote']['table'] = 'field_data_field_quote';
  $handler->display->display_options['fields']['field_quote']['field'] = 'field_quote';
  $handler->display->display_options['fields']['field_quote']['label'] = '';
  $handler->display->display_options['fields']['field_quote']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Main General Category (field_main_general_category) */
  $handler->display->display_options['filters']['field_main_general_category_tid']['id'] = 'field_main_general_category_tid';
  $handler->display->display_options['filters']['field_main_general_category_tid']['table'] = 'field_data_field_main_general_category';
  $handler->display->display_options['filters']['field_main_general_category_tid']['field'] = 'field_main_general_category_tid';
  $handler->display->display_options['filters']['field_main_general_category_tid']['value'] = array(
    1492 => '1492',
  );
  $handler->display->display_options['filters']['field_main_general_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_main_general_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_main_general_category_tid']['vocabulary'] = 'general_category';
  $handler->display->display_options['block_description'] = 'students-view-block';

  /* Display: professional-view-block */
  $handler = $view->new_display('block', 'professional-view-block', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Professional and Job Seekers';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'project grid-9';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_landing_page_image' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: landing-page-image */
  $handler->display->display_options['fields']['field_landing_page_image']['id'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['table'] = 'field_data_field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['field'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_landing_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_landing_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_landing_page_image']['settings'] = array(
    'image_style' => 'landing-page-image-style',
    'image_link' => 'content',
  );
  /* Field: Content: Quote */
  $handler->display->display_options['fields']['field_quote']['id'] = 'field_quote';
  $handler->display->display_options['fields']['field_quote']['table'] = 'field_data_field_quote';
  $handler->display->display_options['fields']['field_quote']['field'] = 'field_quote';
  $handler->display->display_options['fields']['field_quote']['label'] = '';
  $handler->display->display_options['fields']['field_quote']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Main General Category (field_main_general_category) */
  $handler->display->display_options['filters']['field_main_general_category_tid']['id'] = 'field_main_general_category_tid';
  $handler->display->display_options['filters']['field_main_general_category_tid']['table'] = 'field_data_field_main_general_category';
  $handler->display->display_options['filters']['field_main_general_category_tid']['field'] = 'field_main_general_category_tid';
  $handler->display->display_options['filters']['field_main_general_category_tid']['value'] = array(
    1493 => '1493',
  );
  $handler->display->display_options['filters']['field_main_general_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_main_general_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_main_general_category_tid']['vocabulary'] = 'general_category';
  $handler->display->display_options['block_description'] = 'professional-view-block';
  $export['libraries_view_block'] = $view;

  $view = new view();
  $view->name = 'lifeeeeeeeeeeeeeee';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'view: Book for kids';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'lifeeeeeeeeeeeeeee';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );

  /* Display: books for kids */
  $handler = $view->new_display('block', 'books for kids', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'kids-book grid-9';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_image' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'body' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: kids extlink */
  $handler->display->display_options['fields']['field_kids_extlink']['id'] = 'field_kids_extlink';
  $handler->display->display_options['fields']['field_kids_extlink']['table'] = 'field_data_field_kids_extlink';
  $handler->display->display_options['fields']['field_kids_extlink']['field'] = 'field_kids_extlink';
  $handler->display->display_options['fields']['field_kids_extlink']['label'] = '';
  $handler->display->display_options['fields']['field_kids_extlink']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kids_extlink']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kids_extlink']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_kids_extlink']['type'] = 'link_url';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_kids_extlink]';
  $handler->display->display_options['fields']['field_image']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'landing-page-image-style',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'for_kids_main' => 'for_kids_main',
  );
  /* Filter criterion: Content: kids menu ref (field_children_menu_ref) */
  $handler->display->display_options['filters']['field_children_menu_ref_tid']['id'] = 'field_children_menu_ref_tid';
  $handler->display->display_options['filters']['field_children_menu_ref_tid']['table'] = 'field_data_field_children_menu_ref';
  $handler->display->display_options['filters']['field_children_menu_ref_tid']['field'] = 'field_children_menu_ref_tid';
  $handler->display->display_options['filters']['field_children_menu_ref_tid']['value'] = array(
    0 => '1353',
  );
  $handler->display->display_options['filters']['field_children_menu_ref_tid']['vocabulary'] = 'main_site_tax';
  $handler->display->display_options['block_description'] = 'books for kids';

  /* Display: ebooks for kids */
  $handler = $view->new_display('block', 'ebooks for kids', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'kids-book grid-9';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_image' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'body' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: kids extlink */
  $handler->display->display_options['fields']['field_kids_extlink']['id'] = 'field_kids_extlink';
  $handler->display->display_options['fields']['field_kids_extlink']['table'] = 'field_data_field_kids_extlink';
  $handler->display->display_options['fields']['field_kids_extlink']['field'] = 'field_kids_extlink';
  $handler->display->display_options['fields']['field_kids_extlink']['label'] = '';
  $handler->display->display_options['fields']['field_kids_extlink']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kids_extlink']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kids_extlink']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_kids_extlink']['type'] = 'link_url';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_kids_extlink]';
  $handler->display->display_options['fields']['field_image']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'landing-page-image-style',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'for_kids_main' => 'for_kids_main',
  );
  /* Filter criterion: Content: kids menu ref (field_children_menu_ref) */
  $handler->display->display_options['filters']['field_children_menu_ref_tid']['id'] = 'field_children_menu_ref_tid';
  $handler->display->display_options['filters']['field_children_menu_ref_tid']['table'] = 'field_data_field_children_menu_ref';
  $handler->display->display_options['filters']['field_children_menu_ref_tid']['field'] = 'field_children_menu_ref_tid';
  $handler->display->display_options['filters']['field_children_menu_ref_tid']['value'] = array(
    0 => '1354',
  );
  $handler->display->display_options['filters']['field_children_menu_ref_tid']['vocabulary'] = 'main_site_tax';
  $handler->display->display_options['block_description'] = 'ebooks for kids';

  /* Display: kids websites */
  $handler = $view->new_display('block', 'kids websites', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'kids-book grid-9';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_image' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'body' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: landing-page-image */
  $handler->display->display_options['fields']['field_landing_page_image']['id'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['table'] = 'field_data_field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['field'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_landing_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_landing_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_landing_page_image']['settings'] = array(
    'image_style' => 'landing-page-image-style',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'book' => 'book',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: menu-reference (field_menu_reference) */
  $handler->display->display_options['filters']['field_menu_reference_tid']['id'] = 'field_menu_reference_tid';
  $handler->display->display_options['filters']['field_menu_reference_tid']['table'] = 'field_data_field_menu_reference';
  $handler->display->display_options['filters']['field_menu_reference_tid']['field'] = 'field_menu_reference_tid';
  $handler->display->display_options['filters']['field_menu_reference_tid']['value'] = array(
    0 => '1352',
  );
  $handler->display->display_options['filters']['field_menu_reference_tid']['vocabulary'] = 'main_site_tax';
  $handler->display->display_options['block_description'] = 'kids websites';

  /* Display: textbooks and more */
  $handler = $view->new_display('block', 'textbooks and more', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'kids-book grid-9';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_image' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'body' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: kids extlink */
  $handler->display->display_options['fields']['field_kids_extlink']['id'] = 'field_kids_extlink';
  $handler->display->display_options['fields']['field_kids_extlink']['table'] = 'field_data_field_kids_extlink';
  $handler->display->display_options['fields']['field_kids_extlink']['field'] = 'field_kids_extlink';
  $handler->display->display_options['fields']['field_kids_extlink']['label'] = '';
  $handler->display->display_options['fields']['field_kids_extlink']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kids_extlink']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kids_extlink']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_kids_extlink']['type'] = 'link_url';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_kids_extlink]';
  $handler->display->display_options['fields']['field_image']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'landing-page-image-style',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'for_kids_main' => 'for_kids_main',
  );
  /* Filter criterion: Content: kids menu ref (field_children_menu_ref) */
  $handler->display->display_options['filters']['field_children_menu_ref_tid']['id'] = 'field_children_menu_ref_tid';
  $handler->display->display_options['filters']['field_children_menu_ref_tid']['table'] = 'field_data_field_children_menu_ref';
  $handler->display->display_options['filters']['field_children_menu_ref_tid']['field'] = 'field_children_menu_ref_tid';
  $handler->display->display_options['filters']['field_children_menu_ref_tid']['value'] = array(
    0 => '1400',
  );
  $handler->display->display_options['filters']['field_children_menu_ref_tid']['vocabulary'] = 'main_site_tax';
  $handler->display->display_options['block_description'] = 'textbooks and more';

  /* Display: ZODML Resources */
  $handler = $view->new_display('block', 'ZODML Resources', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'kids-book grid-9';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_image' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'body' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: kids extlink */
  $handler->display->display_options['fields']['field_kids_extlink']['id'] = 'field_kids_extlink';
  $handler->display->display_options['fields']['field_kids_extlink']['table'] = 'field_data_field_kids_extlink';
  $handler->display->display_options['fields']['field_kids_extlink']['field'] = 'field_kids_extlink';
  $handler->display->display_options['fields']['field_kids_extlink']['label'] = '';
  $handler->display->display_options['fields']['field_kids_extlink']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_kids_extlink']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_kids_extlink']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_kids_extlink']['type'] = 'link_url';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_kids_extlink]';
  $handler->display->display_options['fields']['field_image']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'landing-page-image-style',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'for_kids_main' => 'for_kids_main',
  );
  /* Filter criterion: Content: kids menu ref (field_children_menu_ref) */
  $handler->display->display_options['filters']['field_children_menu_ref_tid']['id'] = 'field_children_menu_ref_tid';
  $handler->display->display_options['filters']['field_children_menu_ref_tid']['table'] = 'field_data_field_children_menu_ref';
  $handler->display->display_options['filters']['field_children_menu_ref_tid']['field'] = 'field_children_menu_ref_tid';
  $handler->display->display_options['filters']['field_children_menu_ref_tid']['value'] = array(
    0 => '1403',
  );
  $handler->display->display_options['filters']['field_children_menu_ref_tid']['vocabulary'] = 'main_site_tax';
  $handler->display->display_options['block_description'] = 'ZODML Resources';

  /* Display: cool sites */
  $handler = $view->new_display('block', 'cool sites', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'kids-book grid-9';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_image' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'body' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: landing-page-image */
  $handler->display->display_options['fields']['field_landing_page_image']['id'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['table'] = 'field_data_field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['field'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_landing_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_landing_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_landing_page_image']['settings'] = array(
    'image_style' => 'landing-page-image-style',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'book' => 'book',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: menu-reference (field_menu_reference) */
  $handler->display->display_options['filters']['field_menu_reference_tid']['id'] = 'field_menu_reference_tid';
  $handler->display->display_options['filters']['field_menu_reference_tid']['table'] = 'field_data_field_menu_reference';
  $handler->display->display_options['filters']['field_menu_reference_tid']['field'] = 'field_menu_reference_tid';
  $handler->display->display_options['filters']['field_menu_reference_tid']['value'] = array(
    0 => '1402',
  );
  $handler->display->display_options['filters']['field_menu_reference_tid']['vocabulary'] = 'main_site_tax';
  $handler->display->display_options['block_description'] = 'cool sites';

  /* Display: view: for parent */
  $handler = $view->new_display('block', 'view: for parent', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'kids-book grid-9';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_image' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'body' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: landing-page-image */
  $handler->display->display_options['fields']['field_landing_page_image']['id'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['table'] = 'field_data_field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['field'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_landing_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_landing_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_landing_page_image']['settings'] = array(
    'image_style' => 'landing-page-image-style',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'book' => 'book',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: menu-reference (field_menu_reference) */
  $handler->display->display_options['filters']['field_menu_reference_tid']['id'] = 'field_menu_reference_tid';
  $handler->display->display_options['filters']['field_menu_reference_tid']['table'] = 'field_data_field_menu_reference';
  $handler->display->display_options['filters']['field_menu_reference_tid']['field'] = 'field_menu_reference_tid';
  $handler->display->display_options['filters']['field_menu_reference_tid']['value'] = array(
    0 => '26',
  );
  $handler->display->display_options['filters']['field_menu_reference_tid']['vocabulary'] = 'main_site_tax';
  $handler->display->display_options['block_description'] = 'view: for parent';
  $export['lifeeeeeeeeeeeeeee'] = $view;

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
  $export['main_home_side_view'] = $view;

  $view = new view();
  $view->name = 'main_home_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'main-home-view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'main-home-view';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['row_plugin'] = 'node';
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'main_site_content' => 'main_site_content',
  );

  /* Display: main-home-view */
  $handler = $view->new_display('page', 'main-home-view', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'The Premier Free Online Library in Nigeria';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '';
  $handler->display->display_options['pager']['options']['tags']['first'] = '';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '';
  $handler->display->display_options['pager']['options']['tags']['next'] = '';
  $handler->display->display_options['pager']['options']['tags']['last'] = '';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
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
  /* Field: Content: front-image */
  $handler->display->display_options['fields']['field_front_image']['id'] = 'field_front_image';
  $handler->display->display_options['fields']['field_front_image']['table'] = 'field_data_field_front_image';
  $handler->display->display_options['fields']['field_front_image']['field'] = 'field_front_image';
  $handler->display->display_options['fields']['field_front_image']['label'] = '';
  $handler->display->display_options['fields']['field_front_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_front_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_front_image']['settings'] = array(
    'image_style' => 'front-image-style',
    'image_link' => 'content',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: cross label */
  $handler->display->display_options['fields']['field_cross_label']['id'] = 'field_cross_label';
  $handler->display->display_options['fields']['field_cross_label']['table'] = 'field_data_field_cross_label';
  $handler->display->display_options['fields']['field_cross_label']['field'] = 'field_cross_label';
  $handler->display->display_options['fields']['field_cross_label']['label'] = '';
  $handler->display->display_options['fields']['field_cross_label']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_cross_label']['alter']['text'] = '<div id="trans-main-front-cross-label"></div>
<div id="title-main-front-cross-label">[field_cross_label]</div>';
  $handler->display->display_options['fields']['field_cross_label']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_cross_label']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_cross_label']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_cross_label']['element_label_colon'] = FALSE;
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
    1 => '1',
  );
  $handler->display->display_options['filters']['field_menu_reference_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_menu_reference_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_menu_reference_tid']['vocabulary'] = 'main_site_tax';
  /* Filter criterion: Content: front-image (field_front_image:fid) */
  $handler->display->display_options['filters']['field_front_image_fid']['id'] = 'field_front_image_fid';
  $handler->display->display_options['filters']['field_front_image_fid']['table'] = 'field_data_field_front_image';
  $handler->display->display_options['filters']['field_front_image_fid']['field'] = 'field_front_image_fid';
  $handler->display->display_options['filters']['field_front_image_fid']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'main-home-page';
  $export['main_home_view'] = $view;

  $view = new view();
  $view->name = 'main_site_footer_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'main-site-footer-view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'main-site-footer-view';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'main_site_content' => 'main_site_content',
  );

  /* Display: main site footer view */
  $handler = $view->new_display('block', 'main site footer view', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'main-site-footer grid-24';
  $handler->display->display_options['style_options']['row']['first_class'] = '';
  $handler->display->display_options['style_options']['row']['last_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'body' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'main_site_content' => 'main_site_content',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'main-site-footer';
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $export['main_site_footer_view'] = $view;

  $view = new view();
  $view->name = 'main_site_sidebar';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'main-site-sidebar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'main-site-sidebar';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'main_site_content' => 'main_site_content',
  );

  /* Display: main-site-sidebar-inner */
  $handler = $view->new_display('block', 'main-site-sidebar-inner', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_sidebar_display_tid']['id'] = 'field_sidebar_display_tid';
  $handler->display->display_options['filters']['field_sidebar_display_tid']['table'] = 'field_data_field_sidebar_display';
  $handler->display->display_options['filters']['field_sidebar_display_tid']['field'] = 'field_sidebar_display_tid';
  $handler->display->display_options['filters']['field_sidebar_display_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_sidebar_display_tid']['value'] = array(
    0 => '59',
  );
  $handler->display->display_options['filters']['field_sidebar_display_tid']['group'] = 1;
  $export['main_site_sidebar'] = $view;

  $view = new view();
  $view->name = 'newsrooms_about_us_link';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'newsrooms-about-us-link';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'newsrooms-about-us-link';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: call-to-action-button */
  $handler->display->display_options['fields']['field_call_to_action_button']['id'] = 'field_call_to_action_button';
  $handler->display->display_options['fields']['field_call_to_action_button']['table'] = 'field_data_field_call_to_action_button';
  $handler->display->display_options['fields']['field_call_to_action_button']['field'] = 'field_call_to_action_button';
  $handler->display->display_options['fields']['field_call_to_action_button']['label'] = '';
  $handler->display->display_options['fields']['field_call_to_action_button']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_call_to_action_button']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_call_to_action_button']['settings'] = array(
    'image_style' => 'call-to-action-single',
    'image_link' => 'content',
  );
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
  $handler->display->display_options['filters']['title']['value'] = 'ZODML Newsroom';
  $handler->display->display_options['block_description'] = 'newsrooms-about-us-link';
  $export['newsrooms_about_us_link'] = $view;

  $view = new view();
  $view->name = 'our_story_about_us_link';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'our-story-about-us-link';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'our-story-about-us-link';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'main_site_content' => 'main_site_content',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'our-story-about-us-link';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: call-to-action-button */
  $handler->display->display_options['fields']['field_call_to_action_button']['id'] = 'field_call_to_action_button';
  $handler->display->display_options['fields']['field_call_to_action_button']['table'] = 'field_data_field_call_to_action_button';
  $handler->display->display_options['fields']['field_call_to_action_button']['field'] = 'field_call_to_action_button';
  $handler->display->display_options['fields']['field_call_to_action_button']['label'] = '';
  $handler->display->display_options['fields']['field_call_to_action_button']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_call_to_action_button']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_call_to_action_button']['settings'] = array(
    'image_style' => 'call-to-action-single',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'main_site_content' => 'main_site_content',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'our story';
  $handler->display->display_options['block_description'] = 'our-story-about-us-link';
  $export['our_story_about_us_link'] = $view;

  $view = new view();
  $view->name = 'our_story_action_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'our-story-action-view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'our-story-action-view';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'main_site_content' => 'main_site_content',
  );

  /* Display: our-story-action-view */
  $handler = $view->new_display('block', 'our-story-action-view', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'story-action';
  $handler->display->display_options['style_options']['row']['first_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: call-to-action-button */
  $handler->display->display_options['fields']['field_call_to_action_button']['id'] = 'field_call_to_action_button';
  $handler->display->display_options['fields']['field_call_to_action_button']['table'] = 'field_data_field_call_to_action_button';
  $handler->display->display_options['fields']['field_call_to_action_button']['field'] = 'field_call_to_action_button';
  $handler->display->display_options['fields']['field_call_to_action_button']['label'] = '';
  $handler->display->display_options['fields']['field_call_to_action_button']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_call_to_action_button']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_call_to_action_button']['settings'] = array(
    'image_style' => 'call-to-action-single',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'main_site_content' => 'main_site_content',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'our-story';
  $handler->display->display_options['block_description'] = 'our-story-action-view';
  $export['our_story_action_view'] = $view;

  $view = new view();
  $view->name = 'our_story_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'our-story-view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: dn main content image */
  $handler->display->display_options['fields']['field_main_content_image']['id'] = 'field_main_content_image';
  $handler->display->display_options['fields']['field_main_content_image']['table'] = 'field_data_field_main_content_image';
  $handler->display->display_options['fields']['field_main_content_image']['field'] = 'field_main_content_image';
  $handler->display->display_options['fields']['field_main_content_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_content_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_content_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_main_content_image']['settings'] = array(
    'image_style' => 'inner-page-image-style',
    'image_link' => '',
  );
  /* Field: Content: Quote */
  $handler->display->display_options['fields']['field_quote']['id'] = 'field_quote';
  $handler->display->display_options['fields']['field_quote']['table'] = 'field_data_field_quote';
  $handler->display->display_options['fields']['field_quote']['field'] = 'field_quote';
  $handler->display->display_options['fields']['field_quote']['label'] = '';
  $handler->display->display_options['fields']['field_quote']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_quote']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_quote']['element_wrapper_class'] = 'quote';
  $handler->display->display_options['fields']['field_quote']['element_default_classes'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_button']['id'] = 'field_button';
  $handler->display->display_options['fields']['field_button']['table'] = 'field_data_field_button';
  $handler->display->display_options['fields']['field_button']['field'] = 'field_button';
  $handler->display->display_options['fields']['field_button']['label'] = '';
  $handler->display->display_options['fields']['field_button']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'main_site_content' => 'main_site_content',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'our-story';

  /* Display: our-story-view */
  $handler = $view->new_display('block', 'our-story-view', 'block');
  $export['our_story_view'] = $view;

  $view = new view();
  $view->name = 'our_team_about';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Our Team About';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Our Team About';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'main_site_content' => 'main_site_content',
  );

  /* Display: Our Team About Link */
  $handler = $view->new_display('block', 'Our Team About Link', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'our-team-about';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: call-to-action-button */
  $handler->display->display_options['fields']['field_call_to_action_button']['id'] = 'field_call_to_action_button';
  $handler->display->display_options['fields']['field_call_to_action_button']['table'] = 'field_data_field_call_to_action_button';
  $handler->display->display_options['fields']['field_call_to_action_button']['field'] = 'field_call_to_action_button';
  $handler->display->display_options['fields']['field_call_to_action_button']['label'] = '';
  $handler->display->display_options['fields']['field_call_to_action_button']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_call_to_action_button']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_call_to_action_button']['settings'] = array(
    'image_style' => 'call-to-action-single',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'main_site_content' => 'main_site_content',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'our team';
  $handler->display->display_options['filters']['title']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['value'] = 'Board of Trustees';
  $handler->display->display_options['filters']['title_1']['group'] = 2;
  $handler->display->display_options['block_description'] = 'Our Team About Link';
  $export['our_team_about'] = $view;

  $view = new view();
  $view->name = 'project_about';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'project-about';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'project-about';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
  );

  /* Display: project-about */
  $handler = $view->new_display('block', 'project-about', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'our-project';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: action-button */
  $handler->display->display_options['fields']['field_action_button']['id'] = 'field_action_button';
  $handler->display->display_options['fields']['field_action_button']['table'] = 'field_data_field_action_button';
  $handler->display->display_options['fields']['field_action_button']['field'] = 'field_action_button';
  $handler->display->display_options['fields']['field_action_button']['label'] = '';
  $handler->display->display_options['fields']['field_action_button']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_action_button']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_action_button']['settings'] = array(
    'image_style' => 'call-to-action-single',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'Projects';
  $handler->display->display_options['block_description'] = 'project-about';
  $export['project_about'] = $view;

  $view = new view();
  $view->name = 'project_landing_page_ads';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'project-landing-page-ads';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: project-landing-page-ads */
  $handler = $view->new_display('block', 'project-landing-page-ads', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Impact';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'project grid-9';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_general_image' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: general-image */
  $handler->display->display_options['fields']['field_general_image']['id'] = 'field_general_image';
  $handler->display->display_options['fields']['field_general_image']['table'] = 'field_data_field_general_image';
  $handler->display->display_options['fields']['field_general_image']['field'] = 'field_general_image';
  $handler->display->display_options['fields']['field_general_image']['label'] = '';
  $handler->display->display_options['fields']['field_general_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_general_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_general_image']['settings'] = array(
    'image_style' => 'landing-page-image-style',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['operator'] = 'and';
  $handler->display->display_options['filters']['tid']['value'] = array(
    63 => '63',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'picture_collections';
  $export['project_landing_page_ads'] = $view;

  $view = new view();
  $view->name = 'reading_programme_and_excursions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Reading Programme and Excursions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Reading Programme and Excursions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'main_site_content' => 'main_site_content',
  );

  /* Display: view-reading-programme-and-excursions-block */
  $handler = $view->new_display('block', 'view-reading-programme-and-excursions-block', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'reading-programme grid-9';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_landing_page_image' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: landing-page-image */
  $handler->display->display_options['fields']['field_landing_page_image']['id'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['table'] = 'field_data_field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['field'] = 'field_landing_page_image';
  $handler->display->display_options['fields']['field_landing_page_image']['label'] = '';
  $handler->display->display_options['fields']['field_landing_page_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_landing_page_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_landing_page_image']['settings'] = array(
    'image_style' => 'landing-page-image-style',
    'image_link' => 'content',
  );
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
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'main_site_content' => 'main_site_content',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: main-content-category (field_main_content_category) */
  $handler->display->display_options['filters']['field_main_content_category_tid']['id'] = 'field_main_content_category_tid';
  $handler->display->display_options['filters']['field_main_content_category_tid']['table'] = 'field_data_field_main_content_category';
  $handler->display->display_options['filters']['field_main_content_category_tid']['field'] = 'field_main_content_category_tid';
  $handler->display->display_options['filters']['field_main_content_category_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_main_content_category_tid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['filters']['field_main_content_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_main_content_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_main_content_category_tid']['vocabulary'] = 'main_site_tax';
  $handler->display->display_options['block_description'] = 'Reading Programme and Excursions';
  $export['reading_programme_and_excursions'] = $view;

  $view = new view();
  $view->name = 'recognition_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'recognition-view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'recognition-view';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'general_image_uploading' => 'general_image_uploading',
  );

  /* Display: recognition-view */
  $handler = $view->new_display('block', 'recognition-view', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'recognition grid-9';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: general-image */
  $handler->display->display_options['fields']['field_general_image']['id'] = 'field_general_image';
  $handler->display->display_options['fields']['field_general_image']['table'] = 'field_data_field_general_image';
  $handler->display->display_options['fields']['field_general_image']['field'] = 'field_general_image';
  $handler->display->display_options['fields']['field_general_image']['label'] = '';
  $handler->display->display_options['fields']['field_general_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_general_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_general_image']['settings'] = array(
    'image_style' => 'our-team-about-350x261',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'general_image_uploading' => 'general_image_uploading',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['operator'] = 'and';
  $handler->display->display_options['filters']['tid']['value'] = array(
    65 => '65',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'picture_collections';
  $handler->display->display_options['block_description'] = 'recognition-view';
  $export['recognition_view'] = $view;

  $view = new view();
  $view->name = 'tourism_and_culture';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Tourism and Culture';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Tourism and Culture';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'general_image_uploading' => 'general_image_uploading',
  );

  /* Display: Tourism and Culture Q */
  $handler = $view->new_display('block', 'Tourism and Culture Q', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'mmmm grid-6';
  $handler->display->display_options['style_options']['row']['first_class'] = 'alpha';
  $handler->display->display_options['style_options']['row']['last_class'] = 'omega';
  $handler->display->display_options['style_options']['row']['last_every_nth'] = '3';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: general-image */
  $handler->display->display_options['fields']['field_general_image']['id'] = 'field_general_image';
  $handler->display->display_options['fields']['field_general_image']['table'] = 'field_data_field_general_image';
  $handler->display->display_options['fields']['field_general_image']['field'] = 'field_general_image';
  $handler->display->display_options['fields']['field_general_image']['label'] = '';
  $handler->display->display_options['fields']['field_general_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_general_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_general_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_general_image']['settings'] = array(
    'colorbox_node_style' => 'photograher-profile-250x250',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: dn id ref (field_dn_id_ref) */
  $handler->display->display_options['arguments']['field_dn_id_ref_nid']['id'] = 'field_dn_id_ref_nid';
  $handler->display->display_options['arguments']['field_dn_id_ref_nid']['table'] = 'field_data_field_dn_id_ref';
  $handler->display->display_options['arguments']['field_dn_id_ref_nid']['field'] = 'field_dn_id_ref_nid';
  $handler->display->display_options['arguments']['field_dn_id_ref_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_dn_id_ref_nid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['field_dn_id_ref_nid']['default_argument_options']['user'] = TRUE;
  $handler->display->display_options['arguments']['field_dn_id_ref_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_dn_id_ref_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_dn_id_ref_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['block_description'] = 'Tourism and Culture Q';
  $export['tourism_and_culture'] = $view;

  $view = new view();
  $view->name = 'view_login_system';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'view login system';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'view login system';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );

  /* Display: view dn before login system */
  $handler = $view->new_display('block', 'view dn before login system', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    1 => '1',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'dn before login system';
  $handler->display->display_options['block_description'] = 'view dn before login system';

  /* Display: view before main login */
  $handler = $view->new_display('block', 'view before main login', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    1 => '1',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'before main login';
  $handler->display->display_options['block_description'] = 'view before main login';

  /* Display: view after main login */
  $handler = $view->new_display('block', 'view after main login', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'after main login';
  $handler->display->display_options['block_description'] = 'view after main login';

  /* Display: view dn after login system */
  $handler = $view->new_display('block', 'view dn after login system', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'dn after login system';
  $handler->display->display_options['block_description'] = 'view dn after login system';

  /* Display: view kids before login system */
  $handler = $view->new_display('block', 'view kids before login system', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    1 => '1',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'kids before login system';
  $handler->display->display_options['block_description'] = 'view kids before login system';

  /* Display: view kids after login system */
  $handler = $view->new_display('block', 'view kids after login system', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'kids after login system';
  $handler->display->display_options['block_description'] = 'view kids after login system';

  /* Display: view secondary before login system */
  $handler = $view->new_display('block', 'view secondary before login system', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    1 => '1',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'secondary before login system';
  $handler->display->display_options['block_description'] = 'view secondary before login system';

  /* Display: view secondary after login system */
  $handler = $view->new_display('block', 'view secondary after login system', 'block_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'secondary after login system';
  $handler->display->display_options['block_description'] = 'view secondary after login system';
  $export['view_login_system'] = $view;

  $view = new view();
  $view->name = 'view_sticker_testing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'view-sticker-testing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'view-sticker-testing';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'views_ticker';
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: view-sticker-testing */
  $handler = $view->new_display('block', 'view-sticker-testing', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_ticker';
  $handler->display->display_options['style_options']['scroller_type'] = 'bbc';
  $handler->display->display_options['style_options']['vTicker_Options'] = array(
    'vTicker_mouseover' => 0,
    'vTicker_speed' => '500',
    'vTicker_pause' => '1000',
    'vTicker_items' => '5',
    'vTicker_direction' => 'up',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'view-sticker-testing';
  $export['view_sticker_testing'] = $view;

  $view = new view();
  $view->name = 'welcom_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'welcom-view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'welcom-view';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: welcom-view */
  $handler = $view->new_display('block', 'welcom-view', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '';
  $handler->display->display_options['pager']['options']['tags']['next'] = '';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
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
  /* Field: Content: Welcome-display */
  $handler->display->display_options['fields']['field_welcome_display']['id'] = 'field_welcome_display';
  $handler->display->display_options['fields']['field_welcome_display']['table'] = 'field_data_field_welcome_display';
  $handler->display->display_options['fields']['field_welcome_display']['field'] = 'field_welcome_display';
  $handler->display->display_options['fields']['field_welcome_display']['label'] = '';
  $handler->display->display_options['fields']['field_welcome_display']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_welcome_display']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_welcome_display']['settings'] = array(
    'image_style' => 'vision-mission_580x175',
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
  $handler->display->display_options['filters']['title']['value'] = 'our story';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $export['welcom_view'] = $view;

  $view = new view();
  $view->name = 'why_libraries';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Why Libraries';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Why Libraries';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'main_site_content' => 'main_site_content',
  );

  /* Display: zod-about-link */
  $handler = $view->new_display('block', 'zod-about-link', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'why-libraries';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: call-to-action-button */
  $handler->display->display_options['fields']['field_call_to_action_button']['id'] = 'field_call_to_action_button';
  $handler->display->display_options['fields']['field_call_to_action_button']['table'] = 'field_data_field_call_to_action_button';
  $handler->display->display_options['fields']['field_call_to_action_button']['field'] = 'field_call_to_action_button';
  $handler->display->display_options['fields']['field_call_to_action_button']['label'] = '';
  $handler->display->display_options['fields']['field_call_to_action_button']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_call_to_action_button']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_call_to_action_button']['settings'] = array(
    'image_style' => 'aboutus-double-200x80',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'main_site_content' => 'main_site_content',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['value'] = 'Zaccheus Onumba Dibiaezue';
  $handler->display->display_options['block_description'] = 'zod-about-link';
  $export['why_libraries'] = $view;

  $view = new view();
  $view->name = 'zod_about_us_link';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'ZOD-about-us-link';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'ZOD-about-us-link';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: call-to-action-button */
  $handler->display->display_options['fields']['field_call_to_action_button']['id'] = 'field_call_to_action_button';
  $handler->display->display_options['fields']['field_call_to_action_button']['table'] = 'field_data_field_call_to_action_button';
  $handler->display->display_options['fields']['field_call_to_action_button']['field'] = 'field_call_to_action_button';
  $handler->display->display_options['fields']['field_call_to_action_button']['label'] = '';
  $handler->display->display_options['fields']['field_call_to_action_button']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_call_to_action_button']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_call_to_action_button']['settings'] = array(
    'image_style' => 'aboutus-double-200x80',
    'image_link' => '',
  );
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
  $handler->display->display_options['filters']['title']['value'] = 'Zaccheus Onumba Dibiaezue';
  $handler->display->display_options['block_description'] = 'ZOD-about-us-link';
  $export['zod_about_us_link'] = $view;

  $view = new view();
  $view->name = 'zod_story_slide';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'zod-story-slide';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'zod-story-slide';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'slideshow';
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'general_image_uploading' => 'general_image_uploading',
  );

  /* Display: zod-story-slide */
  $handler = $view->new_display('block', 'zod-story-slide', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'juicebox';
  $handler->display->display_options['style_options']['image_field'] = 'field_general_image';
  $handler->display->display_options['style_options']['thumb_field'] = 'field_general_image';
  $handler->display->display_options['style_options']['caption_field'] = 'title';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: general-image */
  $handler->display->display_options['fields']['field_general_image']['id'] = 'field_general_image';
  $handler->display->display_options['fields']['field_general_image']['table'] = 'field_data_field_general_image';
  $handler->display->display_options['fields']['field_general_image']['field'] = 'field_general_image';
  $handler->display->display_options['fields']['field_general_image']['label'] = '';
  $handler->display->display_options['fields']['field_general_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_general_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_general_image']['settings'] = array(
    'image_style' => 'zod-slide-image-style',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'general_image_uploading' => 'general_image_uploading',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['operator'] = 'and';
  $handler->display->display_options['filters']['tid']['value'] = array(
    62 => '62',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'picture_collections';

  /* Display: sulayman-afose-slide */
  $handler = $view->new_display('block', 'sulayman-afose-slide', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 1;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'field_general_image' => array(
      'element_type' => 'div',
      'class' => 'general-img',
    ),
    'title' => array(
      'element_type' => 'div',
      'class' => 'general-img-title',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: general-image */
  $handler->display->display_options['fields']['field_general_image']['id'] = 'field_general_image';
  $handler->display->display_options['fields']['field_general_image']['table'] = 'field_data_field_general_image';
  $handler->display->display_options['fields']['field_general_image']['field'] = 'field_general_image';
  $handler->display->display_options['fields']['field_general_image']['label'] = '';
  $handler->display->display_options['fields']['field_general_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_general_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_general_image']['settings'] = array(
    'image_style' => 'zod-slide-image-style',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_thumbnail']['id'] = 'field_thumbnail';
  $handler->display->display_options['fields']['field_thumbnail']['table'] = 'field_data_field_thumbnail';
  $handler->display->display_options['fields']['field_thumbnail']['field'] = 'field_thumbnail';
  $handler->display->display_options['fields']['field_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_thumbnail']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'general_image_uploading' => 'general_image_uploading',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['operator'] = 'and';
  $handler->display->display_options['filters']['tid']['value'] = array(
    83 => '83',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'picture_collections';
  $handler->display->display_options['block_description'] = 'sulayman-afose-slide';

  /* Display: Sulayman-Afose-Attachment-Profile-pix */
  $handler = $view->new_display('attachment', 'Sulayman-Afose-Attachment-Profile-pix', 'attachment_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'semanticviews_fields';
  $handler->display->display_options['row_options']['skip_blank'] = 0;
  $handler->display->display_options['row_options']['semantic_html'] = array(
    'title' => array(
      'element_type' => 'div',
      'class' => '',
    ),
    'body' => array(
      'element_type' => 'div',
      'class' => '',
    ),
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'photograher-profile-250x250',
    'image_link' => 'content',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'discover_nigeria' => 'discover_nigeria',
  );
  $handler->display->display_options['displays'] = array(
    'block_1' => 'block_1',
    'default' => 0,
    'block' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Sulayman-Afose-Attachment-Profile */
  $handler = $view->new_display('attachment', 'Sulayman-Afose-Attachment-Profile', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'discover_nigeria' => 'discover_nigeria',
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['operator'] = 'or';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Profile' => 'Profile',
  );
  $handler->display->display_options['displays'] = array(
    'block_1' => 'block_1',
    'default' => 0,
    'block' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: dn state slide */
  $handler = $view->new_display('block', 'dn state slide', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_thumbnail' => 'field_thumbnail',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: general-image */
  $handler->display->display_options['fields']['field_general_image']['id'] = 'field_general_image';
  $handler->display->display_options['fields']['field_general_image']['table'] = 'field_data_field_general_image';
  $handler->display->display_options['fields']['field_general_image']['field'] = 'field_general_image';
  $handler->display->display_options['fields']['field_general_image']['label'] = '';
  $handler->display->display_options['fields']['field_general_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_general_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_general_image']['settings'] = array(
    'image_style' => 'new_830_x_450',
    'image_link' => '',
  );
  /* Field: Content: image description */
  $handler->display->display_options['fields']['field_image_description']['id'] = 'field_image_description';
  $handler->display->display_options['fields']['field_image_description']['table'] = 'field_data_field_image_description';
  $handler->display->display_options['fields']['field_image_description']['field'] = 'field_image_description';
  $handler->display->display_options['fields']['field_image_description']['label'] = '';
  $handler->display->display_options['fields']['field_image_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: dn id ref (field_dn_id_ref) */
  $handler->display->display_options['arguments']['field_dn_id_ref_nid']['id'] = 'field_dn_id_ref_nid';
  $handler->display->display_options['arguments']['field_dn_id_ref_nid']['table'] = 'field_data_field_dn_id_ref';
  $handler->display->display_options['arguments']['field_dn_id_ref_nid']['field'] = 'field_dn_id_ref_nid';
  $handler->display->display_options['arguments']['field_dn_id_ref_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_dn_id_ref_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_dn_id_ref_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_dn_id_ref_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_dn_id_ref_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_dn_id_ref_nid']['validate']['type'] = 'node';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'general_image_uploading' => 'general_image_uploading',
  );
  $handler->display->display_options['block_description'] = 'dn state slide';

  /* Display: zodml in the news */
  $handler = $view->new_display('block', 'zodml in the news', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'juicebox';
  $handler->display->display_options['style_options']['image_field'] = 'field_general_image';
  $handler->display->display_options['style_options']['thumb_field'] = 'field_general_image';
  $handler->display->display_options['style_options']['caption_field'] = 'title';
  $handler->display->display_options['style_options']['show_title'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: general-image */
  $handler->display->display_options['fields']['field_general_image']['id'] = 'field_general_image';
  $handler->display->display_options['fields']['field_general_image']['table'] = 'field_data_field_general_image';
  $handler->display->display_options['fields']['field_general_image']['field'] = 'field_general_image';
  $handler->display->display_options['fields']['field_general_image']['label'] = '';
  $handler->display->display_options['fields']['field_general_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_general_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_general_image']['settings'] = array(
    'image_style' => 'new_830_x_450',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'general_image_uploading' => 'general_image_uploading',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    91 => '91',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'picture_collections';
  $handler->display->display_options['block_description'] = 'zodml in the news';

  /* Display: submitted-photo-slide */
  $handler = $view->new_display('block', 'submitted-photo-slide', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'juicebox';
  $handler->display->display_options['style_options']['image_field'] = 'field_general_image';
  $handler->display->display_options['style_options']['thumb_field'] = 'field_general_image';
  $handler->display->display_options['style_options']['caption_field'] = 'title';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: general-image */
  $handler->display->display_options['fields']['field_general_image']['id'] = 'field_general_image';
  $handler->display->display_options['fields']['field_general_image']['table'] = 'field_data_field_general_image';
  $handler->display->display_options['fields']['field_general_image']['field'] = 'field_general_image';
  $handler->display->display_options['fields']['field_general_image']['label'] = '';
  $handler->display->display_options['fields']['field_general_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_general_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_general_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'general_image_uploading' => 'general_image_uploading',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['operator'] = 'and';
  $handler->display->display_options['filters']['tid']['value'] = array(
    93 => '93',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'picture_collections';
  $handler->display->display_options['block_description'] = 'submitted-photo-slide';

  /* Display: photographer view */
  $handler = $view->new_display('block', 'photographer view', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'juicebox';
  $handler->display->display_options['style_options']['image_field'] = 'field_general_image';
  $handler->display->display_options['style_options']['thumb_field'] = 'field_general_image';
  $handler->display->display_options['style_options']['caption_field'] = 'title';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: general-image */
  $handler->display->display_options['fields']['field_general_image']['id'] = 'field_general_image';
  $handler->display->display_options['fields']['field_general_image']['table'] = 'field_data_field_general_image';
  $handler->display->display_options['fields']['field_general_image']['field'] = 'field_general_image';
  $handler->display->display_options['fields']['field_general_image']['label'] = '';
  $handler->display->display_options['fields']['field_general_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_general_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_general_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: dn id ref (field_dn_id_ref) */
  $handler->display->display_options['arguments']['field_dn_id_ref_nid']['id'] = 'field_dn_id_ref_nid';
  $handler->display->display_options['arguments']['field_dn_id_ref_nid']['table'] = 'field_data_field_dn_id_ref';
  $handler->display->display_options['arguments']['field_dn_id_ref_nid']['field'] = 'field_dn_id_ref_nid';
  $handler->display->display_options['arguments']['field_dn_id_ref_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_dn_id_ref_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_dn_id_ref_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_dn_id_ref_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_dn_id_ref_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_dn_id_ref_nid']['validate']['type'] = 'node';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'general_image_uploading' => 'general_image_uploading',
  );
  $handler->display->display_options['block_description'] = 'photographer view';

  /* Display: sidebar submitted photo */
  $handler = $view->new_display('block', 'sidebar submitted photo', 'block_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'semanticviews_default';
  $handler->display->display_options['style_options']['row']['class'] = 'sidebar-submit-photo grid-6';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_thumbnail' => 'field_thumbnail',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: general-image */
  $handler->display->display_options['fields']['field_general_image']['id'] = 'field_general_image';
  $handler->display->display_options['fields']['field_general_image']['table'] = 'field_data_field_general_image';
  $handler->display->display_options['fields']['field_general_image']['field'] = 'field_general_image';
  $handler->display->display_options['fields']['field_general_image']['label'] = '';
  $handler->display->display_options['fields']['field_general_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_general_image']['alter']['path'] = 'http://zodml.org/discover-nigeria/submit-photo';
  $handler->display->display_options['fields']['field_general_image']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_general_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_general_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_general_image']['settings'] = array(
    'image_style' => 'submit_photo_sidebar',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'http://zodml.org/discover-nigeria/submit-photo';
  $handler->display->display_options['fields']['title']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'general_image_uploading' => 'general_image_uploading',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['operator'] = 'and';
  $handler->display->display_options['filters']['tid']['value'] = array(
    93 => '93',
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'picture_collections';
  $handler->display->display_options['block_description'] = 'sidebar submitted photo';
  $export['zod_story_slide'] = $view;

  return $export;
}
