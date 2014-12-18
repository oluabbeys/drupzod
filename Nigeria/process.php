<?php

$target = "images/";
$target = $target.basename($_FILES['add_pix1']['name']);

//getting variables passed from the forms

$name = $_POST['add_name'];
$email = $_POST['add_email']; 
$title = $_POST['add_title'];
$category = $_POST['add_category'];
$content = $_POST['add_content'];
$source = $_POST['add_content2'];
$pictureone = ($_FILES['add_pix1']['name']);

//linking up to the database
include("scripts/config.php");

if(move_uploaded_file($_FILES['add_pix1']['tmp_name'], $target)){
	include("scripts/config.php");
	mysql_query("INSERT INTO add_articles (name, email, title, category, contents, source, pictureone) VALUES ('$name', '$email', '$title', '$category', '$content', '$source', '$pictureone')");
	$msg = "<font size=\"+2\" color=\"#EC9F00\">Your article has been submitted, Thank you!!!</font>";
	//$msg = "<font color=\"#EC9F00\">Your article and the file ".basename($_FILES['add_pix1']['name'])." has been submitted, Thank you!!!</font><br />Thank you for contributing to the 'Discover Nigeria' section. We depend on efforts such as this to move the vision for this section forward.<br />Currently, your article has been submitted and our team of editors wil conduct a  review to see if it meets our requirements. You will be informed as soon as a decision is made and consequently, if and when your story will be uploaded.";
	
}
else{
	$msg = "<font color=\"#EC9F00\">There was an error uploading the file, please try again...</font>";
}

$to = "mena.odu@zodml.org";
$message .="Details of Submit an Article\r\n\r\nName: ".$name."\r\n\r\nEmail: ".$email."\r\n\r\nTitle: ".$title."\r\n\r\nCategory: ".$category;
// create email headers
$headers = 'From: '.$email."\r\n".
'Reply-To: '.$email."\r\n" .
'X-Mailer: PHP/' . phpversion();
mail($to, $name,$message, $headers); 

//auto response
$from_email ="info@zodml.org";
$respond_subject = "Add Article to Discover Nigeria section";
$respond_message = "Thank you for submitting an article for ZODML’s Discover Nigeria section. We depend on efforts such as yours to develop quality content and resources.\r\n \r\nOur team of editors will review your article to determine if it meets our requirements and will follow up with you directly regarding its status. If you have any questions, please email info@zodml.org. \r\n \r\nRegards \r\n \r\nFrom ZODML Team";
 // create email headers
$headers = 'From: '.$from_email."\r\n".
'Reply-To: '.$from_email."\r\n" .
'X-Mailer: PHP/' . phpversion();
mail($email, $respond_subject,$respond_message, $headers); 



?>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>ZODML | Discover Nigeria | Add an Article - Final Step</title>
<link href="../css/styles.css" type="text/css" rel="stylesheet" media="screen" />
<link href="../css/menu3.css" type="text/css" rel="stylesheet" media="screen" />
<link href="../css/bottom.css" type="text/css" rel="stylesheet" media="screen"/>
<link href="../images/favicon.ico" rel="shortcut icon" />
<!--Photo Gallery-->
<link href="../css_pirobox/style_1/style.css" rel="stylesheet" type="text/css" />
<link rel="stylesheet" type="text/css" href="../css/css.css"/>
<link rel="stylesheet" href="../css/example.css" TYPE="text/css" MEDIA="screen">
<script type="text/javascript" src="../js/tabber.js"></script>
<!--<script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jquery/1.4.2/jquery.min.js"></script>
<script type="text/javascript" src=" https://ajax.googleapis.com/ajax/libs/jquery/1.6/jquery.js"></script>-->
<script type='text/javascript' src="../js/pixreg1.js"></script>
<script type='text/javascript' src="../js/pixreg2.js"></script>
<script type='text/javascript' src='../js/jquery.hoverIntent.minified.js'></script>
<script type='text/javascript' src='../js/jquery.dcmegamenu.1.2.js'></script>
<script type="text/javascript" src="../js/jquery.pikachoose.js"></script>
<script type="text/javascript" src="../js/search.js"></script>
<script type="text/javascript" src="../js/contact.js"></script>
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
                <br />
<!--END OF HEADER-->

<!--MENU-->
			<div id="menu_ba2">
            	<?php include("menu.php");?>
            </div>
<!--END OF MENU-->

<!--CONTENT-->
<div id="content_holder">

                 <!--CONTENNT LAYER 1-->
                <?php include("browse3.php"); ?>
                <!--END OF CONTENT LAYER 1-->
                
                <!--CONTENT LAYER 2-->
                
                <!--END OF CONTENT LAYER 2-->
          			<div id="discover_nig_content_category_article_topic">ADD AN ARTICLE - Final step</div>
                <!--CONTENT LAYER 3-->
   
                    	<!--<div class="tabber">-->
<!--FIRST FORM-->
    <!-- <div class="tabbertab">-->
    <div style="width:1015px; height:400px; border:solid 1px #CCC; box-shadow:3px 3px 3px #444; margin:5px 0px 0px 0px;">
	     <p style="font-size:13px; margin:20px 0px 5px 20px; line-height:30px;"><?php echo "$msg"; ?></p>
         <!--<p style="font-size:12px; margin:20px 0px 5px 20px; line-height:30px;">Thank you for contributing to the 'Discover Nigeria' section. We depend on efforts such as this to move the vision for this section forward.<br />
         Currently, your article has been submitted and our team of editors wil conduct a  review to see if it meets our requirements. You will be informed as soon as a decision is made and consequently, if and when your story will be uploaded.        </p>-->
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