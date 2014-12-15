<?php 
include("scripts/config.php");
//Getting the value being passed on from people categories page
if(isset($_GET['article_id'])){
	$article_code = $_GET['article_id'];
}

// including the scripts that gives access to the database
					

//querying the database
$sql4 = mysql_query("SELECT * FROM articles WHERE title ='$article_code'");

// fetching data from the database
$row4 = mysql_fetch_array($sql4);
$url = $row4['url'];
$cat = $row4['category'];
$title = $row4['title'];
$id = $row4['id'];

session_start();

$_SESSION['must']=$row4['id'];


ini_set("display_errors", "off");
include_once("../Nigeria/scripts/config.php");
$sql2 = mysql_query("SELECT * FROM contentsupdate WHERE id=64");
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
<title>ZODML | Discover Nigeria | Facts about Nigeria | The Diaspora | <?php echo $title; ?></title>
<link href="../css/styles.css" type="text/css" rel="stylesheet" media="screen" />
<link href="../css/menu2.css" type="text/css" rel="stylesheet" media="screen" />
<link href="../css/bottom.css" type="text/css" rel="stylesheet" media="screen"/>
<link href="../images/favicon.ico" rel="shortcut icon" />
<link rel="stylesheet" type="text/css" href="../css/jkmegamenu.css" />
<script type="text/javascript" src="../js2/megamenu.js"></script>
<script type="text/javascript" src="../js2/jkmegamenu.js"></script>
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

<script type="text/javascript">
jkmegamenu.definemenu("megaanchor", "megamenu1", "mouseover")
</script>

<script type="text/javascript" src="../js/loading.js"></script>

</script>

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
                <div id="header2_new">
                <a href="http://zodml.org"><div id="logo-link"></div></a>
                <div id="subheader2_new">
                <br />
                	<?php include("search_bar.php"); ?>
                </div>	
                </div>
<!--END OF HEADER-->

<!--MENU-->
			<div id="menu_ba22">
            	<?php include("menu.php");?>
            </div>
<!--END OF MENU-->

<!--CONTENT-->
<div id="content_holder_contents">

                
                
                <!--CONTENT LAYER 2-->
                <div id="discover_nig_content_layer2_sample">
                <div id="browse_by_sample2">
                <?php //include("browse2.php"); ?>
                	<!--SAMPLE DIV-->
                	<div id="s_sample2">
                    	<!--Article title-->
                    	<div style="width:525px; height:40px; float:left; margin-right:10px;"><a href="http://zodml.org">Home</a> > <a href="http://zodml.org/Nigeria">Nigeria</a> > <a href="http://zodml.org/Nigeria/nigeria_the_diaspora_articles.php">Diaspora </a> > <?php echo $row4['title']; ?></div> 
                        <!--End of Article title-->
                       
                    <!--Search for Article-->
                    <div style="width:260px; height:40px; float:left; margin-right:0px;"><table><tr><td valign="middle"><form action="search.php" method="GET"><input type="text" name="search_term" id="search_article_inputt" value="Search for articles" onfocus="if(this.value=='Search for articles'){this.value=''};" onblur="if(this.value==''){this.value=='Search for articles'};" /> <input name="search_button" type="submit" value="Search" id="search_button2"></form></td></tr></table></div>
                    <!--End of Search for Article--> 
                    <!--More Categories-->
                        		<div style="width:160px; height:40px; float:left; margin:10px 0px 20px 0px;">
                                	<span id="megaanchor" style="cursor:pointer;"><img src="../images/more-categories.png" width="162" height="32" /></span>
                                    <div id="megamenu1" class="megamenu">
                                        <div class="column">
                                        <h3><a href="nigeria_the_diaspora_articles.php">The Diaspora Home</a></h3>
                                            <ul>
                                            <li><a href="Geography/">Geography</a></li>
                                            <li><a href="nigeria_people_category_articles.php">People</a></li>
                                            <li><a href="nigeria_photos.php">Photography</a></li>
                                            <li><a href="add-article.php">Submit an Article</a></li>
                                            </ul>
                                        </div>
                                      </div>
                        		</div>
                     <!--End of More Categories-->
       			  </div>
                            <!--END OF SAMPLE DIV-->
                </div>
                </div>
                <!--CONTENNT LAYER CATEGORY-->
               
                <!--END OF CONTENT LAYER CATEGORY-->
          			<!--<div id="discover_nig_content_full_story_topic2">
                    <table>
                    <tr>
                    <td>
                    <div style="width:700px;"><?php print $row4['title']; ?></div>
                    </td>
                    <td><span style="font-size:11px; color:#6A6A6A;">Share this article</span></td>
                    <td valign="top" align="right"><div id="email_a_friend" onclick="open_win();" title="Email a friend"></div></td>
                    <td>-->
                            <!--facebook API-->
                            	<!--<div class="fb-like" data-href="http://zodml.org/Nigeria/nigeria_the_diaspora_content_articles.php?article_id=<?php echo $article_code; ?>" data-send="false" data-layout="button_count" data-width="100" data-show-faces="false" data-font="verdana" style="margin:0px 0px 0px 10px;"></div>-->
                            
                            <!--End of facebook API-->
                           <!-- </td>
                    </tr>
                    </table>
                    </div>-->
                <!--CONTENT LAYER 3-->
                <div id="discover_nigeria_full_story_hold2">
                <table cellspacing="16">
                
                 <tr>
                  <td valign="top">
                <table>
              <!--  first row for body-->
                
                
                
                <tr>
                	<td valign="top">
                	<div id="discover_nigeria_full_story2">
                    	
                    	<?php print $row4['contents']; ?>
                    </div>
                    </td>
                    </tr>
                    
                    <tr>
                                    <td width="73" >
                                    <!-- First level Comment-->
                                    <code><script type="text/javascript">
