<?php
/**
 * Drupal HotSpot Module * http://drupal.org/project/Hotspot
 * Copyright 2008-2011 (c) Coova Technologies, LLC.
 * Licensed under the GNU General Public License.
 */

/**
 * Provides settings pages.
 */

function hotspot_adm($name, &$set, $a = array(), $def = '') {
  global $ewtSettings;
  $n = 'hotspot_'.$name;
  if (isset($ewtSettings) && isset($ewtSettings[$name])) return;
  $a['#default_value'] = variable_get($n, $def);
  $set[$n] = $a;
}

function hotspot_admin_settings() {

  $set = 
    array('#type' => 'fieldset',
	  '#title' => t('Hotspot settings'),
	  '#collapsible' => true,
	  '#collapsed' => false,
	  );

  hotspot_adm('enabled', $set,
	      array('#type' => 'radios',
		    '#title' => t('Hotspot module'),
		    '#options' => array('false' => 'Disabled', 'true' => 'Enabled'),
		    ), 'true');
	
  hotspot_adm('check_url_md', $set,
	      array('#type' => 'radios',
		    '#title' => t('Check URL for tampering'),
		    '#options' => array('false' => 'Disabled', 'true' => 'Enabled'),
		    ), 'true');

  hotspot_adm('method', $set,
	      array('#type' => 'radios',
		    '#title' => t('Method of login'),
		    '#options' => array('redir' => 'Browser Redirects', 
					'js' => 'JavaScript Controller'),
		    ), 'redir');

  hotspot_adm('initial_redirect', $set,
	      array('#type' => 'textfield',
		    '#title' => t('Redirect initial request to page'),
		    '#size' => 30,
		    '#maxlength' => 55,
		    '#description' => t('Drupal page to redirect to (e.g. <i>node/10</i>), blank for none.'),
		    ), '');

  hotspot_adm('success_redirect', $set,
	      array('#type' => 'textfield',
		    '#title' => t('Redirect to page on login success'),
		    '#size' => 30,
		    '#maxlength' => 55,
		    '#description' => t('Drupal page to redirect to (e.g. <i>node/10</i>), blank for none. Use <i>&lt;original&gt;</i> to redirect to the original URL, or <i>&lt;popup&gt;</i> to popup a status page before continuing to the original URL.'),
		    ), '');

  hotspot_adm('uamsecret', $set,
	      array('#type' => 'textfield',
		    '#title' => t('UAM Secret'),
		    '#size' => 30,
		    '#maxlength' => 55,
		    '#description' => t('UAM Secret used in chilli - <b>assumed blank for JavaScript Controller</b>.'),
		    ), '');

  hotspot_adm('authproto', $set,
	      array('#type' => 'radios',
		    '#title' => t('RADIUS Authentication Protocol'),
		    '#options' => array( 'chap' => 'CHAP', 'pap' => 'PAP'),
		    '#description' => t('JavaScript Controller will always use CHAP.'),
		    ), 'chap');
  
  $form['server'] = $set;

  $set =
    array('#type' => 'fieldset',
	  '#title' => t('Access provisioning'),
	  '#collapsible' => true,
	  '#collapsed' => true,
	  );

  hotspot_adm('loginform', $set,
	      array('#type' => 'radios',
		    '#title' => t('User login form'),
		    '#options' => array('false' => 'Disabled', 'true' => 'Enabled'),
		    ), 'true');
  
  hotspot_adm('provisioning', $set,
	      array('#type' => 'radios',
		    '#title' => t('User auto provisioning'),
		    '#options' => array('none' => 'No automatic provisioning', 
					'anonymoususer' => 'Auto Login as the user defined below'),
		    ), 'non');

  hotspot_adm('realm', $set,
	      array('#type' => 'textfield',
		    '#title' => t('User realm'),
		    '#size' => 30,
		    '#maxlength' => 55,
		    '#description' => t('Realm used when authenticating users, blank for none.'),
		    ), '');
  
  hotspot_adm('auto_username', $set,
	      array('#type' => 'textfield',
		    '#title' => t('HotSpot anonymous user username'),
		    '#size' => 30,
		    '#maxlength' => 55,
		    '#description' => t('Username to login with during "anonymoususer" provisioning.'),
		    ), '');
  
  hotspot_adm('auto_password', $set,
	      array('#type' => 'textfield',
		    '#title' => t('HotSpot anonymous user password'),
		    '#size' => 30,
		    '#maxlength' => 55,
		    '#description' => t('Password to login with during "anonymoususer" provisioning.'),
		    ), '');
  
  $form['provisioning'] = $set;

  $set =
    array('#type' => 'fieldset',
	  '#title' => t('Access codes'),
	  '#collapsible' => true,
	  '#collapsed' => true,
	  );

  hotspot_adm('code_enabled', $set,
	      array('#type' => 'radios',
		    '#title' => t('Access codes'),
		    '#options' => array('false' => 'Disabled', 'true' => 'Enabled'),
		    ), 'false');
  
  hotspot_adm('code_realm', $set,
	      array('#type' => 'textfield',
		    '#title' => t('HotSpot access code realm'),
		    '#size' => 30,
		    '#maxlength' => 55,
		    '#description' => t('Realm to use with access code.'),
		    ), '');

  $form['codes'] = $set;

  $set =
    array('#type' => 'fieldset',
	  '#title' => t('Text messages'),
	  '#collapsible' => true,
	  '#collapsed' => true,
	  );

  hotspot_adm('msg_ses_expired', $set,
	      array('#type' => 'textfield',
		    '#title' => t('Session expired message'),
		    '#size' => 30,
		    '#maxlength' => 55,
		    '#description' => t('Message shown on <i>hotspot</i> page when session has expired.'),
		    ), '');

  $form['codes'] = $set;
  
  return system_settings_form($form);
}

