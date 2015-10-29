<?php
/**
 * Drupal CoovaEWT Module * http://www.coova.com/CoovaEWT
 * Copyright 2008-2009 (c) Coova Technologies, LLC
 * Licensed under the Gnu Public License.
 */

/**
 * Provides settings pages.
 */
function ewt_admin_settings() {
  global $ewtSettings;

  if ($ewtSettings && $ewtSettings['api_url']) 
    return array('ewt'=>
		 array('#type' => 'markup',
		       '#value' => t('CoovaEWT - Nothing to configure'),
		       ));
  
  $form['ewt'] = 
    array('#type' => 'fieldset',
	  '#title' => t('CoovaEWT Integration'),
	  '#collapsible' => true,
	  '#collapsed' => false,
	  );
  
  $form['ewt']['ewt_enabled'] = 
    array('#type' => 'radios',
	  '#title' => t('API Enabled'),
	  '#default_value' => variable_get('ewt_enabled', 'false'),
	  '#options' => array('false' => 'Disabled', 'true' => 'Enabled'),
	  );

  $form['ewt']['ewt_api_url'] = 
    array('#type' => 'textfield',
	  '#title' => t('EWT Service URL'),
	  '#default_value' => variable_get('ewt_api_url', 'https://localhost:1800/ewt/json'),
	  '#size' => 30,
	  '#maxlength' => 55,
	  '#description' => t('CoovaEWT Service URL to use.'),
	  );
  
  $form['ewt']['ewt_api_png_url'] = 
    array('#type' => 'textfield',
	  '#title' => t('EWT Images Service URL'),
	  '#default_value' => variable_get('ewt_api_png_url', 'https://localhost:1800/ewt/images'),
	  '#size' => 30,
	  '#maxlength' => 55,
	  '#description' => t('CoovaEWT Images Service URL to use.'),
	  );
  
  $form['ewt']['ewt_api_username'] = 
    array('#type' => 'textfield',
	  '#title' => t('API Username'),
	  '#default_value' => variable_get('ewt_api_username', 'admin'),
	  '#size' => 30,
	  '#maxlength' => 55,
	  '#description' => t('Username for API login.'),
	  );
  
  $form['ewt']['ewt_api_password'] = 
    array('#type' => 'textfield',
	  '#title' => t('API Password'),
	  '#default_value' => variable_get('ewt_api_password', 'admin'),
	  '#size' => 30,
	  '#maxlength' => 55,
	  '#description' => t('Password for API login.'),
	  );
  

  $form['ewt']['ewt_realm'] = 
    array('#type' => 'textfield',
	  '#title' => t('Drupal Realm'),
	  '#default_value' => variable_get('ewt_realm', 'drupal-site'),
	  '#size' => 30,
	  '#maxlength' => 55,
	  '#description' => t('A unique name for this Drupal site.'),
	  );
  
  
  if (file_exists(drupal_get_path('module', 'ewt').'/com.coova.ewt.Drupal')) {

    $form['ewt']['ewt_proxy_enabled'] = 
      array('#type' => 'radios',
	    '#title' => t('Enabled CoovaEWT GUI and Ajax Proxy'),
	    '#default_value' => variable_get('ewt_proxy_enabled', 'false'),
	    '#options' => array('false' => 'Disabled', 
				'true' => 'Enabled for everyone', 
				'user' => 'Enabled for logged in users',
				'need' => 'As needed by ewt_div() inclusion'),
	    '#description' => t('Allow EWT proxy requests.'),
	    );
    
    $form['ewt']['ewt_proxy_regex'] = 
      array('#type' => 'textfield',
	    '#title' => t('Ajax Proxy Filter'),
	    '#default_value' => variable_get('ewt_proxy_regex', '/drupal.*/'),
	    '#size' => 30,
	    '#maxlength' => 55,
	    '#description' => t('Allowed services to proxy by regular expression.'),
	    );
    
  } else {
    
    $form['ewt']['ewt_proxy_enabled'] = 
      array('#type' => 'radios',
	    '#title' => t('Enabled CoovaEWT GUI and Ajax Proxy'),
	    '#description' =>  t('Requires the CoovaEWT GUI application files from <a href="http://www.coova.com/">www.coova.com</a>'),
	    );
  }

  return system_settings_form($form);
}

