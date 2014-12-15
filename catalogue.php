<?php
//ini_set("display_errors", "off");
include_once("Nigeria/scripts/config.php");
$sql2 = mysql_query("SELECT * FROM contentsupdate WHERE id=67");
while($row2 = mysql_fetch_array($sql2)){
$id2 = $row2["id"];
$content2 = $row2["contents"];
$title2 = $row2["title"];
$tags = $row2["metatags"];
$description = $row2["metadescription"];
$metatitle = $row2["metatitle"];
}
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta name="keywords" content="<?php echo $tags; ?>" />
<meta name="title" content="<?php echo $metatitle; ?>" />
<meta name="description" content="<?php echo $description; ?>" />
<meta name="googlebot" content="index, follow" />
<meta name="robots" content="index, follow" />
<meta name="Revisit-After" content="7 days" />
<meta name="city" content="Lagos" />
<meta name="country" content="Nigeria(NGA)" />
<meta name="state" content="LA" />
<meta name="zip code" content="101233" />
<meta name="subject" content="Online Library in Nigeria, Learning Resources" />
<meta name="author" content="Zaccheus Onumba Dibiaezue Memorial Libraries" />
<meta name="copyright" content="Zaccheus Onumba Dibiaezue Memorial Libraries" />
<meta property="fb:admins" content="100003994871719" />
<title>ZODML | Catalogue </title>
<link href="css/styles.css" type="text/css" rel="stylesheet" media="screen" />
<link href="css/menu3.css" type="text/css" rel="stylesheet" media="screen" />
<link href="css/bottom.css" type="text/css" rel="stylesheet" media="screen"/>
<link rel="stylesheet" type="text/css" href="../content/css/default.css"/>
<link rel="stylesheet" type="text/css" href="../css2/sansation/stylesheet.css"/>
<link href="../css_pirobox2/style_1/style.css" rel="stylesheet" type="text/css" />
<link href="images/favicon.ico" rel="shortcut icon" />
<!--<script type="text/javascript" src=" https://ajax.googleapis.com/ajax/libs/jquery/1.6/jquery.js"></script>
<script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jquery/1.4.2/jquery.min.js"></script>-->
<script type='text/javascript' src="js/pixreg1.js"></script>
<script type='text/javascript' src="js/pixreg2.js"></script>
<script type='text/javascript' src='js/jquery.hoverIntent.minified.js'></script>
<script type='text/javascript' src='js/jquery.dcmegamenu.1.2.js'></script>
<script type="text/javascript" src="js/jquery.pikachoose.js"></script>
<script type="text/javascript" src="js/search.js"></script>
<!--<script type="text/javascript" src="js/modal.js"></script>-->
<script type="text/javascript" src="js/contact.js"></script>
<script type="text/javascript" src="js/title.js"></script>
<script type="text/javascript">
$(document).ready(function($){
	$('#mega-menu-tut').dcMegaMenu({
		rowItems: '3',
		speed: 'fast'
	});
});
</script>
<!--Pirobox-->
<!--<script type="text/javascript" src="../js3/jquery.min.js"></script>
<script type="text/javascript" src="../js3/jquery-ui-1.8.2.custom.min.js"></script>
<script type="text/javascript" src="../js3/pirobox_extended.js"></script>
<script type="text/javascript">
$(document).ready(function() {
	$().piroBox_ext({
	piro_speed : 700,
		bg_alpha : 0.5,
		piro_scroll : true // pirobox always positioned at the center of the page
	});
});

</script>-->

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

<!--GOOGLE PAGE-TRACK CODE-->
<script>
  (function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
  (i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s.createElement(o),
  m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a,m)
  })(window,document,'script','//www.google-analytics.com/analytics.js','ga');

  ga('create', 'UA-33455239-1', 'zodml.org');
  ga('send', 'pageview');

</script>
<!--END OF GOOGLE PAGE-TRACK CODE-->
<!-- Start of Woopra Code -->
<script>
(function(){
    var t,i,e,n=window,o=document,a=arguments,s="script",r=

["config","track","identify","visit","push","call"],c=function(){var t,i=this;for(i._e=

[],t=0;r.length>t;t++)(function(t){i[t]=function(){return i._e.push([t].concat

(Array.prototype.slice.call(arguments,0))),i}})(r[t])};for(n._w=n._w||{},t=0;a.length>t;t++)n._w[a[t]]

=n[a[t]]=n[a[t]]||new c;i=o.createElement

(s),i.async=1,i.src="//static.woopra.com/js/w.js",e=o.getElementsByTagName(s)

[0],e.parentNode.insertBefore(i,e)
})("woopra");

