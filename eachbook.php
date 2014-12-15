<?php
error_reporting(0);
session_start();		


$id=$_GET['id'];
$_SESSION['must']=$_GET['id'];


						//include_once("db.php");
						include_once("db_books.php");
						$query="select * from books2 where id='$id'";

						$sql=mysql_query($query);

						$row=mysql_fetch_array($sql);
						
						$title = $row['Title'];
						
				
						?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />

<meta property="og:title" content="<?php echo $title; ?>" />
<meta property="og:image" content="http://www.zodml.org/correction-new/Images/<?php echo $row['coverfront']; ?>" /> 
<meta property="og:description" content="<?php echo $row['Subject']; ?>" />  
<meta property="og:url" content="http://www.zodml.org/eachbook.php?id=<?php echo $row['Id']; ?>" />

<title>ZODML | Online Catalogue | Title - <?php echo $title; ?></title>
<link href="css/styles.css" type="text/css" rel="stylesheet" media="screen" />
<link href="css/menu.css" type="text/css" rel="stylesheet" media="screen" />
<link href="css/bottom.css" type="text/css" rel="stylesheet" media="screen"/>
<link href="images/favicon.ico" rel="shortcut icon" />
<link rel="stylesheet" type="text/css" href="css/jkmegamenu.css" />
<!--<script type="text/javascript" src=" https://ajax.googleapis.com/ajax/libs/jquery/1.6/jquery.js"></script>-->
<script type='text/javascript' src="js/pixreg1.js"></script>
<script type='text/javascript' src="js/pixreg2.js"></script>
<script type='text/javascript' src='js/jquery.hoverIntent.minified.js'></script>
<script type='text/javascript' src='js/jquery.dcmegamenu.1.2.js'></script>
<script type="text/javascript" src="js/contact.js"></script>
<script type="text/javascript" src="js2/megamenu.js"></script>
<script type="text/javascript" src="js2/jkmegamenu.js"></script>
<script type="text/javascript">
$(document).ready(function($){
	$('#mega-menu-tut').dcMegaMenu({
		rowItems: '3',
		speed: 'fast'
	});
});
</script>
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


<script type="text/javascript" src="../js3/jquery-1.5.1.min.js"></script>

<script type="text/javascript" src="../js3/jquery-ui-1.8.13.custom.min.js"></script>

<script type="text/javascript" src="../lightbox/js/jquery.lightbox-0.5.js"></script>

<link type="text/css" rel="stylesheet" href="../lightbox/css/jquery.lightbox-0.5.css" />

<script type="text/javascript" src="../js3/search.js"></script>

<script type="text/javascript" src="../star/jquery.MetaData.js"></script>

<script type="text/javascript" src="../star/jquery.rating.js"></script>

<script type="text/javascript" src="../star/jquery.rating.pack.js"></script>

<link rel="stylesheet" type="text/css" href="../css2/ui-lightness/jquery-ui-1.8.2.custom.css" />

<link rel="stylesheet" type="text/css" href="../star/jquery.rating.css" />


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

<script type="text/javascript">

$(function(){

	$('#showcomment').click(function(){

			$('#commentbox').dialog({

			

						resizable: false,

						width:500,

						modal: true,

						buttons: {

						Close: function() {

					$( this ).dialog( "close" );

				}

			}

			

		});	

	});

});



$(function(){

	$('#submitrate').click(function(){

		var rateval=$("input:radio[name='star1']:checked").val();

		var bookid=$('#bookidentity').val();

			$.get("../server/fetch.php?cmd=0_4&par="+rateval+"&id="+bookid, function(data){

				var res=$('#rateresult').html("");

				res.append('<font face="trebuchet ms" size="1" color="#850000">'+data+'</font>');

			});

	});

});

</script>




<!--Facebook API-->
<div id="fb-root"></div>
<script>(function(d, s, id) {
  var js, fjs = d.getElementsByTagName(s)[0];
  if (d.getElementById(id)) return;
  js = d.createElement(s); js.id = id;
  js.src = "//connect.facebook.net/en_GB/all.js#xfbml=1";
  fjs.parentNode.insertBefore(js, fjs);
}(document, 'script', 'facebook-jssdk'));</script>
<!--end of Facebook API-->



