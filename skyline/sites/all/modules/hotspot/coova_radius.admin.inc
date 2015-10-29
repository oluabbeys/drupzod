<?php
/**
 * Drupal HotSpot Module * http://drupal.org/project/Hotspot
 * Copyright 2008-2011 (c) Coova Technologies, LLC.
 * Licensed under the GNU General Public License.
 */

function coova_radius_adm($name, &$set, $a = array(), $def = '', $optcb = false) {
  global $ewtSettings;
  $n = 'coova_radius_'.$name;
  if (isset($ewtSettings) && isset($ewtSettings[$name])) return;
  $a['#default_value'] = variable_get($n, $def);
  if ($optcb) {
    $optcb = 'coova_radius_'.$optcb;
    $options = $optcb();
    $a['#type'] = 'select';
    $a['#size'] = 1;
    if ($options) {
      $a['#options'] = $options;
    } else {
      $a['#type'] = 'markup';
#      $a['#value'] = 'No options available.';
    }
  }
  $set[$n] = $a;
}

function coova_radius_admin_settings() {
  global $ewtSettings;

  if (coova_radius_setting('admin_settings', true)) {
    $set = array('#type' => 'fieldset',
		 '#title' => t('CoovaRADIUS'),
		 '#collapsible' => true,
		 '#collapsed' => false);
    
    coova_radius_adm('service_name', $set, 
		     array('#type' => 'textfield',
			   '#title' => t('Service name'),
			   '#size' => 30,
			   '#maxlength' => 55,
			   '#description' => t('The name of the RADIUS service.'),
			   ), 'CoovaRADIUS');
    
    coova_radius_adm('provisioning', $set, 
		     array('#type' => 'radios',
			   '#title' => t('CoovaRADIUS'),
			   '#options' => array('none' => 'No automatic provisioning', 
					       'users' => 'Auto provision standard users',
					       'admins' => 'Auto provision administrative users',
					       'codes' => 'Auto issue access codes always',
					       'oneCode' => 'Auto issue access code on insert'),
			   ), 'none');
    
    coova_radius_adm('cookie_key', $set, 
		     array('#type' => 'textfield',
			   '#title' => t('Cookie Encryption Key'),
			   '#size' => 20,
			   '#description' => t('Encryption key to use for cookie storage of voucher codes.'),
			   ));
    
    coova_radius_adm('anon_provisioning', $set, 
		     array('#type' => 'radios',
			   '#title' => t('Anonymous user access'),
			   '#options' => array('none' => 'No anonymous user access', 
					       'otp' => 'Anonymous user access using one-time password'),
			   ), 'none');
    
    coova_radius_adm('anon_provisioning_attributes', $set, 
		     array('#type' => 'textarea',
			   '#title' => t('Anonymous user access session attributes'),
			   ));
    
    if (coova_radius_setting('advanced_settings', true)) {
      $advset = 
	array('#type' => 'fieldset',
	      '#title' => t('CoovaRADIUS Advanced'),
	      '#collapsible' => true,
	      '#collapsed' => true);
      
      coova_radius_adm('provision_user_roles', $advset, 
		       array('#type' => 'textfield',
			     '#title' => t('Authorized roles'),
			     ));
      
      coova_radius_adm('provision_user_mac_auth', $advset, 
		       array('#type' => 'radios',
			     '#title' => t('Create users able to MAC Authenticate'),
			     '#options' => array('false' => 'Disabled', 'true' => 'Enabled'),
			     ), 'false');
      
      coova_radius_adm('provision_user_owns_aps', $advset, 
		       array('#type' => 'radios',
			     '#title' => t('Create users able to Own access points'),
			     '#options' => array('false' => 'Disabled', 'true' => 'Enabled'),
			     ), 'false');
      
      coova_radius_adm('provision_user_owns_devices', $advset, 
		       array('#type' => 'radios',
			     '#title' => t('Create users able to Own client devices'),
			     '#options' => array('false' => 'Disabled', 'true' => 'Enabled'),
			     ), 'false');
      
      coova_radius_adm('provision_user_realm', $advset, 
		       array('#type' => 'radios',
			     '#title' => t('Create a Realm for each user'),
			     '#options' => array('false' => 'Disabled', 'true' => 'Enabled'),
			     ), 'false');
      
      coova_radius_adm('provision_user_network', $advset, 
		       array('#type' => 'radios',
			     '#title' => t('Create a Network for each user'),
			     '#options' => array('false' => 'Disabled', 'true' => 'Enabled'),
			     ), 'false');
      
      coova_radius_adm('use_payment_policies', $advset, 
		       array('#type' => 'radios',
			     '#title' => t('Enable Payments'),
			     '#options' => array('false' => 'Disabled', 'true' => 'Enabled'),
			     ), 'false');
      
      coova_radius_adm('realm_id', $advset, 
		       array('#type' => 'textfield',
			     '#title' => t('Realm ID'),
			     '#size' => 5,
			     '#maxlength' => 5,
			     '#description' => t('Numeric Realm ID in CoovaRADIUS Database.'),
			     ), '', 'realm_options');
      
      coova_radius_adm('network_id', $advset, 
		       array('#type' => 'textfield',
			     '#title' => t('Network ID'),
			     '#size' => 5,
			     '#maxlength' => 5,
			     '#description' => t('Numeric Network ID in CoovaRADIUS Database.'),
			     ), '', 'network_options');
      
      coova_radius_adm('access_policy_id', $advset, 
		       array('#type' => 'textfield',
			     '#title' => t('Access Policy ID'),
			     '#size' => 5,
			     '#maxlength' => 5,
			     '#description' => t('Numeric Access Policy ID in CoovaRADIUS Database.'),
			     ), '', 'policy_options');
      
      coova_radius_adm('attribute_set_id', $advset, 
		       array('#type' => 'textfield',
			     '#title' => t('Attribute Set ID'),
			     '#size' => 5,
			     '#maxlength' => 5,
			     '#description' => t('Numeric Attribute Set ID in CoovaRADIUS Database.'),
			     ), '', 'attributeset_options');
      
      $set[] = $advset;
      
      $menuset = array('#type' => 'fieldset',
		       '#title' => t('CoovaRADIUS Menus'),
		       '#collapsible' => true,
		       '#collapsed' => true);

      coova_radius_adm('user_profile', $menuset, 
		       array('#type' => 'textfield',
			     '#title' => t('Enable a User Profile block (EWT GUI)'),
			     '#description' => t('Leave blank for off, entry "true" for the default, or enter the EWT service name.'),
			     ));

      coova_radius_adm('user_tab', $menuset, 
		       array('#type' => 'textfield',
			     '#title' => t('Enable the User Usage tab (EWT GUI)'),
			     '#description' => t('Leave blank for off, entry "true" for the default, or enter the EWT service name.'),
			     ));

      $set[] = $menuset;
    }

    $form['coova_radius'] = $set;
  }

  return system_settings_form($form);
}

function coova_radius_ewt_admin_menu() {
  global $user;

  if (!coova_radius_get_user($user, false)) {
    return 'No access products or permissions found.';
  }

  if (ewt_proxy_enabled(true)) {
    $service = 'drupal-menu';
    return ewt_wait_div().ewt_menu_div($service);
  }

  return 'EWT Not Enabled';
}