woopra.config({
    domain: 'zodml.org'
});
woopra.track();
</script>
<!-- End of Woopra Code -->
<!--MODAL POPUP WINDOW FOR FIND A BOOK-->
<script type="text/javascript">
$(document).ready(function() {
	
	$("#findbook").click(function(e) {	

		var id = '#dialog3';
	
		//Get the screen height and width
		var maskHeight = $(document).height();
		var maskWidth = $(window).width();
	
		//Set heigth and width to mask to fill up the whole screen
		$('#mask3').css({'width':maskWidth,'height':maskHeight});
		
		//transition effect		
		$('#mask3').fadeIn(1000);	
		$('#mask3').fadeTo("slow",0.6);	
	
		//Get the window height and width
		var winH = $(window).height();
		var winW = $(window).width();
              
		//Set the popup window to center
		$(id).css('top',  winH/2-$(id).height()/2);
		$(id).css('left', winW/2-$(id).width()/2);
	
		//transition effect
		$(id).fadeIn(2000); 	
	
	//if close button is clicked
	$('.window3 .close3').click(function (e) {
		//Cancel the link behavior
		e.preventDefault();
		
		$('#mask3').hide();
		$('.window3').hide();
		//$('#newsletter').val($('input:checkbox:checked').map(function() { return $(this).val(); }).get().join(','));
	});		
	
	//if mask is clicked
	$('#mask3').click(function () {
		$(this).hide();
		$('.window3').hide();
		
		
	});	
	
	
	});
	
});


</script>
<!--END OF MODAL POPUP WINDOW FOR FIND A BOOK-->

<!--End of pirobox-->
<link rel="stylesheet" type="text/css" href="style3.css" />
<!--<style type="text/css">
a {
color:#333;
text-transform: capitalize;
}
a:hover{
color: #999;
text-decoration:underline
}
</style>-->



<style type="text/css">

#resulttable a img{

	border:none;

	text-decoration:none;

}

#resulttable a{

	text-decoration:none;

	color:#850000;

}

</style>



<!--<link href="SpryAssets/SpryAccordion.css" rel="stylesheet" type="text/css" />-->

<!-- AddThis Button BEGIN -->
<div class="addthis_toolbox addthis_floating_style addthis_32x32_style" style="right:25px;top:25px;">
<a class="addthis_button_twitter"></a>
<a class="addthis_button_facebook"></a>
<a class="addthis_button_pinterest_share"></a>
<a class="addthis_button_linkedin"></a>
<a class="addthis_button_email"></a>
<a class="addthis_button_tumblr"></a>
<a class="addthis_button_google_plusone_share"></a>
<a class="addthis_button_buffer"></a>
<a class="addthis_button_compact"></a>
</div>
<script type="text/javascript">var addthis_config = {"data_track_addressbar":true};</script>
<script type="text/javascript" src="//s7.addthis.com/js/300/addthis_widget.js#pubid=ra-521f68de301bc049"></script>
<!-- AddThis Button END -->

<!--code that link Addthis to google analytics-->
<script type="text/javascript">
      var addthis_config = {
         data_ga_property: 'UA-33455239-1'
      }; 
</script>
</head>

<body>
<!--BODY HOLDER-->
<div id="body_hold">
			<!--HEADER-->
                 <div id="header">
                 <a href="http://zodml.org"><div id="logo-link"></div></a>
                 
                <div id="subheader">
                <br />
                
               	  <?php include("search_bar.php"); ?>
                </div>	
                </div>
		<!--END OF HEADER-->
<br />
<!--MENU-->
			<div id="menu_ba2">
            	<?php include("menu.php");?>
            </div>
<!--END OF MENU-->

