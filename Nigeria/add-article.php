<?php
ini_set("display_errors", "off");

$mesa = $_GET['mes'];
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>ZODML | Discover Nigeria | Submit An Article</title>
<link href="../css/styles.css" type="text/css" rel="stylesheet" media="screen" />
<link href="../css/menu3.css" type="text/css" rel="stylesheet" media="screen" />
<link href="../css/bottom.css" type="text/css" rel="stylesheet" media="screen"/>
<link href="../images/favicon.ico" rel="shortcut icon" />
<link href="..css/call-for-short-stories.css" type="text/css" rel="stylesheet" media="screen"/>
<!--Photo Gallery-->
<link href="../css_pirobox/style_1/style.css" rel="stylesheet" type="text/css" />
<link rel="stylesheet" type="text/css" href="../css/css.css"/>
<link rel="stylesheet" href="../css/example.css" TYPE="text/css" MEDIA="screen">
<script type="text/javascript" src="../js/tabber.js"></script>
<script type='text/javascript' src="../js/pixreg1.js"></script>
<script type='text/javascript' src="../js/pixreg2.js"></script>
<script type='text/javascript' src='../js/jquery.hoverIntent.minified.js'></script>
<script type='text/javascript' src='../js/jquery.dcmegamenu.1.2.js'></script>
<script type="text/javascript" src="../js/jquery.pikachoose.js"></script>
<script type="text/javascript" src="../js/search.js"></script>
<!--<script type="text/javascript" src="add.js"></script>
--><script type="text/javascript" src="../js/contact.js"></script>
<!--<script type="text/javascript" src="../js/tinymce/jscripts/tiny_mce/tiny_mce.js"></script>-->
<script type="text/javascript">
$(document).ready(function($){
	$('#mega-menu-tut').dcMegaMenu({
		rowItems: '3',
		speed: 'fast'
	});
});
</script>



<script type="text/javascript">
$(function(){
	$("input:radio[name='search']").click(function(){	
		var criteria=$("input:radio[name='search']:checked").val();
		if(criteria=="Other")
		$("#select_box").enable();
	});
});

</script>

<!--GOOGLE PAGE-TRACK CODE-->
<script type="text/javascript">

  var _gaq = _gaq || [];
  _gaq.push(['_setAccount', 'UA-33455239-1']);
  _gaq.push(['_trackPageview']);

  (function() {
    var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
    ga.src = ('https:' == document.location.protocol ? 'https://' : 'http://') + 'stats.g.doubleclick.net/dc.js';
var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
  })();

</script>
<!--END OF GOOGLE PAGE-TRACK CODE-->


<script type="text/javascript">

/* Optional: Temporarily hide the "tabber" class so it does not "flash"
   on the page as plain HTML. After tabber runs, the class is changed
   to "tabberlive" and it will appear. */

document.write('<style type="text/css">.tabber{display:none;}<\/style>');
</script>
</head>

<body>


<!--BODY HOLDER-->
<div id="body_hold">
<!--HEADER-->
                <div id="header">
                <div id="subheader">
                <br />
                	<?php include("search_bar.php"); ?>
                	</div>
                </div>	
                </div>
                
<!--END OF HEADER-->
<br />
<!--MENU-->
			<div id="menu_ba2">
            	<?php include("menu.php");?>
            </div>
<!--END OF MENU-->

<!--CONTENT-->
<div id="content_holder">

                
                <!--CONTENT LAYER 2-->
                
                <!--END OF CONTENT LAYER 2-->
          			<div id="discover_nig_content_category_article_topic">SUBMIT AN ARTICLE</div>
                <!--CONTENT LAYER 3-->
   	<div id="add_article2">  
                    	<!--<div class="tabber">-->
