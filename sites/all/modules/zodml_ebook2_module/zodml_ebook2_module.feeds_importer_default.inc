<?php
/**
 * @file
 * zodml_ebook2_module.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function zodml_ebook2_module_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'ebook_import';
  $feeds_importer->config = array(
    'name' => 'ebook-import',
    'description' => 'importing ebooks csv file',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Authors',
            'target' => 'field_author',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Category',
            'target' => 'field_category',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          3 => array(
            'source' => 'Tag',
            'target' => 'field_tags',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          4 => array(
            'source' => 'Image',
            'target' => 'field_image',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'PDF Download',
            'target' => 'field_pdf_download',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'ebook',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['ebook_import'] = $feeds_importer;

  return $export;
}