<!--CONTENT HOLDER-->
<div id="content_holder">
							<?php 

							include("db_books.php");
							$sqlcount = mysql_query("SELECT COUNT(Title) FROM books2 WHERE Status='Edited'");
							$count = mysql_result($sqlcount, 0);
							?>
                		
                        <!--CONTENT LAYER 1-->
                        <div id="aboutus_content_layer_catalogue">
                        <div style="font-size:14px; font-family:Verdana; line-height:25px; width:650px; height:30px; float:left;"><div style="padding:3px; border-bottom:solid 1px dashed; font-size:18px; font-family:Verdana; color:#333;">ZODML Catalogue - <font color="#EC9F00" size="+1"><?php echo $count; ?>&nbsp;books</font></div></div>
                        <div style="font-size:14px; font-family:Verdana; line-height:25px; width:250px; height:35px; float:right; text-align:right;"><span id="findbook" style="cursor:pointer;"><button class="findabook">Search Catalogue</button></span></div>
                        
                        </div>
                        <!--END OF CONTENT LAYER 1-->
                        <!--CONTENT LAYER 2-->
                        <div id="find_books_hold">
                       <!--<div style="padding:3px; border-bottom:solid 1px dashed; font-size:14px; font-family:'Lucida Sans Unicode', 'Lucida Grande', sans-serif; color:#333;">Collection of books ....<font color="#0099FF" size="+1"> Found <?php //echo $count; ?>&nbsp;books</font></div>-->
                        <table width="1015">
                        <tr>
                         <td valign="top">
                            <div id="each_book_others_hold3">
                            
                               
                            			<div id="aboutus_shortlinksbow">
                                        	
                                        	<!--<div id="aboutus_shortlinks_title"><b>Book of the Week</b></div>-->
                                   		  <div class="Accordion">
                                       		  <div class="AccordionPanel">
                                       		    <div class="AccordionPanelTab">Explore at ZODML</div>
                                       		    	<div class="AccordionPanelContent">
                                                    <a href="new_title.php">New Titles</a> <br /> <a href="most-borrowed.php">Most Borrowed</a> <br/> <a href="award_winners.php">Award Winners</a> <br/>
                                                		<a href="selected.php?catalogue=Subject&search_word=nigeria&search=other">Nigerian Writing</a>  <br/> <a href="selected.php?catalogue=Subject&search_word=africa&search=other">African Writing</a>  <br/>  <a href="selected.php?catalogue=Subject&search_word=classics&search=other">Classics</a> <br /> <a href="must-read-books.php">Must Read Books</a><br /> <a href="#contactForm2">Recommend a Title</a> 
                                                
                                                	</div>
                                   		    </div>
                                            <!--<div class="AccordionPanel">
                                       		    <div class="AccordionPanelTab">TOPIC</div>
                                       		    <div class="AccordionPanelContent">Content 1</div>
                                   		    </div>
                                       		  <div class="AccordionPanel">
                                       		    <div class="AccordionPanelTab">AUTHOR</div>
                                       		    <div class="AccordionPanelContent">Content 2</div>
                                   		    </div>
                                   		  </div>
                   			  </div>	-->
                            
                            	</div> 
                                
                                
                            </td>
                        <td width="740" valign="top">
                        	<div id="find_books_left2">
                           
                        <table width="700px;">
                   

                            <tr> 

                              <td width="700px" colspan="3" align="right" valign="top"><table id="bookt" width="700px" border="0" cellpadding="0" cellspacing="25">

                                

                                      



										<?php
//function getmicrotime()
//{
//    list($usec, $sec) = explode(" ", microtime());
//    return ((float)$usec + (float)$sec);
//}
//linking the pagination script
include('collection.php');

//initializing variables from the search form