<!--FIRST FORM-->
    <!-- <div class="tabbertab">-->
	  
                                                       
                                                     </div>
                                                     
                                                    
                                           			 
	  													<div class="tabber">
                                                        <div class="tabbertab">
                                                        <h2> Form</h2>
                                                        <!--<div id="response"></div>-->
      	 <form method="post" action="add-article2.php" enctype="multipart/form-data" id="formail_add">
           <table width="998" height="667" align="center" cellspacing="20" style="margin-left:20px;">
           <?php echo "$messag" ?> 
           
           <div style="padding:3px; font-family:Verdana, Geneva, sans-serif; font-size:12px; font-weight:900; color:#0C3; margin:0px 0px 0px 10px;">  <?php echo "$mesa" ?> </div>  
                 <tr>
                     <td colspan="5" valign="top"><p style="font-size:12px; font-family:Verdana, Geneva, sans-serif;">Articles can either be uploaded as a Word document or copied and pasted into the submission form. Please fill in all the fields. If you have used external sources (books, websites, journals, etc.), please include them in the sources field. You also have the option of uploading pictures relevant to your article. The editorial team will review your article and correspond with you via email regarding its suitability for the website.</p>
                    </td>
             </tr>
             <tr>
                     <td width="250"><p>&nbsp;</p>
                     <p>Name:</p></td>
               <td width="350"><input name="add_name" type="text" id="add_name" value="<?php echo@$name; ?>"  /></td>
                   
             </tr>
                  <tr>
                      <td>Email Address:</td>
                      <td><input name="add_email" type="text" id="add_email" value="<?php echo@$email; ?>" /></td>
                    
                  </tr>
                  <tr>
                      <td>Title (Article)</td>
                      <td><input name="add_title" type="text" id="add_title" value="<?php echo@$title; ?>" /></td>
                     
             </tr>
                   <tr>
                      <td>Category</td>
                      <td>
                      <select id="add_category" name="add_category">
                      <option selected="selected" disabled="disabled">Select</option><!--<option>Culture and arts</option><option>Education</option><option>Entertainment</option>--><!--<option>History</option><option>Literature</option><option>Nigeria:The basics</option>--><option>People</option><!--<option>Religion</option><option>Sports</option><option>Technology</option>--><option>The Diaspora</option>
                      </select>
                      </td>
                      
                   </tr>
                   <!--<tr>
                      <td valign="top">Contents(Article)</td>
                      <td valign="top"><textarea name="add_content" id="add_content"  required cols="80" rows="5"  class="textarea"></textarea></td>
                       <td></td>
                   </tr>-->
                  
                   <tr>
                      <td height="92" valign="top">Please identify any sources used</td>
                     <td valign="top"><textarea name="add_content2" id="add_content2_seyi"  required cols="80" rows="5" maxlength="450"><?php echo@$source; ?></textarea></td>
                     <td colspan="3" valign="top">e.g. book (title, author and date of publication), webpages (link and date accessed), journals (article title and author, date and edition number), etc.</td>
                   </tr>
                   
                  <tr>
                      <td valign="top">Copy and paste your article here)</td>
                      <td valign="top"><textarea name="five" id="five_seyi"><?php echo@$content; ?></textarea></td>
                    <td width="15">OR</td>
                       <td width="63" align="center"><font color="#000000"><b>**Attach a Document</b></font></td>
                       <td width="304"><input type="file" name="add_pix1" id="add_pix1_seyi"/>
                      <input type='hidden' name='size' value='30000'></td>

             </tr>
             
             <tr>
                   <td><font color="#000000"><b>*Attach First Picture</b></font></td>
                   	  <td><input type="file" name="add_pix2" id="add_pix2"/>
               <input type='hidden' name='size' value='30000'></td>
               
               <td colspan="3" rowspan="5"><center>
   <?php
          require_once('recaptchalib.php');
          $publickey = "6LeaNe0SAAAAAD_k-yxZlOyJqFiWdPmSP42ppTpG"; // you got this from the signup page
          echo recaptcha_get_html($publickey);
        ?></center></td>
             </tr>
                   
