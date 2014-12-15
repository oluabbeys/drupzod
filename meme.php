<?php
/*
 
// Modified version of the standard cPanel login page to allow direct login to a specific webmail application.
// Must set $host , $login_path , and $mail_app, defaults to cPanel proxy subdomains and SquirrelMail
 
$host = 'zodml.org';
 
// Uncomment one of the following to set login URL type
#$login_path = 'http://webmail.'.$host.'/login/'; // if using cPanel proxy subdomains, i.e. webmail.example.com
$login_path = 'http://'.$host.':2095/login/'; // standard cPanel webmail login
# $login_path = 'https://'.$host.':2096/login/'; // secure cPanel webmail login

// Uncomment one of the following to set the desired webmail application
# $mail_app = '/horde/'; // Read Mail Using Horde
#$mail_app = '/3rdparty/squirrelmail/'; // Read Mail Using SquirrelMail
$mail_app = '/3rdparty/roundcube/'; // Read Mail Using RoundCube

 ?>

<div align="center">
<strong>Webmail Login</strong>
<form action="<?php echo $login_path; ?>" method="post">
<input name="login_theme" type="hidden" value="cpanel" /><br />
<label><strong>Email</strong></label><br />
<input id="user" name="user" size="24" type="text" tabindex="1" /><br />
<label><strong>Password</strong></label><br />
<input id="pass" name="pass" size="16" type="password" tabindex="2" /><br />
<input id="login" class="input-button" type="submit" value="Login" tabindex="3" /><br />
<input name="goto_uri" type="hidden" value="<?php echo $mail_app; ?>" />
</form>

<script type="text/javascript"><!--
var init = function() {
document.getElementById("user").value = '';
document.getElementById("pass").value = '';
document.getElementById("user").focus();
};
if( window.addEventListener ) {
window.addEventListener('load',init,false);
} else if( document.addEventListener ) {
document.addEventListener('load',init,false);
}
// --></script>

</div>
*/
?>