include_once("db_books.php");
//if($kword=="Author")
//$kword="FullName";
//if($kword=="Title")
//$kword="Title";
//if($kword =="Subject")
//$kword = "Subject";
//if($kword == "Keyword")
//$kword = "Title";
//$start_search = getmicrotime();
$query="SELECT * FROM books2 WHERE Status='Edited' ORDER BY Title ASC";
//$query="SELECT * FROM books2 WHERE checked='check' ORDER BY Title ASC";
$sql=mysql_query($query);
$num=mysql_num_rows($sql);
$num2=$num/7;
if($num>0){
$pager = new PS_Pagination($connect, $query, 10, 10, "param1=valu1&param2=value2&catalogue=".$kword."&search_word=".$searchtext."");
	
	/*
	 * Enable debugging if you want o view query errors
	*/
	$pager->setDebug(true);
	
	/*
	 * The paginate() function returns a mysql result set
	 * or false if no rows are returned by the query
	*/
	$rs = $pager->paginate();
	if(!$rs) die(mysql_error());

											$author="";
											$genre="";
											$i=0;

	//$stop_search = getmicrotime();
//    $time_search = ($stop_search - $start_search);
											while($row= mysql_fetch_assoc($rs)){
												echo "<tr height=\"110\"><td><div class=\"resimg\" id=\"res".$i."\"><a href=\"http://zodml.org/eachbook.php?id=".$row['Id']."\" \"><img src=\"http://zodml.org/correction-new/Images/".$row['coverfront']."\" alt=\"".$row['clzbookid']."\" id=\"result".$row['Id']."\" height=\"100\" width=\"100\"/></a></div><br /></td><td><input type=\"hidden\" value=\"".$row['Id']."\"/></td><td style=\"border-bottom:dashed 1px #CCC;\" align=\"left\" valign=\"top\"><font face=\"verdana\" size=\"3\" color=\"#EC9F00\"><strong><a href=\"http://zodml.org/eachbook.php?id=".$row['Id']."\">".$row['Title']."</a></strong></font><br /><br /><font face=\"verdana\" size=\"2\" color=\"#000000\"><strong>Author : </strong>".$row['FullName']."</font><br></br><font face=\"verdana\" size=\"1\" color=\"#000000\"><strong>Publisher : </strong>".$row['Publishers']."</font></td></tr>";
												$author=$row['FullName'];
												$genre=$row['Subject'];

											}		
											$i++;
											
											//echo "<p align=\"center\">".$pager->renderFullNav()."</p>";
	
	echo "<br />\n";
	
																			
										}
										else{
											echo  "<tr><td align=\"left\"><font face=\"trebuchet ms\" size=\"2\" color=\"#EC9F00\"><strong>No Result found in our database for the search word used.</strong></font></td></tr>";
										}
										
										?>
                                        
                                      
										<!--<div style="padding:5px; font-size:14px; font-weight:800;"><?php //echo "Search Results for"." ".$searchtext; ?></div>-->

                                     

                                </table></td>

                            </tr>

                           

                          </table>
                          <div style="width:700px; padding:5px; margin:20px 0px 30px 0px;">
                          
                          <div id="books_result">
                          <?php
						  if($num>0){
							  
							  
						  /*
	 * Or you can display the individual links for more
	 * control over HTML rendering.
	 * 
	*/
	
	//Display the link to first page: First
	//echo $pager->renderFirst();
	
	//Display the link to previous page: <<
	//echo $pager->renderPrev();
	
	/*
	 * Display page links: 1 2 3
	 * $prefix = Will be prepended to the page link (optional)
	 * $suffix = Will be appended to the page link (optional)
	 * 
	*/
	//echo $pager->renderNav('<span>', '</span>');
	
	//Display the link to next page: >>
	//echo $pager->renderNext();
	
	//Display the link to last page: Last
	//echo $pager->renderLast();
	
	echo"<div><div style=\"float:left; margin-right:20px; border:solid 1px #CCC; padding:1px; letter-spacing:1px; background:url(images/search_result.png) repeat-x; -moz-border-radius:3px;\">".$pager->renderFirst()."</div><div style=\"float:left; margin-right:20px; border:solid 1px #CCC; padding:1px; letter-spacing:1px; background:url(images/search_result.png) repeat-x; -moz-border-radius:3px;\">".$pager->renderPrev()."</div><div style=\"float:left; margin-right:20px; padding:1px;  \">".$pager->renderNav('<span>', '</span>')."</div><div style=\"float:left; margin-right:20px; border:solid 1px #CCC; padding:1px; letter-spacing:1px; background:url(images/search_result.png) repeat-x; -moz-border-radius:3px;\">".$pager->renderNext()."</div><div style=\"float:left; margin-right:20px; border:solid 1px #CCC; padding:1px; letter-spacing:1px; background:url(images/search_result.png) repeat-x; -moz-border-radius:3px;\">".$pager->renderLast()."</div></div>";

						  
						  }
						  ?>
                          </div>
                          </div>
                                        
    
     <div style="float:left; width:23%;">
    &nbsp;
  </div>	
    
  
    
   
                           </td>
                           
                            
                           
                          <div style="clear:both;"></div>  
                        
                        <td width="142"></td>
                        
                        
                           
                            </tr>
                            </table>

	
                       <!--END OF CONTENT LAYER 2-->
          
			
            
            </div>
            <p>&nbsp;</p>
</div>
           
<!--END OF CONTENT HOLDER-->

