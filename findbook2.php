<?php 



ini_set('display_errors', 'off');  



function getmicrotime()

{

    list($usec, $sec) = explode(" ", microtime());

    return ((float)$usec + (float)$sec);

}



$stop_search = getmicrotime();

$time_search = ($stop_search - $start_search);



$kword=$_GET['catalogue'];

$searchtext=$_GET['search_word'];

?>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">

<head>

<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />

<title>Zaccheus Onumba Dibiaezue Memorial Libraries|e-library in Nigeria|Library services|Catalogue</title>

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

                        <div style="font-size:14px; font-family:'Lucida Sans Unicode', 'Lucida Grande', sans-serif; line-height:25px;"><?php echo "Search Results for"." "."<font color=\"#EC9F00\">".$searchtext."</font>"; ?>&nbsp;<!--in--> <?php //echo $time_search; ?><!--&nbsp;millisecs--></div></div>

                        <!--END OF CONTENT LAYER 1-->

                        <!--CONTENT LAYER 2-->

                        <div id="find_books_hold">

                        <table>

                        <tr>

                        <td valign="top">

                        	<div id="find_books_left">

                        <table width="720px;">

                   



                            <tr> 



                              <td width="115" colspan="3" align="right" valign="top"><table id="resulttable" width="100%" border="0" cellpadding="0" cellspacing="15">



                                



                                      







										<?php



//linking the pagination script

include('ps_pagination.php');



//initializing variables from the search form



include_once("db.php");

if($kword=="Author")

$kword="FullName";

if($kword=="Title")

$kword="Title";

if($kword =="Subject")

$kword = "Subject";

if($kword == "Keyword")

$kword = "Title";

$start_search = getmicrotime();

$query="SELECT DISTINCT * from books2 where Status = 'Edited' AND ".$kword." LIKE '%$searchtext%' ORDER BY Title ASC";

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

												echo "<tr height=\"110\"><td><div class=\"resimg\" id=\"res".$i."\"><a href=\"correction/Images/".$row['coverfront']."\"  rel=\"gallery\"  class=\"pirobox_gall\" title=\"".$row['Summary']."\"><img src=\"correction/Images/".$row['coverfront']."\" alt=\"".$row['clzbookid']."\" id=\"result".$row['Id']."\" height=\"100\" width=\"120\"/></a></div><br /></td><td><input type=\"hidden\" value=\"".$row['Id']."\"/></td><td align=\"left\" valign=\"top\"><font face=\"trebuchet ms\" size=\"3\" color=\"#850000\"><strong><a href=\"eachbook.php?id=".$row['Id']."\">".$row['Title']."</a></strong></font><br /><br /><font face=\"trebuchet ms\" size=\"2\" color=\"#000000\"><strong>Author : </strong>".$row['FullName']."</font><br></br><font face=\"trebuchet ms\" size=\"1\" color=\"#000000\"><strong>Publisher : </strong>".$row['Publishers']."</font></td></tr>";

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

                        

                        </td>

                        

                        

                            <td valign="top">

                            	

                                 <!--ACCORDION-->

                               	

                               <div id="each_book_others_hold3">

                            

                               

                            			<div id="aboutus_shortlinksbow">

                                        	

                                        	<!--<div id="aboutus_shortlinks_title"><b>Book of the Week</b></div>-->

                                   		  <div id="Accordion1" class="Accordion" tabindex="0">

                                       		  <div class="AccordionPanel">

                                       		    <div class="AccordionPanelTab">BOOKS</div>

                                       		    	<div class="AccordionPanelContent">

                                                		<a href="selected.php?catalogue=Subject&search_word=nigeria&search=other">Nigerian Writing</a>  <br/> <a href="selected.php?catalogue=Subject&search_word=africa&search=other">African Writing</a>  <br/> <a href="new_title.php">New Titles</a> <br/> <a href="award_winners.php">Award Winners</a> <br/> <a href="best_seller.php">Best Sellers</a> <br/> <a href="selected.php?catalogue=Subject&search_word=classics&search=other">Classics</a> <br /> <a href="ask_a_librarian.php">Recommend a Title</a> 

                                                

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

                                   		  </div>-->

                   			  </div>	

                            

                            	</div>

                               

                               <!--END OF ACCORDION-->

                            

                            <?php include_once("attach.php"); ?>   

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
<?php include("footer.php"); ?>
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

</div> 



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

</body>

</html>