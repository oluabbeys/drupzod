<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Zaccheus Onumba Dibiaezue Memorial Libraries|e-library in Nigeria|Library Services|Learning-Research Guide</title>
<link href="css/styles.css" type="text/css" rel="stylesheet" media="screen" />
<link href="css/menu.css" type="text/css" rel="stylesheet" media="screen" />
<link href="css/bottom.css" type="text/css" rel="stylesheet" media="screen"/>
<link href="css/discoverychannel_styles.css" type="text/css" rel="stylesheet" media="screen"/>
<link href="images/favicon.ico" rel="shortcut icon" />
<!--<script type="text/javascript" src=' https://ajax.googleapis.com/ajax/libs/jquery/1.6/jquery.js'></script>-->
<script type='text/javascript' src="js/pixreg1.js"></script>
<script type='text/javascript' src="js/pixreg2.js"></script>
<script type='text/javascript' src='js/jquery.hoverIntent.minified.js'></script>
<script type='text/javascript' src='js/jquery.dcmegamenu.1.2.js'></script>
<!--<script type="text/javascript" src="js/pack.js"></script>-->
<script type="text/javascript" src="js/search.js"></script>
<script type="text/javascript" src="js/contact.js"></script>
<script type="text/javascript" src="js/flowplayer-3.2.11.min.js"></script>
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
  _gaq.push(['_setAccount', 'UA-33247984-1']);
  _gaq.push(['_trackPageview']);

  (function() {
    var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
    ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
    var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
  })();

</script>
<!--END OF GOOGLE PAGE-TRACK CODE-->

<!--MODAL POPUP WINDOW FOR NETBOOK VIDEO-->
<script type="text/javascript">
$(document).ready(function() {
	
	$("#cat_guides_ind1").click(function(e) {	

		var id = '#dialog';
	
		//Get the screen height and width
		var maskHeight = $(document).height();
		var maskWidth = $(window).width();
	
		//Set heigth and width to mask to fill up the whole screen
		$('#mask').css({'width':maskWidth,'height':maskHeight});
		
		//transition effect		
		$('#mask').fadeIn(1000);	
		$('#mask').fadeTo("slow",0.6);	
	
		//Get the window height and width
		var winH = $(window).height();
		var winW = $(window).width();
              
		//Set the popup window to center
		$(id).css('top',  winH/2-$(id).height()/2);
		$(id).css('left', winW/2-$(id).width()/2);
	
		//transition effect
		$(id).fadeIn(2000); 	
	
	//if close button is clicked
	$('.window .close').click(function (e) {
		//Cancel the link behavior
		e.preventDefault();
		
		$('#mask').hide();
		$('.window').hide();
		$('#newsletter').val($('input:checkbox:checked').map(function() { return $(this).val(); }).get().join(','));
	});		
	
	//if mask is clicked
	$('#mask').click(function () {
		$(this).hide();
		$('.window').hide();
		
		
	});	
	
	
	});
	
});

</script>

<style type="text/css">
/*body {
font-family:verdana;
font-size:15px;
}*/

/*a {color:#fff; text-decoration:none}
a:hover {color:none; text-decoration:none}*/

#mask {
  position:absolute;
  left:0px;
  top:0px;
  z-index:9000;
  background-color:#000;
  display:none;
}  
#boxes .window {
  position:absolute;
  left:0;
  top:0;
  width:440px;
  height:200px;
  display:none;
  z-index:9999;
  padding:20px;

}
#boxes #dialog {
  width:800px; 
  height:400px;
  padding:0px;
  /*background:url(images/newimages/pop2.png) repeat-x;*/
  background-color:transparent;
  /*border-right:solid 2px #EC9F00;
  border-left:solid 2px #EC9F00;
  border-bottom:solid 2px #EC9F00;*/
}
#modalhead{height:30px; font-family:'Lucida Sans Unicode', 'Lucida Grande', sans-serif; background-color:#99FF66; background:url(images/newimages/pop.png) repeat-x;}
#modalhead a{color:#fff; text-decoration:none;}
#modalhead a:hover{color:none; text-decoration:none;}
</style>
</head>

<body>
<!--BODY HOLDER-->
<div id="body_hold">
			<!--HEADER-->
                 <div id="header">
                <div id="subheader">
                <p>&nbsp;</p>
                <p>&nbsp;</p>
                	<?php include("search_bar.php"); ?>
                </div>	
                </div>
		<!--END OF HEADER-->

<!--MENU-->
			 <div id="menu_ba2">
            	<?php include("menu.php");?>
            </div>
<!--END OF MENU-->

<!--CONTENT BEGINS-->
	<div id="content_holder_oma2">
    
    <div id="aboutus_content_layer1">Learning > Discovery Channel Videos</div>
    <div id="intro"></div>
    <div id="cguide_content">
    	<div id="cat_guides">
 			<div id="cat_guides_ind1"><a href="#" class="enlarge_a"></a></div>
 			<div id="cat_guides_ind2"><a href="#" class="enlarge_b"></a></div>
    		
		</div>
   	<div id="cat_guides">
 			<div id="cat_guides_ind3"><a href="#" class="enlarge_c"></a></div>
   			<div id="cat_guides_ind4"><a href="#" class="enlarge_d"></a></div>
    		
		</div>
        
        
        
        
   
</div>

</div>
    <div>
    </div>
    </div>
     
    
    </div>
    
    <!--FOOTER-->
	<?php include("footer.php"); ?>
<!--END OF FOOTER-->

<!--POPUP MODAL BOXES-->
<div id="boxes">
<div style="top: 199.5px; left: 551.5px; display: none;" id="dialog" class="window">
<!--<div id="modalhead">
    <div style="padding:3px; color:#444; float:left; margin-left:7px; font-size:16px; letter-spacing:1px; color:#fff; font-weight:800;">DIGITAL LEARNING COMMUNITY</div>
    <div style="padding:3px; color:#fff; float:right; margin-right:7px; font-size:13px;"><a href="#" class="close"><b>X</b></a></div>
</div>-->

<div style="padding:0px; text-align:justify; font-size:13px; line-height:25px; font-family:Verdana, Geneva, sans-serif; color:#444; width:550px; float:left; height:340px; margin:4px 0px 0px 4px; border:solid 3px #FFF; box-shadow:2px 2px 2px #FFF;">
	<!--<video width="480" height="350" controls="controls">
  <source src="videos/100602144.mp4" type="video/mp4" />
  <source src="videos/100602144.ogg" type="video/ogg" />
  Your browser does not support the video tag.
</video> -->
<a href="videos/indigenous_ppl.mp4video.mp4"
			
			 style="display:block;width:550px;height:340px"  
			 id="player"> 
		</a> 
</div>
<!--<div style="width:200px; float:left; height:347px; margin:4px 0px 0px 8px; background:#333; opacity:0.7;">
<div style="margin-top:5px;"><img src="images/join2.png" width="200" height="120" /></div>
                    <div style="margin-top:4px;">
                    <table align="center"><tr>
                      <td><a href="dlc" target="_blank"><div id="community_hold"><img src="images/but.png" alt="but" width="100" height="30"/></div></a></td>
                      </tr>
                    </table>
                    
                    </div>-->
</div>

<script>
			flowplayer("player", "js/flowplayer-3.2.12.swf");
		</script>
</div>
<!-- Mask to cover the whole screen -->
<div style="width: 1478px; height: 602px; display: none; opacity: 0.6;" id="mask"></div>
</div>
<!--END OF POPUP MODAL BOX-->

</div>
<!--comment form-->
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