<?php /* -*- mode: php; -*- */
/**
 * Drupal HotSpot Module * http://drupal.org/project/Hotspot
 * Copyright 2008-2011 (c) Coova Technologies, LLC.
 * Licensed under the GNU General Public License.
 */

function hotspot_save_cookie() {
  setcookie('HotspotURL',urlencode($_SESSION['userurl']), 0, '/');
}

function hotspot_check_cookie() {
  /**
   *  See hotspot.pages.inc for use of hotspot_save_cookie()
   *  This is an alternate, and more reliable, way to collect 
   *  chilli initial redirect state information. Can't rely on 
   *  $_SESSION since drupal will reset it on login/logout.
   *  Redirect initial redirect to kick off login process again.
   */
  $cookie = $_COOKIE['HotspotURL'];
  if (!isset($_SESSION['uamip']) && isset($cookie) && $cookie != '') {
    setcookie ('HotspotURL', '', 0, '/');
    drupal_goto(urldecode($cookie));
    exit;
  }
}

function hotspot_set_session($v) {
  if (isset($_GET[$v])) {
    if (function_exists('ewt_set_session')) {
      ewt_set_session($v, $_GET[$v]);
    } else {
      $_SESSION[$v] = $_GET[$v];
    }
  }
}

function hotspot_get_param($v) {
  if (isset($_GET[$v])) {
    return $_GET[$v];
  }
  
  return $_SESSION[$v];
}

function hotspot_get_username($input) {
  $username = $input['UserName'];
  if (!$username) $username = $input['Username'];
  if (!$username) $username = $input['username'];
  if ($username) {
    if ($input['realm']) {
      $realm = $input['realm'];
    } else {
      $realm = variable_get('hotspot_realm', false);
    }
    if ($realm != '') $username = $realm.'/'.$username;
  }
  return $username;
}

function hotspot_get_password($input) {
  $password = $input['Password'];
  if (!$password) $password = $input['password'];
  return $password;
}

function hotspot_get_uamsecret() {
  if ($_SESSION['uamsecret']) 
    return $_SESSION['uamsecret'];
  return variable_get('hotspot_uamsecret', '');
}

function hotspot_raw_challenge() {
  return pack("H32", hotspot_get_param('challenge'));
}

function hotspot_get_challenge() {
  $challenge = hotspot_raw_challenge();
  $uamsecret = hotspot_get_uamsecret();
  if (isset($uamsecret)) {
    $challenge = pack("H*", md5($challenge . $uamsecret));
  } 
  return $challenge;
}

function hotspot_pap_password($pass) {
  $challenge = hotspot_get_challenge();
  $pass = pack("a32", $pass);
  return implode("", unpack("H32", ($pass ^ $challenge)));
}

function hotspot_chap_response($pass) {
  $challenge = hotspot_get_challenge();
  return md5("\0" . $pass . $challenge);
}

function hotspot_login_url($username, $password) {

  $loginurl = hotspot_get_param('loginurl');

  if ($loginurl && $loginurl != '') {
    return $loginurl . '?username=' . $username . '&password=' . $password;
  } 

  $ssl = hotspot_get_param('ssl');

  if (isset($ssl) && $ssl != '' && 
      hotspot_setting('chilli_ssl', 'false') == 'true') {
    $login = $ssl . 'logon';
  } else {
    $login = 'http://' . 
      hotspot_get_param('uamip') . ':' . 
      hotspot_get_param('uamport') . '/logon';
  }

  if (variable_get('hotspot_authproto', 'chap') == 'chap') {
    
    $response = hotspot_chap_response($password);
    
    $url = $login . '?username=' . $username . '&response=' . $response . 
      '&userurl=' . hotspot_get_param('userurl');
    
  } else {
    
    $pappassword = hotspot_pap_password($password);
    
    $url = $login . '?username=' . $username . '&password=' . $pappassword .
      '&userurl=' . hotspot_get_param('userurl');
    
  }

  return $url;
}

function hotspot_wispr_xml($url) {
  return '<!--
<?xml version=\"1.0\" encoding=\"UTF-8\"?>
<WISPAccessGatewayParam 
  xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\"
  xsi:noNamespaceSchemaLocation=\"http://www.acmewisp.com/WISPAccessGatewayParam.xsd\">
<AuthenticationReply>
<MessageType>120</MessageType>
<ResponseCode>201</ResponseCode>
<LoginResultsURL>'.$url.'</LoginResultsURL>
</AuthenticationReply> 
</WISPAccessGatewayParam>
-->';
}

function hotspot_wispr_xml_resp() {

  if ($_GET['res'] == 'success' || $_GET['res'] == 'already') {

    return '<!--
<?xml version=\"1.0\" encoding=\"UTF-8\"?>
<WISPAccessGatewayParam 
  xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\"
  xsi:noNamespaceSchemaLocation=\"http://www.acmewisp.com/WISPAccessGatewayParam.xsd\">
<AuthenticationPollReply>
<MessageType>140</MessageType>
<ResponseCode>50</ResponseCode>
<ReplyMessage>'.$_GET['reply'].'</ReplyMessage>
<LogoffURL>'.$_SESSION['logouturl'].'</LogoffURL>
</AuthenticationPollReply>
</WISPAccessGatewayParam>
-->';

  } else if ($_GET['res'] == 'failed') {
    return '<!--
<?xml version=\"1.0\" encoding=\"UTF-8\"?>
<WISPAccessGatewayParam 
  xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\"
  xsi:noNamespaceSchemaLocation=\"http://www.acmewisp.com/WISPAccessGatewayParam.xsd\">
<AuthenticationPollReply>
<MessageType>140</MessageType>
<ResponseCode>102</ResponseCode>
<ReplyMessage>'.$_GET['reply'].'</ReplyMessage>
</AuthenticationPollReply>
</WISPAccessGatewayParam>
-->';

  }

  return '';
}