<!-- Google+ tag. -->
<script type="text/javascript">
  (function() {
    var po = document.createElement('script'); po.type = 'text/javascript'; po.async = true;
    po.src = 'https://apis.google.com/js/plusone.js';
    var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(po, s);
  })();
</script>
<!-- End of Google+ tag. -->


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

<script type="text/javascript">
  addthis.layers({
    'theme' : 'transparent',  
    'whatsnext' : {}  
  });
</script>
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
                <div id="subheader">
                <br />
                	<?php include("search_bar.php"); ?>
                </div>	
                </div>
		<!--END OF HEADER-->

<!--MENU-->
			<div id="menu_ba">
            	<?php include("menu.php");?>
            </div>
<!--END OF MENU-->

<!--CONTENT HOLDER-->
<div id="content_holder">
 
                		
                        <!--CONTENT LAYER 1-->
                        <div id="aboutus_content_eachbook" style="height:40px;">
                        <!--LEFT-->
                        <div style="font-size:14px; font-family:'Lucida Sans Unicode', 'Lucida Grande', sans-serif; line-height:25px; width:700px; height:35px; float:left;">
                        <table>
                        <tr>
                        <td height="30" valign="top">
                        <div style="width:450px; font-size:13px;"><img src="images/back.png" width="9" height="11" />&nbsp;&nbsp;<span id="backtocatalogue"><a href="catalogue.php">Catalogue Home</a></span> | <span style="color:#EC9F00; font-size:13px;"><?php echo $title; ?></span> Details</div>
                        </td>
                        
                        </tr>
                        </table>
                        </div>
                        <!--END OF LEFT-->
                        <!--RIGHT-->
                        <div style="font-size:14px; font-family:Verdana; line-height:25px; width:250px; height:35px; float:right; text-align:right;"><span id="findbook" style="cursor:pointer;"><button class="findabook">Search Catalogue</button></span></div>
    					</div>
                        <!--END OF RIGHT-->
                        <!--END OF CONTENT LAYER 1-->
                        <!--CONTENT LAYER 2-->
                        <div id="aboutus_content_holder2">
                        <table>
                        <tr><td>
                        			<div id="aboutus_content_holder3_eachbook">
                                        <div id="each_book">
                                         
                                        <table width="100%" border="0" cellpadding="0" cellspacing="15">

                            <!--DWLayoutTable-->

                            <!--<div id="fb-root"></div>

                            <script src="http://connect.facebook.net/en_US/all.js#appId=245147332191834&amp;xfbml=1"></script>

                            <fb:like href="www.zodmel.org/findbooks.php" send="true" width="650" show_faces="false" action="like" font=""></fb:like> 
-->
                            <!--<tr> 

                              <td width="127" height="21"><code></code></td>

                              <td width="130"><code></code></td>

                              <td width="443"><code></code></td>

                            </tr>-->

                            <!--<tr> 

                              <td  align="center" valign="top" class="txtac"><code><strong>&raquo; <a href="findbook2.php" class="Navboxa">Back to Search</a></strong></code></td>

                              

                            <td><code></code></td>

                            <td><code></code></td>

                            </tr>-->

                             <tr> 

                              <td valign="top" bgcolor="" ><div style="margin:0px 30px 0px 10px;" class="txtac"><code><img src="correction-new/Images/<?php echo $row['coverfront']; ?>" width="150" height="150" /></code></div></td>

                              <td colspan="2" ><code><font face="verdana" size="3" color="#EC9F00"><strong><?php echo $title; ?></strong></font><br /><br />

                              <font face="verdana" size="1" color="#000000">Average Rating</font>          

<?php
include("db.php");
$query4="select * from rating where BookId='$id'";

$sql4=mysql_query($query4);

$num=mysql_num_rows($sql4);

if($num>0){

	$rates=0;

while($row3=mysql_fetch_array($sql4)){

	$rates += $row3['Rating'];

}

$avg=$rates/$num;

}

else

$avg=0;

?>                              

<input name="avg" type="radio" class="star" disabled="disabled" <?php if($avg>=0.5 && $avg<1.5) echo "checked=\"checked\""; ?>/>

<input name="avg" type="radio" class="star" disabled="disabled" <?php if($avg>=1.5 && $avg<2.5) echo "checked=\"checked\""; ?>/>