<tr>
                   <td><font color="#000000"><b>*Attach Second Picture</b></font></td>
                   	  <td><input type="file" name="add_pix3" id="add_pix2"/>
            <input type='hidden' name='size' value='30000'></td>
                    
                      
             </tr>
                   
<tr>
                   <td><font color="#000000"><b>*Attach Third Picture</b></font></td>
                   	  <td><input type="file" name="add_pix4" id="add_pix2"/>
            <input type='hidden' name='size' value='30000'></td>
                     
             </tr>
                   
                   <tr>
                   <td><font color="#000000"><b>*Attach Fourth Picture</b></font></td>
                   	  <td><input type="file" name="add_pix5" id="add_pix2"/>
            <input type='hidden' name='size' value='30000'></td>
                     
                      
                   </tr>
                   
                   <tr>
                   <td><font color="#000000"><b>*Attach Fifth Picture</b></font></td>
                   	  <td><input type="file" name="add_pix6" id="add_pix2"/>
            <input type='hidden' name='size' value='30000'></td>
                  
                      
                   </tr>

                   
                   
                   <tr>
                   <td colspan="5"><p><font color="#FF0000"><strong>*You cannot attach more than five pictures on this page. If you have more than five pictures, please send them to <font color="#5BADFF">editorial@zodml.org </font> along with your name and the title of your article.</strong></font>                     </p>
                     <p><strong><font color="#FF0000">**If you are attaching a document, please note that only MS word documents (.doc or .docx) are acceptable.</font></strong></p></td>
       	     </tr>
                   
                   <tr>
                      <td colspan="1" valign="top"><input name="stepone" type="submit" value="Submit" id="add_button"/></td>
                      <td></td>
                   </tr>
                                               
           </table>
          </form>
          
                   </div>                                    
           
               </div>                                      
                                                     
                                            
                   
                 
   </div>
                <!--END OF CONTENT LAYER 3-->
                
                <!--CONTENT LAYER 4-->
                
                <!--END OF CONTENT LAYER 4-->
                
                <!--CONTENT LAYER 5-->
                
                <!--END OF CONTENT LAYER 5-->

<!--END OF CONTENT-->
</div>

<!--FOOTER-->
<div id="footer_new_hold">
<?php include("footer.php"); ?>
</div>
<!--END OF FOOTER-->
</div>
<!--END OF THE BODY HOLDER-->
<form id="contactForm" action="../processForm.php" method="post">

  <h2>Send us an email...</h2>

  <ul>

    <li>
      <label for="senderName" class="label">Your Name</label>
      <input type="text" name="senderName" id="senderName" placeholder="Please type your name" required maxlength="40" class="input" />
    </li>

    <li>
      <label for="senderEmail" class="label">Your Email Address</label>
      <input type="email" name="senderEmail" id="senderEmail" placeholder="Please type your email address" required maxlength="50" class="input" />
    </li>

    <li>
      <label for="message" style="padding-top: .5em;" class="label">Your Message</label>
      <textarea name="message" id="message" placeholder="Please type your message" required cols="80" rows="10" maxlength="10000" class="textarea"></textarea>
    </li>
    
    <li> <center>
   <?php
          require_once('recaptchalib.php');
          $publickey = "6LeaNe0SAAAAAD_k-yxZlOyJqFiWdPmSP42ppTpG"; // you got this from the signup page
          echo recaptcha_get_html($publickey);
        ?></center>
        </li>

  </ul>

  <div id="formButtons">
    <input type="submit" id="sendMessage" name="sendMessage" value="Send Email" />
    <input type="button" id="cancel" name="cancel" value="Cancel" />
  </div>

</form>

<div id="sendingMessage" class="statusMessage"><p>Sending your message. Please wait...</p></div>
<div id="successMessage" class="statusMessage"><p>Thanks for sending your message! We'll get back to you shortly.</p></div>
<div id="failureMessage" class="statusMessage"><p>There was a problem sending your message. Please try again.</p></div>
<div id="incompleteMessage" class="statusMessage"><p>Please complete all the fields in the form before sending.</p></div>

</body>
</html>