<?php
/**
 * Drupal HotSpot Module * http://drupal.org/project/Hotspot
 * Copyright 2008-2011 (c) Coova Technologies, LLC.
 * Licensed under the GNU General Public License.
 */

require_once drupal_get_path('module', 'hotspot').'/hotspot.inc';

function hotspot_render($tid = 0) {
  $tid = (int) $tid;

  if ($_REQUEST['page']) {
    if ($_REQUEST['page'] == 'transport') {
      print "<!-- Colubris -->\n";
      print "<!-- Custom -->\n";
      print '<html><title>Redirecting...</title><head>';
      print '<META HTTP-EQUIV=Refresh CONTENT="0; URL='.
	url('hotspot/colubris',array('query'=>'res=success','absolute'=>true)).'">';
      print '</head></html>';
      exit;
    }
    
    if ($_REQUEST['page'] == 'fail') {
      print "<!-- Colubris -->\n";
      print "<!-- Custom -->\n";
      print '<html><title>Redirecting...</title><head>';
      print '<META HTTP-EQUIV=Refresh CONTENT="0; URL='.
	url('hotspot/colubris',array('query'=>'res=failed','absolute'=>true)).'">';
      print '</head></html>';
      exit;
    }
    
    if ($_REQUEST['page'] == 'session') {
      print "<!-- Colubris -->\n";
      print "<!-- Custom -->\n";
      print '<html><title>Session</title>';
      print 'Still need to implement this...';
      print '</html>';
      exit;
    }
    
    if ($_REQUEST['page'] == 'logo') {
      exit;
    }
  }

  if (isset($_REQUEST['_i']) && isset($_REQUEST['_p'])) {
    $_SESSION['hotspot'] = 'true';
    $_SESSION['controller'] = 'colubris';
    $_SESSION['uamqs'] = $_SERVER['QUERY_STRING'];
    $_SESSION['logouturl'] = 'http://'.$_REQUEST['_i'].':8080/goform/HtmlLogout';
    $_SESSION['sessionurl'] = 'http://'.$_REQUEST['_i'].':8080/session.asp';

    colubris_set('ip','_c');
    colubris_set('nasid','_n');
    colubris_set('loginurl','_l');
    colubris_set('uamip', '_i');
    colubris_set('uamport','_p');
    colubris_set('userurl','_o');
    colubris_set('called','_C');
    colubris_set('mac','_m');
    colubris_set('reply','_r');

    module_invoke_all('hotspot_loginpage');

    $_SESSION['res'] = 'notyet';

    // the colubris will remember the last _r, so this might not be good idea. 
    //    if ($_REQUEST['_r'] != '') {
    //      $_SESSION['res'] = 'failed';
    //    }
  

    header('Location: '. url('hotspot/colubris', array('absolute'=>true)), TRUE, 302);
    print '';
    exit;
  } else {
    $res = $_REQUEST['res'];
    if ($res == 'success' || $res == 'failed') 
      $_SESSION['res'] = $res;
  }

  if ($_SESSION['res'] == 'notyet') {
    if (hotspot_setting('method', 'redir') != 'js') {
      if (hotspot_setting('provisioning', 'none') == 'anonymoususer') {
	$username = hotspot_setting('auto_username', '');
	$password = hotspot_setting('auto_password', '');
      }
    }
  
    if ($item = module_invoke_all('hotspot_dologin')) {
      if (is_array($item)) {
	$username = $item['username'];
	$password = $item['password'];
      }
    }
  }

  if (!$username) {
    $username = hotspot_get_username($_REQUEST);
  }

  if ($username) {
    if (!$password) {
      $password = hotspot_get_password($_REQUEST);
    }

    $url = colubris_login_url($username, $password);

    header('Location: '. $url, TRUE, 302);
    print hotspot_wispr_xml($url);

    exit();
  }

  if (hotspot_get_param('res') == 'notyet') {
    if (hotspot_setting('initial_redirect', '') != '') {
      drupal_goto(hotspot_setting('initial_redirect', ''));
      return;
    }
  }
  
  if (hotspot_get_param('res') == 'success') {
    $success_redirect = hotspot_setting('success_redirect', '');
    if ($success_redirect != '') {
      if ($success_redirect == '<original>') {
	drupal_goto(hotspot_get_param('userurl'));
	return;
      } else if ($success_redirect != '<popup>') {
	drupal_goto(hotspot_setting('success_redirect', ''));
	return;
      }
    }
  }

  if (is_numeric($_SESSION['renderNode'])) {
    $node = node_load($_SESSION['renderNode']);
    print theme('hotspot_page', $node);
    return;
  }

  print theme('page', hotspot_render_loginform());
}

