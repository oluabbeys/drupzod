<?php
/**
 * Drupal HotSpot Module * http://www.coova.org/CoovaChilli
 * Copyright 2008-2011 (c) Coova Technologies, LLC.
 * Licensed under the Gnu Public License.
 */

/**
 * @file
 * Views 2 hooks and callback registries.
 */

/**
 * Implementation of hook_views_data().
 */
function uc_access_code_product_views_data() {
  $data['uc_access_code_products']['table']['group'] = t('Product');

  $data['uc_access_code_products']['table']['join'] = array(
    'node' => array(
      'left_field' => 'vid',
      'field' => 'vid',
    ),
    'node_revisions' => array(
      'left_field' => 'vid',
      'field' => 'vid',
    ),
  );

  $data['uc_access_code_products']['sell_price'] = array(
    'title' => t('Sell price'),
    'help' => t('The price for which the product is sold.'),
    'field' => array(
      'handler' => 'uc_product_handler_field_price',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
  );

  $data['uc_access_code_products']['ordering'] = array(
    'title' => t('List position'),
    'help' => t('The default sort criteria in the catalog.'),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  $data['uc_access_code_products']['is_product'] = array(
    'title' => t('Is a product'),
    'help' => t('Check for the fields provided by the Ubercart product module.'),
    'group' => t('Node'),
    'filter' => array(
      'handler' => 'uc_product_handler_filter_product',
      'label' => t('Is a product'),
    ),
  );

  $data['uc_access_code_products']['addtocartlink'] = array(
    'title' => t('Add to cart form'),
    'help' => t("Form to put the product in the customer's cart."),
    'group' => t('Product'),
    'field' => array(
      'additional fields' => array(
        'nid' => array(
          'table' => 'node',
          'field' => 'nid',
        ),
        'type' => array(
          'table' => 'node',
          'field' => 'type',
        ),
      ),
      'handler' => 'uc_product_handler_field_addtocart',
    ),
  );

  $data['uc_access_code_products']['buyitnowbutton'] = array(
    'title' => t('Buy it now button'),
    'help' => t('A button to add a product to the cart without quantity or attribute fields.'),
    'group' => t('Product'),
    'field' => array(
      'table' => 'node',
      'additional fields' => array(
        'nid' => array(
          'table' => 'node',
          'field' => 'nid',
        ),
      ),
      'handler' => 'uc_product_handler_field_buyitnow',
    ),
  );

  return $data;
}


/**
 * Implementation of hook_views_handlers().

function uc_access_code_product_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'uc_product') .'/views',
    ),
    'handlers' => array(
      'uc_product_handler_field_price' => array(
        'parent' => 'views_handler_field',
      ),
      'uc_product_handler_field_weight' => array(
        'parent' => 'views_handler_field',
      ),
      'uc_product_handler_filter_product' => array(
        'parent' => 'views_handler_filter_boolean_operator',
      ),
      'uc_product_handler_field_addtocart' => array(
        'parent' => 'views_handler_field',
      ),
      'uc_product_handler_field_buyitnow' => array(
        'parent' => 'views_handler_field',
      ),
    ),
  );
}
 */

