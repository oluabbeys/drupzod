<?php
/**
 * @file
 * zodml_server_2.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function zodml_server_2_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog-context';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'blog' => 'blog',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'blog_delta',
    ),
  );
  $context->condition_mode = 0;
  $export['blog-context'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'dn-landing-context';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'discover-nigeria/people' => 'discover-nigeria/people',
        'discover-nigeria/visual-arts' => 'discover-nigeria/visual-arts',
        'discover-nigeria/heritage-and-culture' => 'discover-nigeria/heritage-and-culture',
        'discover-nigeria/states' => 'discover-nigeria/states',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'dn_landing_page_layout',
    ),
  );
  $context->condition_mode = 0;
  $export['dn-landing-context'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'dn_homepage_context';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'discover-nigeria' => 'discover-nigeria',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'dn_homepage',
    ),
  );
  $context->condition_mode = 0;
  $export['dn_homepage_context'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'home-page-context';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'home_page_layout',
    ),
  );
  $context->condition_mode = 0;
  $export['home-page-context'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'individual_blog_context';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'blog/*' => 'blog/*',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'individual_page_delta',
    ),
  );
  $context->condition_mode = 0;
  $export['individual_blog_context'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'kids-context';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'kids' => 'kids',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'kids_delta',
    ),
  );
  $context->condition_mode = 0;
  $export['kids-context'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'secondary-context';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'secondary-school-students' => 'secondary-school-students',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'kids_delta',
    ),
  );
  $context->condition_mode = 0;
  $export['secondary-context'] = $context;

  return $export;
}
