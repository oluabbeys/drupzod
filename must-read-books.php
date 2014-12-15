<?php 



ini_set('display_errors', 'off');  



function getmicrotime()

{

    list($usec, $sec) = explode(" ", microtime());

    return ((float)$usec + (float)$sec);

}



$stop_search = getmicrotime();

$time_search = ($stop_search - $start_search);



//$kword=$_GET['catalogue'];
//
//$searchtext=$_GET['search_word'];


ini_set("display_errors", "off");
								include_once("Nigeria/scripts/config.php");
								$sql2 = mysql_query("SELECT * FROM contentsupdate WHERE id=22");
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

<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
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
<meta property="fb:admins" content="100003994871719" />
<meta name="copyright" content="Zaccheus Onumba Dibiaezue Memorial Libraries" /><title>ZODML | Must-read Books </title>

<link href="css/styles.css" type="text/css" rel="stylesheet" media="screen" />

<link href="css/menu7.css" type="text/css" rel="stylesheet" media="screen" />

<link href="css/bottom.css" type="text/css" rel="stylesheet" media="screen"/>

<link rel="stylesheet" type="text/css" href="http://zodml.org/content/css/default.css"/>

<link rel="stylesheet" type="text/css" href="http://zodml.org/css2/sansation/stylesheet.css"/>

<link href="http://zodml.org/css_pirobox2/style_1/style.css" rel="stylesheet" type="text/css" />

<link href="images/favicon.ico" rel="shortcut icon" />

<!--<link href="SpryAssets/SpryAccordion.css" rel="stylesheet" type="text/css" />-->

<!--<script type="text/javascript" src=" https://ajax.googleapis.com/ajax/libs/jquery/1.6/jquery.js"></script>

<script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jquery/1.4.2/jquery.min.js"></script>-->

<script type='text/javascript' src="js/pixreg1.js"></script>

<script type='text/javascript' src="js/pixreg2.js"></script>

<script type='text/javascript' src='js/jquery.hoverIntent.minified.js'></script>

<script type='text/javascript' src='js/jquery.dcmegamenu.1.2.js'></script>

<script type="text/javascript" src="js/jquery.pikachoose.js"></script>

<script type="text/javascript" src="js/search.js"></script>

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

<script type="text/javascript" src="../js3/jquery.min.js"></script>

<script type="text/javascript" src="../js3/jquery-ui-1.8.2.custom.min.js"></script>

<script type="text/javascript" src="../js3/pirobox_extended.js"></script>

<!--<script src="SpryAssets/SpryAccordion.js" type="text/javascript"></script>-->

<script type="text/javascript">

$(document).ready(function() {

	$().piroBox_ext({

	piro_speed : 700,

		bg_alpha : 0.5,

		piro_scroll : true // pirobox always positioned at the center of the page

	});

});



</script>


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
<!-- Start of Woopra Code -->
<script>
(function(){
    var t,i,e,n=window,o=document,a=arguments,s="script",r=["config","track","identify","visit","push","call"],c=function(){var t,i=this;for(i._e=[],t=0;r.length>t;t++)(function(t){i[t]=function(){return i._e.push([t].concat(Array.prototype.slice.call(arguments,0))),i}})(r[t])};for(n._w=n._w||{},t=0;a.length>t;t++)n._w[a[t]]=n[a[t]]=n[a[t]]||new c;i=o.createElement(s),i.async=1,i.src="//static.woopra.com/js/w.js",e=o.getElementsByTagName(s)[0],e.parentNode.insertBefore(i,e)
})("woopra");

woopra.config({
    domain: 'zodml.org'
});
woopra.track();
</script>
<!-- End of Woopra Code -->

<!--FACEBOOK API-->
<div id="fb-root"></div>
<script>(function(d, s, id) {
  var js, fjs = d.getElementsByTagName(s)[0];
  if (d.getElementById(id)) return;
  js = d.createElement(s); js.id = id;
  js.src = "//connect.facebook.net/en_GB/all.js#xfbml=1";
  fjs.parentNode.insertBefore(js, fjs);
}(document, 'script', 'facebook-jssdk'));</script>

<!--END OF FACEBOOK API-->
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
<!--end code that link Addthis to google analytics-->


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

			<div id="menu_ba">

            	<?php include("menu.php");?>

            </div>

<!--END OF MENU-->



<!--CONTENT HOLDER-->

