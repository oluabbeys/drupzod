<?php

/**
 * @file
 * Alternative Juicebox XML loader that's used to load the XML associated with a
 * Drupal field formatter plugin. This version attempts to get the XML from a
 * cache instead of generating it directly.
 */


/**
 * Alternative Class to load and build the XML associated with a Drupal field
 * formatter plugin.
 */
class JuiceboxXmlFieldCache extends JuiceboxXmlField {

  /**
   * {@inheritdoc}
   */
  function getXml() {
    // Try to get the XML from the cache based on the gallery checksum. If
    // a cached value it not available then fallback on the parent method.
    $query = drupal_get_query_parameters();
    if (!empty($query['checksum'])) {
      $cached_xml = cache_get($query['checksum'], 'cache_juicebox_xml');
      if (!empty($cached_xml->data)) {
        return $cached_xml->data;
      }
    }
    return parent::getXml();
  }

}