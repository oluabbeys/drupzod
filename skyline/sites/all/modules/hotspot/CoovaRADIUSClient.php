<?php
/**
 * Drupal HotSpot Module * http://drupal.org/project/Hotspot
 * Copyright 2008-2011 (c) Coova Technologies, LLC.
 * Licensed under the GNU General Public License.
 */

class CoovaRADIUSClient {
  var $_url = false;
  var $_user = false;
  var $_pass = false;
  var $_debug = false;

  function CoovaRadiusClient($url, $user, $pass) {
    $this->_url = $url;
    $this->_user = $user;
    $this->_pass = $pass;
  }

  function ewtClient() {
    return new EWTClient($this->_url, $this->_user, $this->_pass);
  }

  function debugTable($table, $rows, $name = 'Table') {
    if ($this->_debug) {
      echo $name.":\n";
      foreach ($rows[$table] as $n => $r) {
	echo 'ID: '.$r['uid']."\n";
	foreach ($r as $n => $r) {
	  if ($n == 'uid') continue;
	  echo "\t$n = $r\n";
	}
      }
    }
  }

  function queryTable($table, $start = 0, $limit = 100, $query = '', $sort = false, $desc = true) {
    $ewt = $this->ewtClient();
    $rows = $ewt->getTableRows($table, $start, $limit, $query, $sort, $desc);
    $ewt->close();

    $this->debugTable($table, $rows, $table);
    return $rows;
  }

  function users($limit = 100, $query = '') {
    return $this->queryTable('radUser', 0, $limit, $query);
  }

  function accessPoints($limit = 100, $query = '') {
    return $this->queryTable('radAccessPoint', 0, $limit, $query);
  }


  /** **********************************************
   *  Users and Realms
   */

  function getUser($username, $realm = '', $realmId = null) {
    $ewt = $this->ewtClient();
    $res = $ewt->doAction('coova-users', 'get', 
			  array('userName' => $username,
				'realmName' => $realm,
				'realmId' => $realmId));
    $ewt->close();
    return $res;
  }

  function getUserByForeignUser($uid, $realm) {
    return $this->get('radUser', '&foreignUserIdEqualTo='.urlencode($uid).'&foreignUserRealmEqualTo='.urlencode($realm), 0, 1);
  }

  function createUser($data) {
    $ewt = $this->ewtClient();
    $res = $ewt->doAction('coova-users', 'create', $data);
    $ewt->close();
    return $res;
  }

  function newUser($data) {
    $ewt = $this->ewtClient();
    $ewt->addTableRow('radUser', $data);
    $ewt->close();
  }

  function saveUser($data) {
    $this->save('radUser', $data);
  }

  function deleteUser($data) {
    $ewt = $this->ewtClient();
    $res = $ewt->doAction('coova-users', 'delete', $data);
    $ewt->close();
    return $res;
  }

  function getRealms() {
    return $this->get('radRealm', '&isLocalEqualTo=true');
  }

  function getRealm($realmName) {
    return $this->get('radRealm', '&realmEqualTo='.urlencode($realmName), 0, 1);
  }

  function getNetworkUserPerm($userId, $networkId) {
    return $this->get('radNetUser', '&networkIdEqualTo='.$networkId.'&userIdEqualTo='.$userId, 0, 1);
  }

  function saveNetworkUserPerm($data) {
    $this->save('radNetUser', $data);
  }

  function getNetworkUserPerms($networkId) {
    $rows = $this->get('radNetUser', '&networkIdEqualTo='.$networkId);
    if ($rows) {
      $result = array();
      foreach ($rows as $n => $r) { 
	$result[$r['userId']] = $r;
      }
      return $result;
    }
  }

  /** **********************************************
   *  Networks
   */

  function getNetworks() {
    return $this->get('radNetwork', '&disabledEqualTo=false');
  }

  function getNetwork($name) {
    return $this->get('radNetwork', '&nameEqualTo='.urlencode($name), 0, 1);
  }

  function getNetworkById($networkId) {
    return $this->get('radNetwork', '&idEqualTo='.urlencode($networkId), 0, 1);
  }


  /** **********************************************
   *  Access Points
   */

  function getAccessPoint($mac) {
    return $this->get('radAccessPoint', '&calledStationIdEqualTo='.urlencode($mac), 0, 1);
  }

  function validip($ip) {
    if (!empty($ip) && ip2long($ip)!=-1) {
      return true;
    } else {
      return false;
    }
  }
  
