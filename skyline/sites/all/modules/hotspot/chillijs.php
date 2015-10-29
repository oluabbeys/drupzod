<?php
/**
 * Drupal HotSpot Module * http://drupal.org/project/Hotspot
 * Copyright 2008-2011 (c) Coova Technologies, LLC.
 * Licensed under the GNU General Public License.
 */

require_once drupal_get_path('module', 'hotspot').'/hotspot.inc';

$provisioning = (string)variable_get('hotspot_provisioning', 'none');
$username = (string)variable_get('hotspot_auto_username', 'none');
$password = (string)variable_get('hotspot_auto_password', 'none');
if ($provisioning == 'anonymoususer' && $username != '' && $password != '') {
  print "var c_username = '".$username."';\n";
  print "var c_password = '".$password."';\n";
} else {
  print "var c_username = null;\n";
}

if (isset($_GET['uamip'])) { $uamip = $_GET['uamip']; }
else { $uamip = $_SESSION['uamip']; }
if (isset($_GET['uamport'])) { $uamport = $_GET['uamport']; }
else { $uamport = $_SESSION['uamport']; }

print "chilliController.host = '".$uamip."';\n";
print "chilliController.port = '".$uamport."';\n";

$uamsv = url('hotspot/uam/auth', array('absolute'=>true));
$realm = (string)variable_get('hotspot_realm', '');
$crealm = (string)variable_get('hotspot_code_realm', '');
$acctrfc = (string)variable_get('hotspot_acctrfc', 'false');

if ($realm != '') {
  print "chilliController.realm = '".$realm."';\n";
 }

if ($crealm != '') {
  print "chilliController.codeRealm = '".$crealm."';\n";
 }

if (hotspot_get_uamsecret() != '') {
  print "chilliController.uamService = '".$uamsv."';\n";
}

if ($acctrfc == 'true') {
  print "chilliController.acctRFC = true;\n";
 } else {
  print "chilliController.acctRFC = false;\n";
 }

?>	

<?php if ($_GET['q'] == 'hotspot/status') { ?>
chilliController.loggedOut = function() {
  opener.window.location = '<?php echo url('', array('absolute'=>true)) ?>';
  self.close();
}
<?php } else { ?>
chilliController.loggedOut = function() {
  window.location = chilliController.redir.originalURL;
}
<?php 
  if ($_REQUEST['q'] == 'hotspot' && hotspot_setting('success_redirect', '') == '<popup>')
    print "chilliController.statusURL = '".url('hotspot/status', array('absolute'=>true))."';\n"; 
?>
<?php } ?>

chilliController.onUpdate = updateUI;
chilliController.onError  = handleError;
chilliClock.onTick = function () { }
chilliController.queryObj = window.queryObj;
setTimeout('showWaitPage()', 50);
setTimeout('chilliController.refresh()', 500);

