<?php
/**
 * @file
 * zodml_server_2.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function zodml_server_2_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'solr';
  $environment->name = 'localhost server';
  $environment->url = 'http://localhost:8983/solr/prod';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_direct_commit' => 0,
    'apachesolr_read_only' => '0',
    'apachesolr_soft_commit' => 0,
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'article',
      1 => 'blog',
      2 => 'book',
      3 => 'book_child',
      4 => 'discover_nigeria',
      5 => 'discover_nigeria_main',
      6 => 'for_kids_main',
      7 => 'main_site_content',
      8 => 'page',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
