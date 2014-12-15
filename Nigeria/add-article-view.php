<?php
include("scripts/config.php");
$today=date('Y-m-d');
$oneid=$_GET['id'];

$result=mysql_query("select * from add_articles where id='$oneid'");
$row=mysql_fetch_array($result);



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
    ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
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
<style type="text/css">
<!--
.style1 {font-size: 12px}
#content_holder .tabber .tabbertab #formail_add table tr td {
	text-align: justify;
	font-weight: bold;
}
bo {
}
-->
</style>
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
          			<div id="discover_nig_content_category_article_topic">DETAIL VIEW OF SUBMITTED ARTICLE</div>
<!--CONTENT LAYER 3-->
   	<div id="add_article2">  
                    	<!--<div class="tabber">-->
<!--FIRST FORM-->
    <!-- <div class="tabbertab">-->
	  
                                                       
                                                     </div>
                                                     
                                                    
                                           			 
	  													<div class="tabber">
                                                        <div class="tabbertab">
                                                        <h2>DETAILS</h2>
                                                        <!--<div id="response"></div>-->
      	 <form method="post" action="add-article-view.php" enctype="multipart/form-data" id="formail_add">
           <table width="874" height="578" align="center" cellspacing="20" style="margin-left:20px;">
          
<tr>
                     <td width="96" height="25"><span class="style1"><strong>Name:</strong></span></td>
                     <td width="250"><?php echo $row['name']; ?></td>
                      <td width="96" height="25"><span class="style1"><strong>Time:</strong></span></td>
                     <td width="227"><?php echo $row['time']; ?></td>
                  </tr>
                  <tr>
                      <td height="25"><span class="style1"><strong>Email Address:</strong></span></td>
                      <td height="25"><?php echo $row['email']; ?></td>
                      <td height="25"><strong>Title</strong></td>
                      <td height="25"><?php echo $row['title']; ?></td>
                      </tr>
                  <tr>
                    <td height="25"><span class="style1"><strong>Date:</strong></span></td>
                    <td height="25"><?php echo $row['date']; ?></td>
                    <td><strong>Category</strong></td>
                    <td height="25" class="style1"><?php echo $row['category']; ?></td>
                  </tr>
                  <tr>
                          <td colspan="2"><a href="images/<?php echo $row['picturetwo']; ?>"><?php echo"<center><img src='images/$row[picturetwo]' width=250 height=200>" ?></a></td>
                          <td height="53" colspan="2"><a href="images/<?php echo $row['picturethree']; ?>"><?php echo"<center><img src='images/$row[picturethree]' width=250 height=200>" ?></a></td>
                        </tr>
                        <tr>
                          <td colspan="2"><a href="images/<?php echo $row['picturefour']; ?>"><?php echo"<center><img src='images/$row[picturefour]' width=250 height=200>" ?></a></td>
                          <td height="53" colspan="2"><a href="images/<?php echo $row['picturefive']; ?>"><?php echo"<center><img src='images/$row[picturefive]' width=250 height=200>" ?></a></td>
                        </tr>
                        <tr>
                          <td colspan="2"><a href="images/<?php echo $row['picturesix']; ?>"><?php echo"<center><img src='images/$row[picturesix]' width=250 height=200>" ?></a></td>
                          <td height="53" colspan="2">&nbsp;</td>
                        </tr>
                   <!--<tr>
                      <td valign="top">Contents(Article)</td>
                      <td valign="top"><textarea name="add_content" id="add_content"  required cols="80" rows="5"  class="textarea"></textarea></td>
                       <td></td>
                   </tr>-->
                  
                   
                   
                  
                   
                  
                   
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