<div id="content_holder">

                		

                        <!--CONTENT LAYER 1-->

                        <div id="aboutus_content_layer1">

                        <a href="http://www.zodml.org/explore-at-zodml.php">Explore at ZODML</a> > Must Read Books</div>

                        <!--END OF CONTENT LAYER 1-->

                        <!--CONTENT LAYER 2-->

                        <?php echo $content2; ?>
                        <table>

                        <tr>

                        <td valign="top">

                        	<div id="find_books_left">

                        <table width="720px;">

                   



                            <tr> 



                              <td colspan="3" align="right" valign="top"><table id="bookt" width="100%" border="0" cellpadding="0" cellspacing="8">



                                



                                      







										<?php



//linking the pagination script

include('ps_pagination.php');



//initializing variables from the search form




include_once("db_books.php");
//if($kword=="Author")
//
//$kword="FullName";
//
//if($kword=="Title")
//
//$kword="Title";
//
//if($kword =="Subject")
//
//$kword = "Subject";
//
//if($kword == "Keyword")
//
//$kword = "Title";
//
//$start_search = getmicrotime();

//$query="SELECT DISTINCT * from books2 where Status = 'Edited' AND ".$kword." LIKE '%$searchtext%' ORDER BY Title ASC";

$query = "SELECT * FROM mustread WHERE availability='available' ORDER BY title ASC ";

//$query = "SELECT *, MATCH(FullName, Title, Subject) AGAINST($searchtext) AS SCORE FROM books2 WHERE MATCH(FullName, Title, Subject) AGAINST($searchtext) ODER BY SCORE DESC";

$sql=mysql_query($query);

$num=mysql_num_rows($sql);

$num2=$num/7;

if($num>0){

$pager = new PS_Pagination($connect, $query, 10, 5, "param1=valu1&param2=value2&catalogue=".$kword."&search_word=".$searchtext."");

	

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

												echo "<tr height=\"110\"><td><div class=\"resimg\" id=\"res".$i."\"><img src=\"correction-new/Images/".$row['picture']."\" alt=\"".$row['title']."\" title=\"".$row['title']."\" id=\"result".$row['id']."\" height=\"100\" width=\"120\"/></div><br /></td><td><input type=\"hidden\" value=\"".$row['id']."\"/></td><td align=\"left\" valign=\"top\"><font face=\"verdana\" size=\"3\" color=\"#EC9F00\"><strong><a href=\"must-read.php?id=".$row['id']."\">".$row['title']."</a></strong></font><br /><br /><font face=\"verdana\" size=\"2\" color=\"#000000\"><strong>Author : </strong>".$row['author']."</font><br></br><font face=\"verdana\" size=\"1\" color=\"#000000\"><strong>Nationality : </strong>".$row['nationality']."</font></td></tr>";

												//$author=$row['FullName'];

												//$genre=$row['Subject'];



											}		

											$i++;

											

											//echo "<p align=\"center\">".$pager->renderFullNav()."</p>";

	

	echo "<br />\n";

	

																			

										}

										//else{

											//echo  "<tr><td align=\"left\"><font face=\"trebuchet ms\" size=\"2\" color=\"#EC9F00\"><strong>No Result found in our database for the search word used.</strong></font></td></tr>";

										//}

										

										?>

                                        

                                      

										<!--<div style="padding:5px; font-size:14px; font-weight:800;"><?php //echo "Search Results for"." ".$searchtext; ?></div>-->



                                     



                                </table></td>



                            </tr>



                           



                          </table>

                          <div style="width:720px; padding:5px; margin:10px 0px 20px 0px;">

                          

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

	 //echo  "<strong>Total : $num  </strong>"; 
 //echo "  <p>&nbsp;</p>";

	echo"<div><div style=\"float:left; margin-right:20px; border:solid 1px #CCC; padding:1px; letter-spacing:1px; background:url(images/search_result.png) repeat-x; -moz-border-radius:3px;\">".$pager->renderFirst()."</div><div style=\"float:left; margin-right:20px; border:solid 1px #CCC; padding:1px; letter-spacing:1px; background:url(images/search_result.png) repeat-x; -moz-border-radius:3px;\">".$pager->renderPrev()."</div><div style=\"float:left; margin-right:20px; padding:1px;  \">".$pager->renderNav('<span>', '</span>')."</div><div style=\"float:left; margin-right:20px; border:solid 1px #CCC; padding:1px; letter-spacing:1px; background:url(images/search_result.png) repeat-x; -moz-border-radius:3px;\">".$pager->renderNext()."</div><div style=\"float:left; margin-right:20px; border:solid 1px #CCC; padding:1px; letter-spacing:1px; background:url(images/search_result.png) repeat-x; -moz-border-radius:3px;\">".$pager->renderLast()."</div></div>";



						  

						  }

						  ?>
