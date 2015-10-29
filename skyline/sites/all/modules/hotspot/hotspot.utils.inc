<?php
/**
 * Drupal HotSpot Module * http://drupal.org/project/Hotspot
 * Copyright 2008-2011 (c) Coova Technologies, LLC.
 * Licensed under the GNU General Public License.
 */

require_once drupal_get_path('module', 'hotspot').'/hotspot.inc';

function hotspot_uam_auth($tid = 0) {
  $tid = (int) $tid;

  header('Content-type: text/javascript');
  print "chilliJSON.reply({'response':'".hotspot_chap_response($_GET['password'])."'})";
}