<!--FOOTER-->
<div id="footer_new_hold">
<?php include("footer.php"); ?>
</div>
<!--END OF FOOTER-->
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
<!--POPUP MODAL BOXES FOR FIND A BOOK-->
<div id="boxes3">
<div style="top: 199.5px; left: 551.5px; display: none;" id="dialog3" class="window3">
<div style="padding:8px 14px 14px 14px; text-align:justify; font-size:12px; line-height:30px; font-family:Verdana, Geneva, sans-serif; color:#444; width:550px; float:left; height:70px; margin:80px 0px 0px 100px; border:solid 3px #FFF; box-shadow:2px 2px 2px #FFF; background: url(images/botw2.png) repeat-x;">
<div style="position:absolute; z-index:1000; left:670px; top:67px; cursor:pointer;" class="close3"><img src="images/close.png" width="30" height="30" /></div>
	<div style="width:480px; height:80px; margin:0px auto; margin-top:20px;">
	<form name="form1" action="online-catalogue.php">
     <table>
               <tr>
               <td>
                <select name="catalogue"  id="select_box" >
                    <option value="Keyword" <?php if (!(strcmp("Keyword", 1))) {echo "selected=\"selected\"";} ?>>Keyword</option>
                    <option value="Author" <?php if (!(strcmp("Author", 1))) {echo "selected=\"selected\"";} ?>>Author</option>
                     <option value="Genre" <?php if (!(strcmp("Genre", 1))) {echo "selected=\"selected\"";} ?>>Genre</option>
                     <option value="Subject" <?php if (!(strcmp("Subject", 1))) {echo "selected=\"selected\"";} ?>>Subject</option>
                    <option value="Title" <?php if (!(strcmp("Title", 1))) {echo "selected=\"selected\"";} ?>>Title</option>                   
                </select>
               </td>
               <td>
                <div id="searchwrapper">
            <input type="text" id="searchbox" name="search_word" placeholder="Search for a Book"/>
          		</div>
                </td>
                <td>
                <div id="submit_button"><button id="search_button">Search</button></div></td>
                </tr>
                </table>
                </form>
                </div>
        
</div>

</div>
<!-- Mask to cover the whole screen -->
<div style="width: 1478px; height: 602px; display: none; opacity: 0.9;" id="mask3"></div>
</div>
<!--END OF POPUP MODAL BOX FOR FIND A BOOK-->
</div> 
<!--END OF THE BODY HOLDER-->




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
<div id="successMessage" class="statusMessage"><p>Thanks for sending your message! We will get back to you shortly.</p></div>
<div id="failureMessage" class="statusMessage"><p>There was a problem sending your message. Please try again.</p></div>
<div id="incompleteMessage" class="statusMessage"><p>Please complete all the fields in the form before sending.</p></div>
<!--End of comment form-->
<!--Recommend a Tile form-->
<form id="contactForm2" action="title.php" method="post">

  <h2>Recommend a Title</h2>

  <ul>

    <li>
      <label for="senderName2" class="label2">Name</label>
      <input type="text" name="senderName2" id="senderName2" placeholder="Please type your name" required maxlength="40" class="input2" />
    </li>

    <li>
      <label for="senderEmail2" class="label2">Email Address</label>
      <input type="email" name="senderEmail2" id="senderEmail2" placeholder="Please type your email address" required maxlength="50" class="input2" />
    </li>

    <li>
      <label for="message2" style="padding-top: .5em;" class="label2">Book Details</label>
      <textarea name="message2" id="message2" placeholder="Please type your message" required cols="80" rows="10" maxlength="10000" class="textarea2"></textarea>
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
    <input type="submit" id="sendMessage2" name="sendMessage2" value="Send Email" />
    <input type="button" id="cancel2" name="cancel2" value="Cancel" />
  </div>

</form>

<div id="sendingMessage2" class="statusMessage2"><p>Sending your message. Please wait...</p></div>
<div id="successMessage2" class="statusMessage2"><p>Thanks for recommending a book title! We'll get back to you shortly.</p></div>
<div id="failureMessage2" class="statusMessage2"><p>There was a problem sending your message. Please try again.</p></div>
<div id="incompleteMessage2" class="statusMessage2"><p>Please complete all the fields in the form before sending.</p></div>
<!--End of Recommend a Title form-->
<!--<script type="text/javascript">
var Accordion1 = new Spry.Widget.Accordion("Accordion1");
</script>-->
<!-- Piwik -->
<script type="text/javascript">
  var _paq = _paq || [];
  _paq.push(["setDocumentTitle", document.domain + "/" + document.title]);
  _paq.push(["trackPageView"]);
  _paq.push(["enableLinkTracking"]);

  (function() {
    var u=(("https:" == document.location.protocol) ? "https" : "http") + "://zodml.org/piwik/";
    _paq.push(["setTrackerUrl", u+"piwik.php"]);
    _paq.push(["setSiteId", "1"]);
    var d=document, g=d.createElement("script"), s=d.getElementsByTagName("script")[0]; 

g.type="text/javascript";
    g.defer=true; g.async=true; g.src=u+"piwik.js"; s.parentNode.insertBefore(g,s);
  })();
</script>
<!-- End Piwik Code -->

<!-- Piwik Image Tracker -->
<noscript>
<img src="http://zodml.org/piwik/piwik.php?idsite=1&amp;rec=1" style="border:0" alt="" />
</noscript>
<!-- End Piwik -->
</body>
</html>