  function getip() {
    if ($this->validip($_SERVER["HTTP_CLIENT_IP"])) {
      return $_SERVER["HTTP_CLIENT_IP"];
    }
    foreach (explode(",",$_SERVER["HTTP_X_FORWARDED_FOR"]) as $ip) {
      if ($this->validip(trim($ip))) {
	return $ip;
      }
    }
    if ($this->validip($_SERVER["HTTP_X_FORWARDED"])) {
      return $_SERVER["HTTP_X_FORWARDED"];
    } elseif ($this->validip($_SERVER["HTTP_FORWARDED_FOR"])) {
      return $_SERVER["HTTP_FORWARDED_FOR"];
    } elseif ($this->validip($_SERVER["HTTP_FORWARDED"])) {
      return $_SERVER["HTTP_FORWARDED"];
    } elseif ($this->validip($_SERVER["HTTP_X_FORWARDED"])) {
      return $_SERVER["HTTP_X_FORWARDED"];
    } else {
      return $_SERVER["REMOTE_ADDR"];
    }
  }
  
  function getAccessPointByAddr() {
    var_dump($this->getip());
    return $this->get('radAccessPoint', '&wanIpAddressEqualTo='.urlencode($this->getip()), 0, 1);
  }

  function getAccessPointsForNetwork($networkName, $limit = 0) {
    $network = $this->getNetwork($networkName);
    $networkId = $network['uid'];
    return $this->get('radAccessPoint', '&networkIdEqualTo='.$networkId, 0, $limit);
  }

  function saveAccessPoint($data) {
    return $this->save('radAccessPoint', $data);
  }

  function setAccessPointOwner($userId, $mac, $networkId = false, $sharedSecret = false) {
    $data = array('ownerId' => $userId, 'mac' => $mac);

    if ($networkId)
      $data['networkId'] = $networkId;

    if ($sharedSecret)
      $data['sharedSecret'] = $sharedSecret;

    $ewt = $this->ewtClient();
    $res = $ewt->doAction('coova-network', 'associate-ap', $data);
    $ewt->close();
    return $res;
  }


  /** **********************************************
   *  Access Policies
   */

  function getAccessPolicies($limit = 0) {
    return $this->get('radAccessPolicy', '&disabledEqualTo=false', 0, $limit);
  }

  function getAccessPoliciesForOwner($userId, $limit = 0) {
    return $this->get('radAccessPolicy', '&disabledEqualTo=false&ownerIdEqualTo='.$userId, 0, $limit);
  }

  function getAccessPoliciesForNetwork($networkId) {
    return $this->get('radAccessPolicy', '&disabledEqualTo=false&networkIdEqualTo='.$networkId);
  }

  function getNetworkAccessPolicy($networkId, $policyName) {
    return $this->get('radAccessPolicy', '&disabledEqualTo=false&networkIdEqualTo='.$networkId.'&nameEqualTo='.urlencode($policyName), 0, 1, true);
  }

  function getAccessPolicy($policyId) {
    return $this->get('radAccessPolicy', '&idEqualTo='.$policyId, 0, 1);
  }

  function saveAccessPolicy($data) {
    return $this->save('radAccessPolicy', $data);
  }


  /** **********************************************
   *  Provisioning and Access Codes
   */

  function checkClientDevice($data) {
    $ewt = $this->ewtClient();
    $res = $ewt->doAction('coova-devices', 'check', $data);
    $ewt->close();
    return $res;
  }

  function provisionAccessCode($data) {
    $ewt = $this->ewtClient();
    $res = $ewt->doAction('coova-access', 'provision', $data);
    $ewt->close();
    return $res;
  }

  function provisionOneTimePassword($called, $calling, $attributes = null) {
    $data = array('called' => $called, 
		  'calling' => $calling, 
		  'attributes' => $attributes);

    $ewt = $this->ewtClient();
    $res = $ewt->doAction('coova-access', 'provision-otp', $data);
    $ewt->close();

    return $res;
  }

  function provisionSmartClient($called, $calling, $username, $password) {
    $data = array('called' => $called, 
		  'calling' => $calling,
		  'username' => $username,
		  'password' => $password);

    $ewt = $this->ewtClient();
    $res = $ewt->doAction('coova-access', 'smartclient', $data);
    $ewt->close();
    return $res;
  }

  function hasAccessCodes($userId) {
    $ac = $this->get('radAccessCode', '&ownerIdEqualTo='.$userId, 0, 1);
    if ($ac['uid']) {
      return true;
    }
    return false;
  }

