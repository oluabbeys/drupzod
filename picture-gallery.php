<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<meta name="keywords" content="Zaccheus Onumba Dibiaezue Memorial Libraries, ZODML, zodml.org, Picture Gallery" />
<meta name="copyright" content="Zaccheus Onumba Dibiaezue Memorial Libraries" />
<title>ZODML | Picture Gallery</title>
<link href="css/styles.css" type="text/css" rel="stylesheet" media="screen" />
<link href="css/menu_new.css" type="text/css" rel="stylesheet" media="screen" />
<link href="css/picture-bottom.css" type="text/css" rel="stylesheet" media="screen"/>
<link href="css/picture-gallery-tab.css" type="text/css" rel="stylesheet" media="screen"/>
<link href="images/favicon.ico" rel="shortcut icon" />
<script type="text/javascript" src="js/tabber.js"></script>
<script type='text/javascript' src="js/pixreg1.js"></script>
<script type='text/javascript' src="js/pixreg2.js"></script>
<script type='text/javascript' src='js/jquery.hoverIntent.minified.js'></script>
<script type='text/javascript' src='js/jquery.dcmegamenu.1.2.js'></script>
<script type="text/javascript" src="js/jquery.pikachoose.js"></script>
<script type="text/javascript" src="js/search.js"></script>


<script type="text/javascript">
$(document).ready(function($){
	$('#mega-menu-tut').dcMegaMenu({
		rowItems: '3',
		speed: 'fast'
	});
});
</script>

<script language="javascript">
			$(document).ready(
				function (){
					$("#pikame").PikaChoose({carousel:true});
				});
</script>	
<script language="javascript">
			$(document).ready(
				function (){
					$("#pikame2").PikaChoose({carousel:true});
				});
</script>	
<script language="javascript">
			$(document).ready(
				function (){
					$("#pikame3").PikaChoose({carousel:true});
				});
</script>
<script language="javascript">
			$(document).ready(
				function (){
					$("#pikame4").PikaChoose({carousel:true});
				});
