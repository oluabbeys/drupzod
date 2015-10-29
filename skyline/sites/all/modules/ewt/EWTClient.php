<?php
/**
 * Drupal CoovaEWT Module * http://www.coova.com/CoovaEWT
 * Copyright 2008-2009 (c) Coova Technologies, LLC
 * Licensed under the GNU General Public License.
 */

class EWTClient {
  var $_ch = false;
  var $_url = false;
  var $_user = false;
  var $_pass = false;
  var $_trace = false; //true;

  function EWTClient($url, $user = false, $pass = false) {
    $this->_ch = curl_init();
    $this->_url = $url;
    $this->_user = $user;
    $this->_pass = $pass;
  }

  function trace($m, $u, $d, $s) {
    if ($this->_trace) {
      error_log ('-> '.$m.' '.$u);
      if ($d) error_log("=> ".$d);
      error_log("<= ".$s);
    }
    return $s;
  }

  function get($url) {
    if( !curl_setopt($this->_ch, CURLOPT_URL, $url) ) 
      return 'FAIL: curl_setopt(CURLOPT_URL)';

    curl_setopt($this->_ch, CURLOPT_CONNECTTIMEOUT, 10);
    curl_setopt($this->_ch, CURLOPT_TIMEOUT, 30);
    curl_setopt($this->_ch, CURLOPT_AUTOREFERER, 1);
    curl_setopt($this->_ch, CURLOPT_FOLLOWLOCATION, 0);
    curl_setopt($this->_ch, CURLOPT_SSL_VERIFYPEER, FALSE);
    curl_setopt($this->_ch, CURLOPT_SSL_VERIFYHOST, FALSE);
    curl_setopt($this->_ch, CURLOPT_SSLVERSION, 3);
    curl_setopt($this->_ch, CURLOPT_RETURNTRANSFER, 1);
    curl_setopt($this->_ch, CURLOPT_PUT, 0);
    curl_setopt($this->_ch, CURLOPT_FORBID_REUSE, 1);
    curl_setopt($this->_ch, CURLOPT_HTTPHEADER, array('Expect:'));
    //curl_setopt($_ch, CURLOPT_HEADER, 1);

    if ($this->_user &$this->_pass)
      curl_setopt($this->_ch, CURLOPT_USERPWD, $this->_user.':'.$this->_pass);

    $content = false;
    $result = $this->trace('get', $url, $content, curl_exec($this->_ch));
    return $result;
  }

  function post($url, $content, $content_type = 'application/octets') {
    $temp = tmpfile();
    $tempsize = fwrite($temp, $content);
    fseek($temp, 0);

    $headers = array('Expect:', 'Content-Type: '.$content_type);

    if( !curl_setopt($this->_ch, CURLOPT_URL, $url) ) 
      return 'FAIL: curl_setopt(CURLOPT_URL)';

    curl_setopt($this->_ch, CURLOPT_CONNECTTIMEOUT, 10);
    curl_setopt($this->_ch, CURLOPT_TIMEOUT, 30);
    curl_setopt($this->_ch, CURLOPT_AUTOREFERER, 1);
    curl_setopt($this->_ch, CURLOPT_FOLLOWLOCATION, 0);
    curl_setopt($this->_ch, CURLOPT_SSL_VERIFYPEER, FALSE);
    curl_setopt($this->_ch, CURLOPT_SSL_VERIFYHOST, FALSE);
    curl_setopt($this->_ch, CURLOPT_SSLVERSION, 3);
    curl_setopt($this->_ch, CURLOPT_RETURNTRANSFER, 1);
    curl_setopt($this->_ch, CURLOPT_PUT, 1);
    curl_setopt($this->_ch, CURLOPT_FORBID_REUSE, 1);
    curl_setopt($this->_ch, CURLOPT_HTTPHEADER, $headers);
    curl_setopt($this->_ch, CURLOPT_INFILE, $temp);
    curl_setopt($this->_ch, CURLOPT_INFILESIZE, $tempsize);

    if ($this->_user &$this->_pass)
      curl_setopt($this->_ch, CURLOPT_USERPWD, $this->_user.':'.$this->_pass);

    $result = $this->trace('post', $url, $content, curl_exec($this->_ch));

    fclose($temp); 

    return $result;
  }