  function checkAccessCode($username, $realmId) {
    $ac = $this->get('radAccessCode', '&usernameEqualTo='.urlencode($username).'&realmIdEqualTo='.$realmId, 0, 1);
    if ($ac['uid']) {
      $ewt = $this->ewtClient();
      $res = $ewt->doAction('coova-access', 'voucher-is-valid', $ac);
      $ewt->close();

      // if valid, return the access-code array
      if ($res['valid']) return $ac;

      // otherwise, return the valid check response
      return $res;
    }
    return null;
  }

  function checkUserAccessCodes($ownerId) {
    $ewt = $this->ewtClient();
    $codes = $ewt->doAction('coova-access', 'check-user-codes', array('ownerId'=>$ownerId));
    $ewt->close();
    return $codes;
  }

  function lastUserAccessCodes($ownerId) {
    $ewt = $this->ewtClient();
    $codes = $ewt->doAction('coova-access', 'last-user-code', array('ownerId'=>$ownerId));
    $ewt->close();
    return $codes;
  }

  function checkAccessVoucher($voucherId) {
    $ewt = $this->ewtClient();
    $status = $ewt->doAction('coova-access', 'check-voucher-status', array('accessVoucherId'=>$voucherId));
    $ewt->close();
    return $status;
  }

  function provisionMacBasedAccessCode($prefix, $mac, $realmId, $data) {
    $username = $prefix.$mac;
    $ac = $this->checkAccessCode($username, $realmId);
    if ($ac) return $ac;
    $data['username'] = $username;
    $ac = $this->provisionAccessCode($data);
    return $ac;
  }

  function getNetworkMapKey($networkId) {
    $ewt = $this->ewtClient();
    $status = $ewt->doAction('coova-maps', 'map-key', array('networkId'=>$networkId));
    $ewt->close();
    return $status['key'];
  }

  /** **********************************************
   *  Attributes and Attribute Sets
   */

  function getAttributeSets($limit = 0) {
    return $this->get('radAttributeSet', '', 0, $limit);
  }


  /** **********************************************
   *  Sessions
   */

  function getUserSessions($userId, $start = 0, $limit = 10) {
    return $this->get('radSession', '&userIdEqualTo='.$userId, $start, $limit);
  }

  function getNetworkSessions($networkId, $start = 0, $limit = 10) {
    return $this->get('radSession', '&networkIdEqualTo='.$networkId, $start, $limit);
  }


  /** **********************************************
   *  Walled Garden
   */

  function getWalledGardenForNetwork($networkId, $limit = 0) {
    return $this->get('radWalledGarden', '&networkIdEqualTo='.$networkId, 0, $limit);
  }

  function saveWalledGarden($data) {
    return $this->save('radWalledGarden', $data);
  }

  function deleteWalledGarden($data) {
    $ewt = $this->ewtClient();
    $res = $ewt->deleteTableRow('radWalledGarden', $data);
    $ewt->close();
  }


  /** **********************************************
   *  Payment methods
   */

  function provisionByPayment($data) {
    $ewt = $this->ewtClient();
    $res = $ewt->doAction('coova-payment', 'provision', $data);
    $ewt->close();
    return $res;
  }

  function paymentNotification($data) {
    $ewt = $this->ewtClient();
    $res = $ewt->doAction('coova-payment', 'notification', $data, '', true);
    $ewt->close();
    return $res;
  }

  function getPaymentProfilesForOwner($userId, $networkId, $limit = 0) {
    return $this->get('radPaymentProfile', '&ownerIdEqualTo='.$userId.'&networkIdEqualTo='.$networkId, 0, $limit);
  }

  function savePaymentProfile($data) {
    return $this->save('radPaymentProfile', $data);
  }

  function get($table, $query, $start = 0, $limit = 0, $dbg = false) {
    $single = ($limit == 1);
    if ($single) $limit++;
    //    if ($dbg) var_dump($query);
    $rows = $this->queryTable($table, $start, $limit, $query); 

    if ($rows[$table]) {
      if (!$single) return $rows[$table];
      foreach ($rows[$table] as $n => $r) { 
	return $r; 
      }
    }
    return false;
  }

  function save($table, $data) {
    $ewt = $this->ewtClient();
    if ($data['uid']) {
      $result = $ewt->updateTableRow($table, $data);
    } else {
      $result = $ewt->addTableRow($table, $data);
    }
    $ewt->close();
    return $result;
  }

  function stripId($s) {
    return preg_replace('/ \(\d+\)$/', '', $s);
  }

