 <?php
ini_set("display_errors", "off");

if(isset($_GET['bookid'])){
	$bookid = $_GET['bookid'];
}

//include_once("db.php");
include_once("db_books.php");
//Initial config
//$query="SELECT * FROM books2 where Id='$bookid'";
//Present config
$query="SELECT * FROM books2 where Title='$bookid'";
$sql=mysql_query($query);
$row=mysql_fetch_array($sql);


 ?>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>ZODML | Book of the Week</title>
<link href="css/styles.css" type="text/css" rel="stylesheet" media="screen" />
<link href="css/menu.css" type="text/css" rel="stylesheet" media="screen" />
<link href="css/bottom.css" type="text/css" rel="stylesheet" media="screen"/>
<link href="images/favicon.ico" rel="shortcut icon" />
<script type='text/javascript' src="js/pixreg1.js"></script>
<script type='text/javascript' src='js/jquery.hoverIntent.minified.js'></script>
<script type='text/javascript' src='js/jquery.dcmegamenu.1.2.js'></script>
<script type="text/javascript" src="js/contact.js"></script>
<script type="text/javascript">
$(document).ready(function($){
	$('#mega-menu-tut').dcMegaMenu({
		rowItems: '3',
		speed: 'fast'
	});
});
</script>
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
var addthis_config = {
     data_track_clickback: True
} 

<!-- AddThis Button END -->
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
            	<?php include("menu.php"); ?>
            </div>
<!--END OF MENU-->

<!--CONTENT HOLDER-->
<div id="content_holder">
                		
                        <!--CONTENT LAYER 1-->
                        <div id="aboutus_content_layer1">
                       <span style="color:#EC9F00; font-size:14px;">Book of the Week: <?php echo $row['Title']; ?></span>
    </div>
                        <!--END OF CONTENT LAYER 1-->
                        <!--CONTENT LAYER 2-->
                        <div id="aboutus_content_holder2">
                        <table>
                        <tr><td valign="top">
                        			<div id="aboutus_content_holder3_eachbook">
                                        <div id="each_book">
                                         
                                        <table width="100%" border="0" cellpadding="0" cellspacing="5">

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

                            <tr> 

                              <!--<td width="127" height="28" align="center" valign="middle" class="txtac"><code><strong>&raquo; <a href="findbook2.php" class="Navboxa">Back to Search</a></strong></code></td>

                              

                            <td><code></code></td>

                            <td><code></code></td>-->

                            </tr>

                             <tr> 

                              <td height="61" valign="top" bgcolor="" ><div style="padding:0px 0px 0px 20px;" class="txtac"><code><img src="../correction-new/Images/<?php echo $row['coverfront']; ?>" width="120" height="120" /></code></div></td>

                              <td colspan="2" valign="top"><code><font face="trebuchet ms" size="3" color="#850000"><strong><?php echo $row['Title']; ?></strong></font><br /><br />

                              <font face="trebuchet ms" size="1" color="#000000">Average Rating</font>          

<?php

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

     



                               <tr><td ><code><font face="trebuchet ms" size="2" color="#000000"><strong>Author:</strong></font></code></td><td colspan="2"style="border-bottom:#AFB3C0 1px solid;"><code><font face="trebuchet ms" size="2" color="#000000"><br />
                               <?php echo $row['FullName']; ?></font><br /><br />
                               </code></td></tr>

                              <tr><td ><code><font face="trebuchet ms" size="2" color="#000000"><strong>Publisher:</strong></font></code></td><td colspan="2" style="border-bottom:#AFB3C0 1px solid"><code><font face="trebuchet ms" size="2" color="#000000"><br />
                              <?php echo $row['Publishers']; ?></font><br /><br />
                              </code></td></tr>

                              <tr><td ><code><font face="trebuchet ms" size="2" color="#000000"><strong>Publication Year:</strong></font></code></td><td colspan="2" style="border-bottom:#AFB3C0 1px solid"><code><font face="trebuchet ms" size="2" color="#000000"><br />
                              <?php echo $row['Year']; ?></font><br /><br />
                              </code></td></tr>

                              <tr><td ><code><font face="trebuchet ms" size="2" color="#000000"><strong>Genre/Subject:</strong></font></code></td><td colspan="2" style="border-bottom:#AFB3C0 1px solid"><code><font face="trebuchet ms" size="2" color="#000000"><br />
                              <?php echo $row['Subject']; ?></font><br /><br />
                              </code></td></tr>

                              <tr><td ><code><font face="trebuchet ms" size="2" color="#000000"><strong>ISBN:</strong></font></code></td><td colspan="2" style="border-bottom:#AFB3C0 1px solid"><code><font face="trebuchet ms" size="2" color="#000000"><br />
                              <?php echo $row['isbn']; ?></font><br /><br />
                              </code></td></tr>

                              <tr><td><code><font face="trebuchet ms" size="2" color="#000000"><strong>No of Pages:</strong></font></code></td><td colspan="2" style="border-bottom:#AFB3C0 1px solid"><code><font face="trebuchet ms" size="2" color="#000000"><br />
                              <?php echo $row['Pagecount']; ?></font><br /><br />
                              </code></td></tr>

                              <tr><td colspan="3"><code></code></td></tr>

                                                       <tr><td><code><font face="trebuchet ms" size="2" color="#000000"><strong>Rate this book:</strong></font></code></td><td colspan="2" style="border-bottom:#AFB3C0 1px solid">
                                                       <input name="star1" type="radio" class="star" value="1"/>

