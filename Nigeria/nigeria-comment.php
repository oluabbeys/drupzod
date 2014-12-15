<?php
ini_set("display_errors", "off");
$mesa=$_GET['msg'];
$q=$_GET['code'];


?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<link href="../css/styles.css" type="text/css" rel="stylesheet" media="screen" />
<title>ZODML Comment Pop up</title>

<!-- Start of StatCounter Code for Dreamweaver -->
<script type="text/javascript">
var sc_project=9060187; 
var sc_invisible=1; 
var sc_security="8717740f"; 
var scJsHost = (("https:" == document.location.protocol) ?
"https://secure." : "http://www.");
document.write("<sc"+"ript type='text/javascript' src='" +
scJsHost+
"statcounter.com/counter/counter.js'></"+"script>");
</script>
<noscript><div class="statcounter"><a title="free hit
counter" href="http://statcounter.com/" target="_blank"><img
class="statcounter"
src="http://c.statcounter.com/9060187/0/8717740f/1/"
alt="free hit counter"></a></div></noscript>
<!-- End of StatCounter Code for Dreamweaver -->
</head>

<body>
<div id="email_a_friend_form_seyi">
<table border="0" bordercolor="#000000">
  <tr bordercolor="#000000" >
    <td width="400"><form id="form1" name="form1" method="post" action="nigeria-commentp.php">
      <table width="350" border="0">
        <tr align="center">
          <td colspan="2" align="center"><div style="padding:10px; color:#EC9F00; font-size:14px;"> Please Enter Your Comment</div></td>
          </tr>
         
          <td width="80">Email</td>
          <td width="310"><label>
            <input type="text" name="email" id="ur_email" value="<?php echo@$email; ?>" />
            <input type="hidden" name="numb" value="<?php echo $q; ?>">
          </label></td>
        </tr>
        
        <tr>
          <td width="80">&nbsp;</td>
          <td width="310">&nbsp;</td>
        </tr>
        <tr>
       
          <td>Name</td>
          <td><label>
            <input name="name" type="text" id="ur_email" value="<?php echo@$name; ?>" />
          </label></td>
        </tr>
         <tr>
          <td width="80">&nbsp;</td>
          <td width="310">&nbsp;</td>
        </tr>
        <tr>
          <td>Comment</td>
          <td><label>
          <textarea type="text" name="comment" id="msg_friend_email_seyi" ><?php echo@$comment; ?></textarea>
           <?php // <textarea name="comment" id="ur_email_Seyi" ></textarea> ?>
          </label></td>
        </tr>
         <tr>
          <td width="80">&nbsp;</td>
          <td width="310">&nbsp;</td>
        </tr>
        <tr>
          <td colspan="2"><label>
          <?php
          require_once('recaptchalib.php');
          $publickey = "6LeaNe0SAAAAAD_k-yxZlOyJqFiWdPmSP42ppTpG"; // you got this from the signup page
          echo recaptcha_get_html($publickey);
        ?>
            <br/>            
              <div align="center">
                <input type="submit" name="Submit" id="submit_friend" value="Post" />
              </div>
          </label></td>
          </tr>
         <tr>
          <td colspan="2" align="center"><?php echo $message; ?>  <div style="padding:3px; font-family:Verdana, Geneva, sans-serif; font-size:12px; font-weight:900; color:#EC9F00; margin:0px 0px 0px 10px;">  <?php echo "$mesa" ?> </div> </td></tr>
        <tr>
      </table>
       
        </form>
    </td>
  </tr>
</table>
</div>
</body>
</html>