  function encrypt($data, $key = null) {
    $size = mcrypt_get_iv_size(MCRYPT_RIJNDAEL_128, MCRYPT_MODE_CBC);
    $iv = mcrypt_create_iv($size, MCRYPT_DEV_URANDOM);

    $text = json_encode($data);

    $text_add = strlen($text)%8;
    for($i=$text_add; $i<8; $i++){
      $text .= chr(0);
    }
    
    return strtr(base64_encode(mcrypt_encrypt(MCRYPT_RIJNDAEL_128, isset($key) && $key != '' ? $key : $this->key(), 
					       $text, MCRYPT_MODE_ECB, $iv)),'+/=','-_~');
  } 

  function decrypt($encrypted_text, $key = null) {
    $size = mcrypt_get_iv_size(MCRYPT_RIJNDAEL_128, MCRYPT_MODE_CBC);
    $iv = mcrypt_create_iv($size, MCRYPT_DEV_URANDOM);
    
    $text = trim(mcrypt_decrypt(MCRYPT_RIJNDAEL_128, isset($key) && $key != '' ? $key : $this->key(), 
				base64_decode(strtr($encrypted_text,'-_~','+/=')), MCRYPT_MODE_ECB, $iv));

    return json_decode($text, true);
  }

  function createPassword($len = 8) {
    $chars = "abcdefghijkmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ023456789";
    srand((double)microtime()*1000000);
    $i = 0;
    $pass = '' ;
    while ($i < $len) {
      $num = rand() % strlen($chars);
      $tmp = substr($chars, $num, 1);
      $pass = $pass . $tmp;
      $i++;
    }
    return $pass;
  }

  function createAdministrativeUser($username, $realm, $foreignRealm, 
				    $password, $radsecret, $uamsecret, $uid, $aset) {

    $data = array('realmName' => $realm,
		  'userName' => $username, 
		  'password' => $password,
		  'administrativeUser' => true,
		  'ownsAccessPoints' => true,
		  'anonApOk' => true,
		  'foreignUserId' => $uid,
		  'foreignUserRealm' => $foreignRealm,
		  'attributeSetId' => $aset,
		  'network' => array('name' => $username, 'uamsecret' => $uamsecret),
		  'realm' => array('realm' => $username),
		  'sharedSecret' => $radsecret);
    
    return $this->createUser($data);
  }

  function createNetworkUser($networkName, $username, $password, $policyName = null) {

    $data = array('realmName' => $networkName, 
		  'ownsClientDevices' => true,
		  'userName' => $username, 
		  'password' => $password,
		  'netUser' => array('networkName' => $networkName,
				     'accessPolicyName' => $policyName));
    
    return $this->createUser($data);
  }

  function registerNetworkUser($realmId, $networkId, $accessPolicyId, $username, $password, $email) {

    $data = array('realmId' => $realmId,
		  'ownsClientDevices' => true,
		  'userName' => $username, 
		  'password' => $password,
		  'email' => $email,
		  'netUser' => array('networkId' => $networkId,
				     'accessPolicyId' => $accessPolicyId));
    
    return $this->createUser($data);
  }

  function createAccessPolicy($data) {
    return $this->saveAccessPolicy($data);
  }

  function getNetworkUsers($networkName, $start, $limit) {
    $realm = $this->getRealm($networkName);
    if ($realm['uid']) {
      $table = 'radUser';
      return $this->queryTable($table, $start, $limit, "&realmIdEqualTo=".$realm['uid']);
    }
  }

  function key() {
    if (!$_SESSION['__key__']) 
      $_SESSION['__key__'] = rand(100000000,999999999);

    return $_SESSION['__key__'];
  }

  function sessionTimeout($v) { return 'Session-Timeout = '.$v; }

  function chillispotConfig($v) { return 'ChilliSpot-Config += '.$v; }

  function chillispotBandwidthMaxUp($kbps) { return 'ChilliSpot-Bandwidth-Max-Up = '.$kbps; }

  function chillispotBandwidthMaxDown($kbps) { return 'ChilliSpot-Bandwidth-Max-Down = '.$kbps; }

  function chillispotMaxInputOctets($bytes) { return 'ChilliSpot-Max-Input-Octets = '.$bytes; }

  function chillispotMaxOutputOctets($bytes) { return 'ChilliSpot-Max-Output-Octets = '.$bytes; }

  function chillispotMaxTotalOctets($bytes) { return 'ChilliSpot-Max-Total-Octets = '.$bytes; }

  function filterID($v) { return 'Filter-ID = '.$v; }

  function close() { }
}

?>