  function getURL($url) {
    return $this->get($url);
  }


  function putURL($url, $data) {
    return $this->post($url, json_encode($data));
  }

  function proxy($content) {
    return $this->proxy_url($this->_url.'?'.$this->urlargs(), $content);
  }

  function proxy_url($url, $content) {
    if (strlen($content) > 0) {
      return $this->post($url, $content);
    }
    else {
      return $this->get($url);
    }
  }

  function decode($obj) {
    if ($obj == '<NOOP/>') {
      error_log('EWT Permission Denied for user');
    } else {
      $result = json_decode($obj, true);
      if ($result) return $result;
    }
  }

  function doURL($url, $data = null, $raw = false) {
    $obj = null;

    if ($data == null || $data == '') $obj = $this->getURL($url);
    else $obj = $this->putURL($url, $data);

    if ($raw) return $obj;

    if ($obj == null || $obj == '') return array();
    return $this->decode($obj);
  }

  function doAction($service, $action, $data, $params = '', $raw = false) {

    $url = $this->_url.'?'.$this->urlargs(array('res'=>'service','s'=>$service,'action'=>$action));

    $reply = $this->doURL($url, array( $service => $data ), $raw);

    if ($raw)
      return $reply;

    return $this->unwrapService($reply, $service);
  }

  function urlargs_($args) {
    $output = false;
    foreach ($args as $k => $v) {
      if ($output) $output .= '&';
      $output .= $k.'='.urlencode($v);
    }
    return $output;
  }

  function urlargs($override = false, $more = null) {
    $args = array();
    parse_str($_SERVER['QUERY_STRING'], $args);
    if (is_array($override)) foreach($override as $n => $v) $args[$n] = $v; 
    unset($args['q']);
    unset($args['ewturl']);
    $args['session'] = session_id();
    if ($more) $query = $more.'&';
    $query .= $this->urlargs_($args);
    return $query;
  }

  function getTableRows($table, $start=0, $limit=10, $query = null, $sort = false, $desc = true, $data = null) {
    return $this->getTableRowsSrv('table', $table, $start, $limit, $query, $sort, $desc, $data);
  }

  function getTableRowsSrv($service, $table, $start=0, $limit=10, $query = null, $sort = false, $desc = true, $data = null) {
    $args = array('res' => 'service', 's' => $service, 'table' => $table);
    if ($start > 0) $args['start'] = $start;
    if ($limit > 0) $args['max'] = $limit;
    if ($sort) $args['sort'] = $sort;
    else $args['sort'] = 'id';
    $args['desc'] = $desc ? 'true' : 'false';

    $url = $this->_url.'?'.$this->urlargs($args, $query);
    if ($data) $data = array( $service => $data );
    $obj = $this->doURL($url, $data);
    $obj = $this->unwrapService($obj);
    return $obj;
  }

  function addTableRow($table, $row) {
    $url = $this->_url.'?'.$this->urlargs(array('res' => 'service', 's' => 'table',
						'table' => $table, 'new' => 'true'));
    return $this->doURL($url, $row);
  }

  function updateTableRow($table, $row) {
    $url = $this->_url.'?'.$this->urlargs(array('res'=>'service','s'=>'table','table'=>$table,'update'=>'true'));
    return $this->doURL($url, $row);
  }

  function deleteTableRow($table, $row) {
    $url = $this->_url.'?'.$this->urlargs(array('res'=>'service','s'=>'table','table'=>$table,'delete'=>'true'));
    return $this->doURL($url, $row);
  }

  function getValue($obj, $name) {
    $r = $obj[$name];
    if ($r == null) return $obj;
    if (is_array($r) &$r[0])
      foreach ($r as $r)
	return $r;
    return $r;
  }

  function printTable($table) {
    $rows = $this->getTableRows($table, 0, 2);
    echo $rows['count']."\n";
    foreach ($rows[$table] as $n => $r) {
      echo "Entry $n:\n";
      echo "ID=".$r['uid']."\n";
      foreach ($r as $n => $r) {
	echo "$n=$r\n";
      }
    }
  }

  function unwrapService($obj, $name = false) {
    $obj = $this->getValue($obj, 'service');
    if ($name) $obj = $this->getValue($obj, $name);
    return $obj;
  }

  function close() {
    curl_close($this->_ch);
  }
}


?>