function colubris_login_url($u, $p) {
  return colubris_get('loginurl') . '?username=' . $u . '&password=' . $p;
}

function colubris_set($n, $k) {
  if (isset($_REQUEST[$k])) $_SESSION[$n] = $_REQUEST[$k];
}

function colubris_get($n) {
  return $_SESSION[$n];
}

function hotspot_render_loginform($tid = 0) {

  if (hotspot_setting('enabled', 'true') != 'true') {

    $content = hotspot_content($tid, 'disabled');

  } else {

    $content = hotspot_content($tid, colubris_get('res'));

  }

  return $content;
}

function theme_hotspot_page(&$node) {
  return node_view($node, false, true);
}

function theme_hotspot_disabled(&$node) {
  return '<p id="hotDisabled">HotSpot services are currently not available.</p>';
}

function theme_hotspot_notyet(&$node) {
  $userAgent = $_SERVER['HTTP_USER_AGENT'];

  if (preg_match("/profile\/midp/i", $userAgent) || preg_match("/configuration\/cldc/i", $userAgent)) {

    return theme_hotspot_loginform($node);

  } else {
    $html = theme('hotspot_loginform', $node);

    if ($a = module_invoke_all('hotspot_links'))
      foreach ($a as $b) $html .= $b;

    return $html;
  }
}

function theme_hotspot_failed(&$node) {
  $reply = $_GET['reply'];
  if ($reply == '') $reply = 'Authentication failed';
  return '<p id="hotReply">'.$reply.'</p>'.theme('hotspot_loginform', $node);
}

function theme_hotspot_success(&$node) {
  $content = '<p>You are now on-line!</p>';
  $url = hotspot_get_param('userurl');
  if ($url != '') {
    $content .= '<p>Original URL: <a href="'.$url.'">'.$url.'</a></p>';
  }
  $url = hotspot_get_param('logouturl');
  if ($url != '') {
    $content .= '<p><a href="'.$url.'">Logout</a></p>';
  }
  return $content;
}

function theme_hotspot_loginform() 
{
  $html = '<div id="hotLoginForm">';

  if (hotspot_setting('loginform', 'true') == 'true') {
    $html .= '
<form id="hotForm" name="form1" method="post" action="' . hotspot_get_param('loginurl') . '">
  <table id="hotLoginFormTable" border="0" cellpadding="5" cellspacing="0">
  <tbody>
  <tr>
    <td class="hotLoginFormLabel hotUsernameLabel">Username:</td>
    <td class="hotLoginFormInput hotUsernameInput"><input id="hotUsername" type="text" name="username" size="20" maxlength="255"></td>
  </tr>
  <tr>
    <td class="hotLoginFormLabel hotPasswordLabel">Password:</td>
    <td class="hotLoginFormInput hotPasswordInput"><input id="hotPassword" type="password" name="password" size="20" maxlength="255"></td>
  </tr>
  <tr>
    <td class="hotLoginFormSubmit" colspan="2"><input id="hotSubmit" type="submit" name="login" value="login"></td>
  </tr>
  </tbody>
</table>
</form>';
  }

  $html .= '</div>';

  return $html;
}