<input name="avg" type="radio" class="star" disabled="disabled" <?php if($avg>=2.5 && $avg<3.5) echo "checked=\"checked\""; ?>/>

<input name="avg" type="radio" class="star" disabled="disabled" <?php if($avg>=3.5 && $avg<4.5) echo "checked=\"checked\""; ?>/>

<input name="avg" type="radio" class="star" disabled="disabled" <?php if($avg>=4.5 && $avg<=5) echo "checked=\"checked\""; ?>/>
                              </code></td></tr>

                              <tr><td colspan="3"><code></code></td></tr>

     



                               <tr><td ><code><font face="verdana" size="2" color="#000000"><strong>Author:</strong></font></code></td><td colspan="2"style="border-bottom:#CCC 1px solid;"><code><font face="verdana" size="2" color="#000000"><br />
                               <?php echo $row['FullName']; ?></font><br /><br />
                               </code></td></tr>

                              <tr><td ><code><font face="verdana" size="2" color="#000000"><strong>Publisher:</strong></font></code></td><td colspan="2" style="border-bottom:#CCC 1px solid"><code><font face="verdana" size="2" color="#000000"><br />
                              <?php echo $row['Publishers']; ?></font><br /><br />
                              </code></td></tr>

                              <tr><td ><code><font face="verdana" size="2" color="#000000"><strong>Publication Year:</strong></font></code></td><td colspan="2" style="border-bottom:#CCC 1px solid"><code><font face="verdana" size="2" color="#000000"><br />
                              <?php echo $row['Year']; ?></font><br /><br />
                              </code></td></tr>

                              <tr><td ><code><font face="verdana" size="2" color="#000000"><strong>Genre/Subject:</strong></font></code></td><td colspan="2" style="border-bottom:#CCC 1px solid"><code><font face="verdana" size="2" color="#000000"><br />
                              <?php echo $row['Subject']; ?></font><br /><br />
                              </code></td></tr>

                              <tr><td ><code><font face="verdana" size="2" color="#000000"><strong>ISBN:</strong></font></code></td><td colspan="2" style="border-bottom:#CCC 1px solid"><code><font face="verdana" size="2" color="#000000"><br />
                              <?php echo $row['isbn']; ?></font><br /><br />
                              </code></td></tr>

                              <tr><td><code><font face="verdana" size="2" color="#000000"><strong>No of Pages:</strong></font></code></td><td colspan="2" style="border-bottom:#CCC 1px solid"><code><font face="verdana" size="2" color="#000000"><br />
                              <?php echo $row['Pagecount']; ?></font><br /><br />
                              </code></td></tr>
                              
                              <tr><td><code><font face="verdana" size="2" color="#000000"><strong>Summary:</strong></font></code></td>
                              <td colspan="2" style="border-bottom:#CCC 1px solid">
                              <div style="width:422px; height:auto; padding:3px; font-size:13px; color:#000; font:Verdana, Geneva, sans-serif; line-height:22px;"><?php echo $row['Summary']; ?></div>
                              </td>
                              </tr>

                              <tr><td colspan="3"><code></code></td></tr>

                                                       <tr><td><code><font face="trebuchet ms" size="2" color="#000000"><strong>Rate this book:</strong></font></code></td><td colspan="2">
                                                       <input name="star1" type="radio" class="star" value="1"/>

<input name="star1" type="radio" class="star" value="2"/>

<input name="star1" type="radio" class="star" value="3"/>

<input name="star1" type="radio" class="star" value="4"/>

<input name="star1" type="radio" class="star" value="5"/>

<!--»	-->&nbsp;&nbsp;<img src="images/list.png" width="7" height="10" />

<font face="trebuchet ms" size="2" color="#850000"><a id="submitrate" href="#" style="text-decoration:none;">Submit Rating</a></font>

<input type="hidden" value="<?php echo $id; ?>" id="bookidentity" />&nbsp;&nbsp;

&nbsp;&nbsp;&nbsp;<span id="rateresult"></span>

<br />

                                          </td></tr>
              
                                           <tr>
                                    <td width="73" >
                                    <!-- First level Comment-->
                                    <code><script type="text/javascript">