<div style="font-family:Verdana, Geneva, sans-serif; font-size:12px; font-weight:800; color:#444; margin-top:2px;"><?php echo  "<strong>Total Number of Books : $num  </strong>"; ?></div>
                          </div>

                          </div>

                                        

    

     <div style="float:left; width:23%;">

    &nbsp;

  </div>	

    

  

    

   

                           </td>

                           

                            

                           

                          <div style="clear:both;"></div>  

                        

                        </td>

                        <td valign="top">
                        

                        <!--ACCORDION-->

                               	

                               <div id="each_book_others_hold3">

                            

                               

                            			<div id="aboutus_shortlinksbow">

                                        	

                                        	<!--<div id="aboutus_shortlinks_title"><b>Book of the Week</b></div>-->

                                   		  <div id="Accordion1" class="Accordion" tabindex="0">

                                       		  <div class="AccordionPanel">

                                       		    <div class="AccordionPanelTab">Explore at ZODML</div>

                                       		    	<div class="AccordionPanelContent">

                                                		<a href="new_title.php">New Titles</a> <br /> <a href="most-borrowed.php">Most Borrowed</a> <br/> <a href="award_winners.php">Award Winners</a> <br/>
                                                		<a href="selected.php?catalogue=Subject&search_word=nigeria&search=other">Nigerian Writing</a>  <br/> <a href="selected.php?catalogue=Subject&search_word=africa&search=other">African Writing</a>  <br/>  <a href="selected.php?catalogue=Subject&search_word=classics&search=other">Classics</a> <br /> <a href="must-read-books.php">Must Read Books</a><br /> <a href="#contactForm2">Recommend a Title</a> 

                                                

                                                	</div>

                                   		    </div>

                                           

                   			  </div>	

                            

                            	</div>

                               

                               <!--END OF ACCORDION-->


                        </td>    

                            </tr>

                            </table>



	

                       <!--END OF CONTENT LAYER 2-->

          

			

            <p>&nbsp;</p>

            <p>&nbsp;</p>

            </div>

            

</div>

          

<!--END OF CONTENT HOLDER-->



