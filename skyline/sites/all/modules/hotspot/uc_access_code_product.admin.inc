<?php
/**
 * Drupal HotSpot Module * http://drupal.org/project/Hotspot
 * Copyright 2008-2011 (c) Coova Technologies, LLC.
 * Licensed under the GNU General Public License.
 */

function uc_access_code_product_settings_form() {
  $form = array();

  $form['uc_access_code_product_login'] = 
    array('#type' => 'textfield',
	  '#title' => t('Login before purchase message'),
	  '#default_value' => variable_get('uc_access_code_product_login', ''),
	  '#weight' => -6,
	  '#description' => t('Error message to prompt user to login before buying access products'),
	  );

  $form['uc_access_code_product_already'] = 
    array('#type' => 'textfield',
	  '#title' => t('Already have access product message'),
	  '#default_value' => variable_get('uc_access_code_product_already', ''),
	  '#weight' => -5,
	  '#description' => t('Error message for when adding multiple access code products to cart'),
	  );

  $form['uc_access_code_product_dologin'] = 
    array('#type' => 'checkbox',
	  '#title' => t('Auto login an available user access code.'),
	  '#default_value' => variable_get('uc_access_code_product_dologin', 1),
	  '#weight' => -1,
	  );

  return system_settings_form($form);
}