function open_win_seyi(){
	window.open("nigeria-comment.php?code=<?php echo $row4['id']; ?>","_blank","menubar=no, scrollbar=no, resizable=no, width=400, height=550");
}
</script> 

                        
                        <div id="each_book_add_comment" onclick="open_win_seyi();" title="Add your Comment"></div>
                       <!--End of First Level Comment--></code></td>
                                    
                                    <td >&nbsp;</td>
                                  </tr>
                                  
                                  <tr>
                                    <td colspan="2"><code></code></td>
                                  </tr>
                                  
                                  <?php
							include("../db.php");
							$query21="select * from articlescomment where BookId='$id'  and childReply = '' order by Id desc";

							$sql21=mysql_query($query21);

							while($row21=mysql_fetch_array($sql21)){ 
							$namefirst= $row21['Name'];
							$commentfirst= $row21['Comment'];
							$firstreplyid= $row21['ParentReply'];
							$datefirst = $row21['DateComment'];
						
							
							?>
                                  <tr>
                                    <td colspan="2"><code>
                                      <div style="word-wrap:break-word; width:450px; border:solid 1px #EC9F00; padding:5px; overflow:auto;"><code><font face="verdana" size="2" color="#444" ><strong>Posted By: <?php echo $namefirst; ?> &nbsp; &nbsp; &nbsp; <?php echo $datefirst;?> </strong></font><br />
                                            <font face="Verdana" size="2"><?php echo $commentfirst; ?></font></code></div>
                                    </code></td>
                                  </tr>
                                  
                                  <tr>
                                    <td width="73" ><code><!-- Second Level Comment-->
                                    <a href="nigeria-commment-reply.php?firstreplyid=<?php echo $firstreplyid; ?>" onclick="window.open('nigeria-comment-reply.php?firstreplyid=<?php echo $firstreplyid; ?>','popup','width=400,height=350,scrollbars=no,resizable=no,toolbar=no,directories=no,location=no,menubar=no,status=no,left=0,top=0' ); return false"><div id="each_book_add_reply"; title="Reply to this Comment"></div>
                                    </a> 
                       <!--End of Second Level Comment--></code></td>
                                    <td >&nbsp;</td>                                  
                                  </tr>
                                  
                                   <?php
							//include("db.php");
							
							$ParentReplyid = $row21['ParentReply'];
							
							$query9="select * from articlescomment where ChildReply='$ParentReplyid' and BookId='$id' order by Id desc";

							$sql9=mysql_query($query9);

							while($row9=mysql_fetch_array($sql9)){ 

							?>
                                  <tr>
                                    
                                    <td ><code>
                                      <div style="word-wrap:break-word; width:450px; border:solid 1px #EC9F00; padding:5px; overflow:auto;"><code><font face="verdana" size="2" color="#444" ><strong>Posted By: <?php echo $row9['Name']; ?> &nbsp; &nbsp; &nbsp; <?php echo  $row9['DateComment']; ?></strong></font><br />
                                            <font face="Verdana" size="2"><?php echo $row9['Comment']; ?></font></code></div>
                                    </code></td>
                                  </tr>
                                  <?php

							}

							?>
                                  <tr>
                                    <td colspan="2"><code>------------------------DISCOVER NIGERIA------------------------</code></td>
                                  </tr>
                                  
                                  <?php

							}

							?>
                
                
                  </table>  
                    </td>
                    
                    
                    <td valign="top">
                    <div style="margin:20px 0px 0px 10px; width:260px; border:solid 1px #CCC; line-height:30px;">
                    	<div id="aboutus_shortlinks_titlebow_related"><b>Other Articles</b></div>
                        <ul>
                        <?php
							include_once("scripts/config.php");
							$rel = mysql_query('SELECT title, contents, category, searchtitle, hash FROM articles WHERE category="The Diaspora" AND id!=".$id." ORDER BY title ASC');
							//$rel = mysql_query('SELECT * FROM articles WHERE title!="$title" AND category="The Diaspora" ORDER BY title ASC');
							//$rel = mysql_query("SELECT DISTINCT * FROM articles WHERE category='Geography' ORDER BY title ASC LIMIT 0,10");
							while($row5 = mysql_fetch_array($rel)){
								$rel_title = $row5['title'];
								
								echo "<li><a href=\"nigeria_the_diaspora_content_articles.php?article_id=$rel_title\">$rel_title</a></li>";
								
					   ?>
                       <?php } ?>
                       </ul>
                    
                    </div>
                    
                    <?php include("rotator.php"); ?>
                    </td>
                    </tr>
                    </table>
                    
                    <!--<div id="discover_nigeria_full_story_icons">
                    	
                    </div>-->
                    <p>&nbsp;</p>
                </div>    
                <!--END OF CONTENT LAYER 3-->
                
                <!--CONTENT LAYER 4-->
                
                <!--END OF CONTENT LAYER 4-->
                
                <!--CONTENT LAYER 5-->
                
                <!--END OF CONTENT LAYER 5-->

</div>
<!--END OF CONTENT-->

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
 <li>
    <center>
<?php
          require_once('../recaptchalib.php');
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
<script type="text/javascript" src="//assets.pinterest.com/js/pinit.js"></script>
<script type="text/javascript" data-pin-hover="true" src="//assets.pinterest.com/js/pinit.js"></script>
<script src="http://platform.tumblr.com/v1/share.js"></script>
</body>
</html>