</script>	
<script language="javascript">
			$(document).ready(
				function (){
					$("#pikame5").PikaChoose({carousel:true});
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
<!--Leave a comment-->
<script type="text/javascript">

var messageDelay = 2000;  // How long to display status messages (in milliseconds)

// Init the form once the document is ready
$( init );


// Initialize the form

function init() {

  // Hide the form initially.
  // Make submitForm() the form's submit handler.
  // Position the form so it sits in the centre of the browser window.
  $('#contactForm').hide().submit( submitForm ).addClass( 'positioned' );

  // When the "Send us an email" link is clicked:
  // 1. Fade the content out
  // 2. Display the form
  // 3. Move focus to the first field
  // 4. Prevent the link being followed

  $('a[href="#contactForm"]').click( function() {
    $('#content').fadeTo( 'slow', .2 );
    $('#contactForm').fadeIn( 'slow', function() {
      $('#senderName').focus();
    } )

    return false;
  } );
  
  // When the "Cancel" button is clicked, close the form
  $('#cancel').click( function() { 
    $('#contactForm').fadeOut();
    $('#content').fadeTo( 'slow', 1 );
  } );  

  // When the "Escape" key is pressed, close the form
  $('#contactForm').keydown( function( event ) {
    if ( event.which == 27 ) {
      $('#contactForm').fadeOut();
      $('#content').fadeTo( 'slow', 1 );
    }
  } );

}


// Submit the form via Ajax

function submitForm() {
  var contactForm = $(this);

  // Are all the fields filled in?

  if ( !$('#senderName').val() || !$('#senderEmail').val() || !$('#message').val() ) {

    // No; display a warning message and return to the form
    $('#incompleteMessage').fadeIn().delay(messageDelay).fadeOut();
    contactForm.fadeOut().delay(messageDelay).fadeIn();

  } else {

    // Yes; submit the form to the PHP script via Ajax

    $('#sendingMessage').fadeIn();
    contactForm.fadeOut();

    $.ajax( {
      url: contactForm.attr( 'action' ) + "?ajax=true",
      type: contactForm.attr( 'method' ),
      data: contactForm.serialize(),
      success: submitFinished
    } );
  }

  // Prevent the default form submission occurring
  return false;
}


// Handle the Ajax response

function submitFinished( response ) {
  response = $.trim( response );
  $('#sendingMessage').fadeOut();

  if ( response == "success" ) {

    // Form submitted successfully:
    // 1. Display the success message
    // 2. Clear the form fields
    // 3. Fade the content back in

    $('#successMessage').fadeIn().delay(messageDelay).fadeOut();
    $('#senderName').val( "" );
    $('#senderEmail').val( "" );
    $('#message').val( "" );

    $('#content').delay(messageDelay+80).fadeTo( 'slow', 1 );

  } else {

    // Form submission failed: Display the failure message,
    // then redisplay the form
    $('#failureMessage').fadeIn().delay(messageDelay).fadeOut();
    $('#contactForm').delay(messageDelay+80).fadeIn();
  }
}

</script>
<!--End of Leave a comment-->

<!--facebook javascript-->
<div id="fb-root"></div>
<script>(function(d, s, id) {
  var js, fjs = d.getElementsByTagName(s)[0];
  if (d.getElementById(id)) return;
  js = d.createElement(s); js.id = id;
  js.src = "//connect.facebook.net/en_GB/all.js#xfbml=1";
  fjs.parentNode.insertBefore(js, fjs);
}(document, 'script', 'facebook-jssdk'));</script>
<!--end of facebook javascript-->

<!--GOOGLE TRACKING CODE-->
<script>
  (function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
  (i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s.createElement(o),
  m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a,m)
  })(window,document,'script','//www.google-analytics.com/analytics.js','ga');

  ga('create', 'UA-33455239-1', 'zodml.org');
  ga('send', 'pageview');

</script>
<!--END OF GOOGLE TRACKING CODE-->
</head>

<body>
<!--BODY HOLDER-->
<div id="body_hold">
			<!--HEADER-->
                 <div id="header2_new">
                <div id="subheader2_new">
                <br />
                	<?php include("search_bar.php"); ?>
                </div>	
                </div>
		<!--END OF HEADER-->
<br />
<!--MENU-->
			 <div id="menu_ba22">
            	<?php include("menu.php");?>
            </div>
<!--END OF MENU-->
<br />
<!--CONTENT HOLDER-->
<div id="index_content_holder">
                		
                        <!--CONTENT LAYER 1-->
    <div id="aboutus_content_layer11">
                        <a href="http://www.zodml.org/our-story.php">Our Story</a> > PICTURE GALLERY
    </div>
                        <!--END OF CONTENT LAYER 1-->
                        <!--CONTENT LAYER 2-->
                        <div id="aboutus_content_holder21">
                        <table width="1100">
                        <tr>
                        <td valign="top">
                        				
                                                        <div style="width:700px; margin:0px auto; margin-top:40px;">
                                                        <div class="pikachoose3">
                    											<!--MAIN LIBRARY PICTURE TRANSITION-->
                                                                    <ul id="pikame" class="jcarousel-skin-pika">
                                                                        
                                                                        <li id="pictures"><a href="#"><img src="images/Gallery/MainLibrary/DSC_0104.JPG" alt="Main Library pictures" width="500" height="400" title="Main Library pictures"/></a><span>Picture from ZODML Main Library</span></li>
                                                                        <li id="pictures"><a href="#"><img src="images/Gallery/MainLibrary/DSC_0108.JPG" alt="Main Library pictures" width="500" height="400" title="Main Library pictures"/></a><span>Picture from ZODML Main Library</span></li>
                                                                        <li id="pictures"><a href="#"><img src="images/Gallery/MainLibrary/DSC_0111.JPG" alt="Main Library pictures" width="500" height="400" title="Main Library pictures"/></a><span>Picture from ZODML Main Library</span></li>
                                                                        <li id="pictures"><a href="#"><img src="images/Gallery/MainLibrary/DSC_0115.JPG" alt="Main Library pictures" width="500" height="400" title="Main Library pictures"/></a><span>Picture from ZODML Main Library</span></li>
                                                                        <li id="pictures"><a href="#"><img src="images/Gallery/MainLibrary/DSC_0117.JPG" alt="Main Library pictures" width="500" height="400" title="Main Library pictures"/></a><span>Picture from ZODML Main Library</span></li>
                                                                        <li id="pictures"><a href="#"><img src="images/Gallery/MainLibrary/DSC_0120.JPG" alt="Main Library pictures" width="500" height="400" title="Main Library pictures"/></a><span>Picture from ZODML Main Library</span></li>
                                                                        <li id="pictures"><a href="#"><img src="images/Gallery/MainLibrary/DSC_0123.JPG" alt="Main Library pictures" width="500" height="400" title="Main Library pictures"/></a><span>Picture from ZODML Main Library</span></li>
                                                                        <li id="pictures"><a href="#"><img src="images/Gallery/MainLibrary/DSC_0127.JPG" alt="Main Library pictures" width="500" height="400" title="Main Library pictures"/></a><span>Picture from ZODML Main Library</span></li>
                                                                    <!--END OF MAIN LIBRARY PICTURE TRANSITION-->
                                                                    <!--CATHY PICTURES TRANSITION-->
                                                                    
                                                                     <li id="pictures"><a href="#"><img src="images/Gallery/CATHY/002.jpg" alt="CATHY Pictures" width="500" height="400" title="CATHY Pictures"/></a><span>Picture from ZODML CATHY (Catch Them Young) Session</span></li>
                                                                       <li id="pictures"><a href="#"><img src="images/Gallery/CATHY/005.jpg" alt="CATHY Pictures" width="500" height="400" title="CATHY Pictures"/></a><span>Picture from ZODML CATHY (Catch Them Young) Session</span></li>
                                                                       <li id="pictures"><a href="#"><img src="images/Gallery/CATHY/006.jpg" alt="CATHY Pictures" width="500" height="400" title="CATHY Pictures"/></a><span>Picture from ZODML CATHY (Catch Them Young) Session</span></li>
                                                                       <li id="pictures"><a href="#"><img src="images/Gallery/CATHY/007.jpg" alt="CATHY Pictures" width="500" height="400" title="CATHY Pictures"/></a><span>Picture from ZODML CATHY (Catch Them Young) Session</span></li>
                                                                       <li id="pictures"><a href="#"><img src="images/Gallery/CATHY/009.jpg" alt="CATHY Pictures" width="500" height="400" title="CATHY Pictures"/></a><span>Picture from ZODML CATHY (Catch Them Young) Session</span></li>
                                                                       <li id="pictures"><a href="#"><img src="images/Gallery/CATHY/010.jpg" alt="CATHY Pictures" width="500" height="400" title="CATHY Pictures"/></a><span>Picture from ZODML CATHY (Catch Them Young) Session</span></li>
                                                                       <li id="pictures"><a href="#"><img src="images/Gallery/CATHY/012.jpg" alt="CATHY Pictures" width="500" height="400" title="CATHY Pictures"/></a><span>Picture from ZODML CATHY (Catch Them Young) Session</span></li>
                                                                       <li id="pictures"><a href="#"><img src="images/Gallery/CATHY/015.jpg" alt="CATHY Pictures" width="500" height="400" title="CATHY Pictures"/></a><span>Picture from ZODML CATHY (Catch Them Young) Session</span></li>
                                                                       <li id="pictures"><a href="#"><img src="images/Gallery/CATHY/016.jpg" alt="CATHY Pictures" width="500" height="400" title="CATHY Pictures"/></a><span>Picture from ZODML CATHY (Catch Them Young) Session</span></li>
                                                                       <li id="pictures"><a href="#"><img src="images/Gallery/CATHY/017.jpg" alt="CATHY Pictures" width="500" height="400" title="CATHY Pictures"/></a><span>Picture from ZODML CATHY (Catch Them Young) Session</span></li>
                                                                       <li id="pictures"><a href="#"><img src="images/Gallery/CATHY/018.jpg" alt="CATHY Pictures" width="500" height="400" title="CATHY Pictures"/></a><span>Picture from ZODML CATHY (Catch Them Young) Session</span></li>
                                                                       <li id="pictures"><a href="#"><img src="images/Gallery/CATHY/026.jpg" alt="CATHY Pictures" width="500" height="400" title="CATHY Pictures"/></a><span>Picture from ZODML CATHY (Catch Them Young) Session</span></li>
                                                                       <li id="pictures"><a href="#"><img src="images/Gallery/CATHY/027.jpg" alt="CATHY Pictures" width="500" height="400" title="CATHY Pictures"/></a><span>Picture from ZODML CATHY (Catch Them Young) Session</span></li>
                                                                       <li id="pictures"><a href="#"><img src="images/Gallery/CATHY/029.jpg" alt="CATHY Pictures" width="500" height="400" title="CATHY Pictures"/></a><span>Picture from ZODML CATHY (Catch Them Young) Session</span></li>
                                                                       <li id="pictures"><a href="#"><img src="images/Gallery/CATHY/030.jpg" alt="CATHY Pictures" width="500" height="400" title="CATHY Pictures"/></a><span>Picture from ZODML CATHY (Catch Them Young) Session</span></li>
                                                                       <li id="pictures"><a href="#"><img src="images/Gallery/CATHY/042.jpg" alt="CATHY Pictures" width="500" height="400" title="CATHY Pictures"/></a><span>Picture from ZODML CATHY (Catch Them Young) Session</span></li>
                                                                       <li id="pictures"><a href="#"><img src="images/Gallery/CATHY/044.jpg" alt="CATHY Pictures" width="500" height="400" title="CATHY Pictures"/></a><span>Picture from ZODML CATHY (Catch Them Young) Session</span></li>
                                                                       <li id="pictures"><a href="#"><img src="images/Gallery/CATHY/045.jpg" alt="CATHY Pictures" width="500" height="400" title="CATHY Pictures"/></a><span>Picture from ZODML CATHY (Catch Them Young) Session</span></li>
                                                                       <li id="pictures"><a href="#"><img src="images/Gallery/CATHY/046.jpg" alt="CATHY Pictures" width="500" height="400" title="CATHY Pictures"/></a><span>Picture from ZODML CATHY (Catch Them Young) Session</span></li>
                                                                       <li id="pictures"><a href="#"><img src="images/Gallery/CATHY/CIMG0046.JPG" alt="CATHY Pictures" width="500" height="400" title="CATHY Pictures"/></a><span>Picture from ZODML CATHY (Catch Them Young) Session</span></li>
                                                                       <li id="pictures"><a href="#"><img src="images/Gallery/CATHY/CIMG0291.JPG" alt="CATHY Pictures" width="500" height="400" title="CATHY Pictures"/></a><span>Picture from ZODML CATHY (Catch Them Young) Session</span></li>
                                                                       <li id="pictures"><a href="#"><img src="images/Gallery/CATHY/CIMG0294.JPG" alt="CATHY Pictures" width="500" height="400" title="CATHY Pictures"/></a><span>Picture from ZODML CATHY (Catch Them Young) Session</span></li>
                                                                       <li id="pictures"><a href="#"><img src="images/Gallery/CATHY/CIMG0531.JPG" alt="CATHY Pictures" width="500" height="400" title="CATHY Pictures"/></a><span>Picture from ZODML CATHY (Catch Them Young) Session</span></li>
                                                                       <li id="pictures"><a href="#"><img src="images/Gallery/CATHY/CIMG0535.JPG" alt="CATHY Pictures" width="500" height="400" title="CATHY Pictures"/></a><span>Picture from ZODML CATHY (Catch Them Young) Session</span></li>
                                                                       <li id="pictures"><a href="#"><img src="images/Gallery/CATHY/CIMG0573.JPG" alt="CATHY Pictures" width="500" height="400" title="CATHY Pictures"/></a><span>Picture from ZODML CATHY (Catch Them Young) Session</span></li>
                                                                        <!--END OF CATHY PICTURE TRANSITION-->
                                                                        
                                                                        <!--DLC PICTURES TRANSITION-->
                                                                        <li id="pictures"><a href="#"><img src="images/Gallery/DLC/CIMG0459.JPG" alt="DLC Pictures" width="500" height="400" title="DLC Pictures"/></a><span>Picture from the ILC (Internet Learning Centre)</span></li>
                                                                       <li id="pictures"><a href="#"><img src="images/Gallery/DLC/CIMG0462.JPG" alt="DLC Pictures" width="500" height="400" title="DLC Pictures"/></a><span>Picture from the ILC (Internet Learning Centre)</span></li>
                                                                       <li id="pictures"><a href="#"><img src="images/Gallery/DLC/CIMG0463.JPG" alt="DLC Pictures" width="500" height="400" title="DLC Pictures"/></a><span>Picture from the ILC (Internet Learning Centre)</span></li>
                                                                       <li id="pictures"><a href="#"><img src="images/Gallery/DLC/CIMG1259.JPG" alt="DLC Pictures" width="500" height="400" title="DLC Pictures"/></a><span>Picture from the ILC (Internet Learning Centre)</span></li>
                                                                       <li id="pictures"><a href="#"><img src="images/Gallery/DLC/CIMG1260.JPG" alt="DLC Pictures" width="500" height="400" title="DLC Pictures"/></a><span>Picture from the ILC (Internet Learning Centre)</span></li>
                                                                       <li id="pictures"><a href="#"><img src="images/Gallery/DLC/CIMG1261.JPG" alt="DLC Pictures" width="500" height="400" title="DLC Pictures"/></a><span>Picture from the ILC (Internet Learning Centre)</span></li>
                                                                        <!--END OF DLC PICTURE TRANSITION-->
                                                                        
                                                                        <!--OASIS PICTURES TRANSITION-->
                                                                      	<li id="pictures"><a href="#"><img src="images/Gallery/OASIS/DSC_0145.JPG" alt="OASIS Pictures" width="500" height="400" title="OASIS Pictures"/></a><span>Picture from ZODML OASIS Library</li>
                                                                     <li id="pictures"><a href="#"><img src="images/Gallery/OASIS/DSC_0152.JPG" alt="OASIS Pictures" width="500" height="400" title="OASIS Pictures"/></a><span>Picture from ZODML OASIS Library</span></li>
                                                                     <li id="pictures"><a href="#"><img src="images/Gallery/OASIS/DSC_0158.JPG" alt="OASIS Pictures" width="500" height="400" title="OASIS Pictures"/></a><span>Picture from ZODML OASIS Library</span></li>
                                                                     <li id="pictures"><a href="#"><img src="images/Gallery/OASIS/DSC_0169.JPG" alt="OASIS Pictures" width="500" height="400" title="OASIS Pictures"/></a><span>Picture from ZODML OASIS Library</span></li>
                                                                     <li id="pictures"><a href="#"><img src="images/Gallery/OASIS/DSC_0174.JPG" alt="OASIS Pictures" width="500" height="400" title="OASIS Pictures"/></a><span>Picture from ZODML OASIS Library</span></li>
                                                                     <li id="pictures"><a href="#"><img src="images/Gallery/OASIS/DSC_0187.JPG" alt="OASIS Pictures" width="500" height="400" title="OASIS Pictures"/></a><span>Picture from ZODML OASIS Library</span></li>
                                                                     <li id="pictures"><a href="#"><img src="images/Gallery/OASIS/DSC_0198.JPG" alt="OASIS Pictures" width="500" height="400" title="OASIS Pictures"/></a><span>Picture from ZODML OASIS Library</span></li>
                                                                     <li id="pictures"><a href="#"><img src="images/Gallery/OASIS/DSC_0200.JPG" alt="OASIS Pictures" width="500" height="400" title="OASIS Pictures"/></a><span>Picture from ZODML OASIS Library</span></li>
                                                                     <li id="pictures"><a href="#"><img src="images/Gallery/OASIS/DSC_0215.JPG" alt="OASIS Pictures" width="500" height="400" title="OASIS Pictures"/></a><span>Picture from ZODML OASIS Library</span></li>
                                                                     <li id="pictures"><a href="#"><img src="images/Gallery/OASIS/DSC_0244.JPG" alt="OASIS Pictures" width="500" height="400" title="OASIS Pictures"/></a><span>Picture from ZODML OASIS Library</span></li>
                                                                     <li id="pictures"><a href="#"><img src="images/Gallery/OASIS/DSC_0259.JPG" alt="OASIS Pictures" width="500" height="400" title="OASIS Pictures"/></a><span>Picture from ZODML OASIS Library</span></li>
                                                                     <li id="pictures"><a href="#"><img src="images/Gallery/OASIS/DSC_0280.JPG" alt="OASIS Pictures" width="500" height="400" title="OASIS Pictures"/></a><span>Picture from ZODML OASIS Library</span></li>
                                                                     <li id="pictures"><a href="#"><img src="images/Gallery/OASIS/DSC_0317.JPG" alt="OASIS Pictures" width="500" height="400" title="OASIS Pictures"/></a><span>Picture from ZODML OASIS Library</span></li>
                                                                     <li id="pictures"><a href="#"><img src="images/Gallery/OASIS/DSC_0345.JPG" alt="OASIS Pictures" width="500" height="400" title="OASIS Pictures"/></a><span>Picture from ZODML OASIS Library</span></li>
                                                                     <li id="pictures"><a href="#"><img src="images/Gallery/OASIS/DSC_0396.JPG" alt="OASIS Pictures" width="500" height="400" title="OASIS Pictures"/></a><span>Picture from ZODML OASIS Library</span></li>
                                                                      <!--END OF OASIS PICTURE TRANSITION-->
                                                                      <!--SMYP PICTURES TRANSITION-->
                                                                      <li id="pictures"><a href="#"><img src="images/Gallery/SMYP/CIMG0297.JPG" alt="SMYP Pictures" width="500" height="400" title="SMYP Pictures"/></a><span>Picture of SMYP (Special Membership for Young People) members at ZODML Main Library)</span></li>
                                                                     <li id="pictures"><a href="#"><img src="images/Gallery/SMYP/CIMG0301.JPG" alt="SMYP Pictures" width="500" height="400" title="SMYP Pictures"/></a><span>Picture of SMYP (Special Membership for Young People) members at ZODML Main Library)</span></li>
                                                                     <li id="pictures"><a href="#"><img src="images/Gallery/SMYP/CIMG0317.JPG" alt="SMYP Pictures" width="500" height="400" title="SMYP Pictures"/></a><span>Picture of SMYP (Special Membership for Young People) members at ZODML Main Library)</span></li>
                                                                     <li id="pictures"><a href="#"><img src="images/Gallery/SMYP/CIMG0368.JPG" alt="SMYP Pictures" width="500" height="400" title="SMYP Pictures"/></a><span>Picture of SMYP (Special Membership for Young People) members at ZODML Main Library)</span></li>
                                                                     <li id="pictures"><a href="#"><img src="images/Gallery/SMYP/CIMG0369.JPG" alt="SMYP Pictures" width="500" height="400" title="SMYP Pictures"/></a><span>Picture of SMYP (Special Membership for Young People) members at ZODML Main Library)</span></li>
                                                                     <li id="pictures"><a href="#"><img src="images/Gallery/SMYP/CIMG0370.JPG" alt="SMYP Pictures" width="500" height="400" title="SMYP Pictures"/></a><span>Picture of SMYP (Special Membership for Young People) members at ZODML Main Library)</span></li>
                                                                     <li id="pictures"><a href="#"><img src="images/Gallery/SMYP/DSC_0026.JPG" alt="SMYP Pictures" width="500" height="400" title="SMYP Pictures"/></a><span>Picture of SMYP (Special Membership for Young People) members at ZODML Main Library)</span></li>
                                                                     <li id="pictures"><a href="#"><img src="images/Gallery/SMYP/DSC_0028.JPG" alt="SMYP Pictures" width="500" height="400" title="SMYP Pictures"/></a><span>Picture of SMYP (Special Membership for Young People) members at ZODML Main Library)</span></li>
                                                                     <li id="pictures"><a href="#"><img src="images/Gallery/SMYP/DSC_0029.JPG" alt="SMYP Pictures" width="500" height="400" title="SMYP Pictures"/></a><span>Picture of SMYP (Special Membership for Young People) members at ZODML Main Library)</span></li>
                                                                     <li id="pictures"><a href="#"><img src="images/Gallery/SMYP/DSC_0033.JPG" alt="SMYP Pictures" width="500" height="400" title="SMYP Pictures"/></a><span>Picture of SMYP (Special Membership for Young People) members at ZODML Main Library)</span></li>
                                                                     <li id="pictures"><a href="#"><img src="images/Gallery/SMYP/DSC_0035.JPG" alt="SMYP Pictures" width="500" height="400" title="SMYP Pictures"/></a><span>Picture of SMYP (Special Membership for Young People) members at ZODML Main Library)</span></li>
                                                                     <li id="pictures"><a href="#"><img src="images/Gallery/SMYP/DSC_0040.JPG" alt="SMYP Pictures" width="500" height="400" title="SMYP Pictures"/></a><span>Picture of SMYP (Special Membership for Young People) members at ZODML Main Library)</span></li>
                                                                     <li id="pictures"><a href="#"><img src="images/Gallery/SMYP/DSC_0047.JPG" alt="SMYP Pictures" width="500" height="400" title="SMYP Pictures"/></a><span>Picture of SMYP (Special Membership for Young People) members at ZODML Main Library)</span></li>
                                                                     <li id="pictures"><a href="#"><img src="images/Gallery/SMYP/DSC_0057.JPG" alt="SMYP Pictures" width="500" height="400" title="SMYP Pictures"/></a><span>Picture of SMYP (Special Membership for Young People) members at ZODML Main Library)</span></li>
                                                                     <li id="pictures"><a href="#"><img src="images/Gallery/SMYP/DSC_0065.JPG" alt="SMYP Pictures" width="500" height="400" title="SMYP Pictures"/></a><span>Picture of SMYP (Special Membership for Young People) members at ZODML Main Library)</span></li>
                                                                     
                                                                      <!--END OF SMYP PICTURE TRANSITION-->
                                                                     
                                                                    </ul>
                                                                   
                                                               
                                                       
                                                     </div>
                                                     
                                            </div>
                        </td>
                           <td valign="top" width="280">         
                                    <?php include("rotator.php"); ?>
                            </td>
                            
                            	
                            </tr>
                            </table>        
                        </div>		
                       <!--END OF CONTENT LAYER 2-->
          
  </div>
<!--END OF CONTENT HOLDER-->

<!--FOOTER-->
<div id="footer_new_hold">
<?php include("footer.php") ?>
</div>
<!--END OF FOOTER-->

<form id="contactForm" action="processForm.php" method="post">

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

</div>
<!--END OF THE BODY HOLDER-->
</body>
</html>