<input name="star1" type="radio" class="star" value="2"/>

<input name="star1" type="radio" class="star" value="3"/>

<input name="star1" type="radio" class="star" value="4"/>

<input name="star1" type="radio" class="star" value="5"/>

»	

<font face="trebuchet ms" size="2" color="#850000"><a id="submitrate" href="#" style="text-decoration:none;">Submit Rating</a></font>

<input type="hidden" value="<?php echo $id; ?>" id="bookidentity" />&nbsp;&nbsp;

&nbsp;&nbsp;&nbsp;<span id="rateresult"></span>

<br />

                                          </td></tr>
                                          <p>&nbsp;</p>

                              <!--<tr><td><font face="trebuchet ms" size="2" color="#000000"><a href="#" id="showcomment">Add Comment</a></font></td><td colspan="2"></td></tr>-->

                              <tr><td></td>

                              

                              <td colspan="2" valign="top" bgcolor="" class="txtac"><div style="padding:14px 0px 0px 0px; display:none;" id="commentbox"> 

                               
                                <input type="hidden" id="bookid" value="<?php echo $id; ?>"/>

                                  

                                
                                  <h3 align="center">Comment on this book</h3>

                                    <p>&nbsp; &nbsp;Email&nbsp; &nbsp;&nbsp; &nbsp;&nbsp; &nbsp;

                                    <input name="email" type="text" style="width:300px;height:24px" id="email">

                                    <br/> <div style="margin-left:100px;"><span id="emailerror" style="display:none;"><font color="red">**Please Enter a Valid Email**</font></span></div>

                                      

                                    &nbsp; &nbsp; </p>

                                      <p>&nbsp; &nbsp;Name&nbsp; &nbsp;&nbsp; &nbsp;&nbsp; &nbsp;

                                      <input name="name" type="text" style="width:300px;height:24px" id="name">

                                      <br/><div style="margin-left:100px;"><span id="nameerror" style="display:none;"><font color="red">**Please Enter a Name**</font></span></div>

                                      

                                      &nbsp; &nbsp;</p>



                                      

                                    <p>&nbsp; &nbsp;Comment&nbsp; &nbsp;

                                    <textarea name="comment"style="width:300px;height:100px" id="comment"></textarea>

                                    <br/><div style="margin-left:10px;"><span id="commenterror" style="display:none;"><font color="red">Please Type a Comment</font></span> </div>

                                      

                                    &nbsp; &nbsp;</p>

                                    <p>

									  &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;

                                    <input type="button" name="Submit"  id="postbutton" value="Post">                                  

                                                                    
                              </div></td>

                              <td></td>

                            </tr>

							<tr>

                            <td colspan="3">

                            <div id="commentadddiv" style="width:100%;">

                            <div id="loading2" style="display:none;">

                                      <img src="loading.gif" style="margin-left:46%;"/><br />

                                      
                                      <p align="center"><code>Please Wait!!!</code></p>

                                      </div>

                            <table id="commentadd" style="width:100%;">

                            

                            </table>

                            </div>

                            </td></tr>

                           

						<!--<tr><td>&nbsp;</td><td colspan="2">&nbsp;</td></tr>
                        <tr><td>&nbsp;</td><td colspan="2">&nbsp;</td></tr>
                        <tr><td>&nbsp;</td><td colspan="2">&nbsp;</td></tr>-->
                           

                          </table>
                                        
                                 <p>&nbsp;</p>  
                                  <p>&nbsp;</p>      
                                        
                                        </div>
                         			</div>
                           </td>
                           <td valign="top">         
                                    <div id="each_book_others_hold">
                               			<div id="aboutus_shortlinks_title_eachbook2"><b>Archives</b></div>
                            			<div id="aboutus_shortlinksbook">
                                        	
                                            <?php 
											include_once("db.php");
											$query6 = mysql_query("SELECT * FROM bookoftheweek ORDER BY title DESC");
												while($row6 = mysql_fetch_array($query6)){
													
													$booktitle6 = $row6["title"];
											?>
                                            <div id="bookdata"><?php echo $booktitle6;?></div>
                                            
                                            <?php } ?>
                                            	
                                                
                                                
                                                
                                        	</div>	
                            
                            	</div>
                            </td>
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
<div id="successMessage" class="statusMessage"><p>Thanks for sending your message! We'll get back to you shortly.</p></div>
<div id="failureMessage" class="statusMessage"><p>There was a problem sending your message. Please try again.</p></div>
<div id="incompleteMessage" class="statusMessage"><p>Please complete all the fields in the form before sending.</p></div>
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
    var d=document, g=d.createElement("script"), s=d.getElementsByTagName("script")[0]; g.type="text/javascript";
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