<!--FOOTER-->
<div id="footer_new_hold">
<?php //include("footer.php"); ?>
<div id="footer_new">
<div id="footer_new2">
<table cellspacing="5">
<tr>
<td valign="top"><div id="footerzac"></div></td>
<td valign="middle"><a href="http://zodml.org/privacy-policy.php">Privacy Policy</a> | <a href="http://zodml.org/disclaimer.php">Disclaimer</a> | <a href="http://zodml.org/site_map.php">ZODML Sitemap</a> | <a href="#contactForm">Contact Us</a><br /><br />196 Awolowo Road, Ikoyi, Lagos, Nigeria.<br /><br />Copyright © ZODML 2013 All Rights Reserved</td>
</tr>
<tr>
<td></td>
<td><font size="-1" color="#EC9F00"><b>Connect with us</b></font> <div id="iconsfooter"><a href="http://www.facebook.com/ZODML" target="_blank"><img src="http://zodml.org/images/facebook-icon.png" width="20" height="16" alt="facebook" title="ZODML Facebook icon" /></a> <a href="http://www.twitter.com/ZODML" target="_blank"><img src="http://zodml.org/images/twitter-bird.png" width="20" height="16" alt="twitter" title="ZODML Twitter icon" /></a> <a href="https://www.youtube.com/watch?v=83_basxYv7U&list=PLzHoQ8sgsgTrejLoZzlPjGqGWgkpRa9Jj" target="_blank"><img src="http://zodml.org/images/youtube_homepage.png" width="20" height="20" alt="youtube" title="ZODML Youtube icon" /></a></div></td>
</tr>
</table>
</div>
<div id="footer_new3">
<table width="781" height="159" cellspacing="5">
<tr>
<td width="123"><font size="-2" color="#EC9F00"><b>About Us</b></font></td>
<td width="80"><font size="-2" color="#EC9F00"><b>Discover Nigeria</b></font></td>
<td width="92"><font size="-2" color="#EC9F00"><b>Learning</b></font></td>
<td width="97"><font size="-2" color="#EC9F00"><b>Library</b></font></td>
<td width="176"><font size="-2" color="#EC9F00"><b>Support ZODML</b></font></td>
<td width="164"><font size="-2" color="#EC9F00"><b>Community</b></font></td>
</tr>
<tr>
<td><img src="http://zodml.org/images/icon.png" width="4" height="7" /> <a href="http://zodml.org/who-we-are.php">Who We Are</a></td>
<td><img src="http://zodml.org/images/icon.png" width="4" height="7" /> <a href="http://zodml.org/Nigeria/nigeria_geography_category_articles.php">Geography</a></td>
<td><img src="http://zodml.org/images/icon.png" width="4" height="7" /> <a href="http://zodml.org/past_questions.php">Past Questions</a></td>
<td><img src="http://zodml.org/images/icon.png" width="4" height="7" /> <a href="http://zodml.org/joining_the_library.php">Join the Library</a></td>
<td><img src="http://zodml.org/images/icon.png" width="4" height="7" /> <a href="http://zodml.org/Friends_of_the_library.php">Become a Friend of the Library</a></td>
<td><img src="http://zodml.org/images/icon.png" width="4" height="7" /> <a href="http://zodml.org/blog/index.php">Blog</a></td>
</tr>
<tr>
<td><img src="http://zodml.org/images/icon.png" width="4" height="7" /> <a href="http://zodml.org/what-we-do.php">What We Do</a></td>
<td><img src="http://zodml.org/images/icon.png" width="4" height="7" /> <a href="http://zodml.org/Nigeria/nigeria_people_category_articles.php">People</a></td>
<td><img src="http://zodml.org/images/icon.png" width="4" height="7" /> <a href="http://zodml.org/research_guide.php">Research Guide</a></td>
<td><img src="http://zodml.org/images/icon.png" width="4" height="7" /> <a href="http://zodml.org/ask_a_librarian.php">Get Help</a></td>
<td><img src="http://zodml.org/images/icon.png" width="4" height="7" /> <a href="http://zodml.org/volunteer.php">Volunteer at ZODML</a></td>
<td><img src="http://zodml.org/images/icon.png" width="4" height="7" /> <a href="http://zodml.org/dlc/index.php" target="_blank">Digital Learning Community</a></td>
</tr>
<tr>
<td><img src="http://zodml.org/images/icon.png" width="4" height="7" /> <a href="http://zodml.org/newsletter-archives.php">ZODML Newsletter</a></td>
<td><img src="http://zodml.org/images/icon.png" width="4" height="7" /> <a href="http://zodml.org/Nigeria/nigeria_the_diaspora_articles.php">Diaspora</a></td>
<td><img src="http://zodml.org/images/icon.png" width="4" height="7" /> <a href="http://zodml.org/career_guide.php">Career Guide</a></td>
<td><img src="http://zodml.org/images/icon.png" width="4" height="7" /> <a href="http://zodml.org/selected.php?catalogue=Subject&search_word=nigeria&search=other">Nigerian Writing</a></td>
<td></td>
<td></td>
</tr>
<tr>
<td><img src="http://zodml.org/images/icon.png" width="4" height="7" /> <a href="http://zodml.org/press.php">ZODML in the Press</a></td>
<td><img src="http://zodml.org/images/icon.png" width="4" height="7" /> <a href="http://zodml.org/Nigeria/nigeria_photos.php">Photography</a></td>
<td></td>
<td><img src="http://zodml.org/images/icon.png" width="4" height="7" /> <a href="http://zodml.org/e-library/">e-Library</a></td>
<td></td>
<td></td>
</tr>
<tr>
<td><img src="http://zodml.org/images/icon.png" width="4" height="7" /> <a href="http://zodml.org/board_of_trustees.php">Board of Trustees</a></td>
<td></td>
<td></td>
<td><img src="http://zodml.org/images/icon.png" width="4" height="7" /> <a href="http://zodml.org/catalogue.php">Catalogue</a></td>
<td></td>
<td></td>
</tr>
</table>
</div>
</div>
</div>
<!--<div id="footer22">

<table align="center" cellspacing="10">

<tr>

<td align="center">Privacy Policy | Disclaimer | <a href="site_map.php">ZODML Sitemap</a> | <a href="#contactForm">Contact Us</a></td>

</tr>

<tr>

<td align="center">Copyright© ZODML 2012 All Rights Reserved</td>

</tr>

</table>

</div>-->

<!--END OF FOOTER-->

<!--</div>--> 



<!--END OF THE BODY HOLDER-->

<!--<script type="text/javascript">

var Accordion1 = new Spry.Widget.Accordion("Accordion1");

</script>-->

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