<?php
/**
 * Drupal HotSpot Module * http://drupal.org/project/Hotspot
 * Copyright 2008-2011 (c) Coova Technologies, LLC.
 * Licensed under the GNU General Public License.
 */

function coova_radius_ewt_usage($user) {

  if (!coova_radius_get_user($user, false)) {
    return 'No access products or permissions found.';
  }

  $service = coova_radius_setting('user_tab', '');

  if (ewt_proxy_enabled(true)) {
    if ($service == 'true') $service = 'drupal-menu';
    return ewt_wait_div().ewt_menu_div($service);
  }

  if ($service == 'true') $service = 'drupal-sessions';
  return drupal_get_form('ewt_form', $service, variable_get('coova_radius_service_name', 'CoovaRADIUS').' Usages');
}