function open_win_seyi(){
	window.open("eachbookcomment.php?code=<?php echo $id; ?>","_blank","menubar=no, scrollbar=no, resizable=no, width=400, height=470");
}
</script> 

                        
                        <div id="each_book_add_comment" onclick="open_win_seyi();" title="Add your Comment"></div>
                       <!--End of First Level Comment--></code></td>
                                    <td width="73" >&nbsp;</td>
                                    <td colspan="3"></td>
                                  </tr>
                                  <!--<tr>
                                    <td colspan="5"><code></code></td>
                                  </tr>-->
                                  <?php
							include("db.php");
							$query2="select * from bookscomment where BookId='$id'  and childReply = '' order by Id desc";

							$sql2=mysql_query($query2);

							while($row2=mysql_fetch_array($sql2)){ 
							$namefirst= $row2['Name'];
							$commentfirst= $row2['Comment'];
							$firstreplyid= $row2['ParentReply'];
							$datefirst = $row2['DateComment'];
						
							
							?>
                                  <tr>
                                    <td colspan="5"><code>
                                      <div style="word-wrap:break-word; width:550px; border:solid 1px #EC9F00; padding:5px; overflow:auto;"><code><font face="verdana" size="2" color="#444" ><strong>Posted By: <?php echo $namefirst; ?> &nbsp; &nbsp; &nbsp; <?php echo $datefirst;?> </strong></font><br />
                                            <font face="Verdana" size="2"><?php echo $commentfirst; ?></font></code></div>
                                    </code></td>
                                  </tr>
                                  <tr>
                                    <td width="73" ><code><!-- Second Level Comment-->
                                    <a href="eachbookcomment-reply.php?firstreplyid=<?php echo $firstreplyid; ?>" onclick="window.open('eachbookcomment-reply.php?firstreplyid=<?php echo $firstreplyid; ?>','popup','width=400,height=470,scrollbars=no,resizable=no,toolbar=no,directories=no,location=no,menubar=no,status=no,left=0,top=0' ); return false"><div id="each_book_add_reply"; title="Reply to this Comment"></div>
                                    </a> 
                       <!--End of Second Level Comment--></code></td>
                                    <td width="73" >&nbsp;</td>
                                    <td colspan="3"></td>
                                  </tr>
                                   <?php
							//include("db.php");
							
							$ParentReplyid = $row2['ParentReply'];
							
							$query9="select * from bookscomment where ChildReply='$ParentReplyid' and BookId='$id' order by Id desc";

							$sql9=mysql_query($query9);

							while($row9=mysql_fetch_array($sql9)){ 

							?>
                                  <tr>
                                    
                                    <td colspan="5"><code>
                                      <div style="word-wrap:break-word; width:550px; border:solid 1px #EC9F00; padding:5px; overflow:auto;"><code><font face="verdana" size="2" color="#444" ><strong>Posted By: <?php echo $row9['Name']; ?> &nbsp; &nbsp; &nbsp; <?php echo  $row9['DateComment']; ?></strong></font><br />
                                            <font face="Verdana" size="2"><?php echo $row9['Comment']; ?></font></code></div>
                                    </code></td>
                                  </tr>
                                  <?php

							}

							?>
                                  <!--<tr>
                                    <td colspan="4"><code>&nbsp;</code></td>
                                  </tr>-->
                                  
                                  <?php

							}

							?>
 
                          </table>
                                        
                                 <p>&nbsp;</p>  
                                  <p>&nbsp;</p>      
                                        
                                        </div>
                         			</div>
                           </td>
                           <!--<td valign="top">         
                                    <div id="each_book_others_hold">
                               
                            			<div id="aboutus_shortlinks">
                                        	<div id="aboutus_shortlinks_title"> </div>
                                        </div>	
                            
                            	</div>
                            </td>-->
                            </tr>
                            </table>        
                        </div>		
                       <!--END OF CONTENT LAYER 2-->
          
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
<div id="successMessage" class="statusMessage"><p>Thanks for sending your message! We will get back to you shortly.</p></div>
<div id="failureMessage" class="statusMessage"><p>There was a problem sending your message. Please try again.</p></div>
<div id="incompleteMessage" class="statusMessage"><p>Please complete all the fields in the form before sending.</p></div>
<script type="text/javascript" src="//assets.pinterest.com/js/pinit.js"></script>
<script type="text/javascript" data-pin-hover="true" src="//assets.pinterest.com/js/pinit.js"></script>
<script src="http://platform.tumblr.com/v1/share.js"></script>
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