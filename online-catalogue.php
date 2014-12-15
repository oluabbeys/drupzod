<?php 



ini_set('display_errors', 'off');  



function getmicrotime()

{

    list($usec, $sec) = explode(" ", microtime());

    return ((float)$usec + (float)$sec);

}



$stop_search = getmicrotime();

$time_search = ($stop_search - $start_search);



$kword = $_GET['catalogue'];

$searchtext = htmlspecialchars(trim(addslashes($_GET['search_word'])));

?>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">

<head>

<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />

<title>ZODML | Online Catalogue</title>

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


<!--Pirobox-->

<!--<script type="text/javascript" src="../js3/jquery.min.js"></script>

<script type="text/javascript" src="../js3/jquery-ui-1.8.2.custom.min.js"></script>

<script type="text/javascript" src="../js3/pirobox_extended.js"></script>-->

<!--<script src="SpryAssets/SpryAccordion.js" type="text/javascript"></script>-->

<!--<script type="text/javascript">

$(document).ready(function() {

	$().piroBox_ext({

	piro_speed : 700,

		bg_alpha : 0.5,

		piro_scroll : true // pirobox always positioned at the center of the page

	});

});



</script>-->
<!--MODAL POPUP WINDOW FOR FIND A BOOK-->



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

<!-- AddThis Button BEGIN -->
<div class="addthis_toolbox addthis_floating_style addthis_32x32_style" style="right:25px;top:25px;">
<a class="addthis_button_twitter"></a>
<a class="addthis_button_facebook"></a>
<a class="addthis_button_pinterest_share"></a>
<a class="addthis_button_linkedin"></a>
<a class="addthis_button_email"></a>
<a class="addthis_button_tumblr"></a>
<a class="addthis_button_google_plusone_share"></a>
<a class="addthis_button_compact"></a>
</div>
<script type="text/javascript">var addthis_config = {"data_track_addressbar":true};</script>
<script type="text/javascript" src="//s7.addthis.com/js/300/addthis_widget.js#pubid=ra-

521f68de301bc049"></script>
<!-- AddThis Button END -->


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

                        <div id="aboutus_content_layer1" style="height:30px;">

                        <div style="font-size:14px; font-family:'Lucida Sans Unicode', 'Lucida Grande', sans-serif; line-height:25px; width:700px; height:30px; float:left;"><img src="images/back.png" width="9" height="11" />&nbsp;&nbsp;<span id="backtocatalogue"><a href="catalogue.php">Catalogue Home</a></span> | <?php echo "Search Results for"." "."<font color=\"#EC9F00\">".stripslashes($searchtext)."</font>"; ?>&nbsp;<!--in--> <?php //echo $time_search; ?><!--&nbsp;millisecs--></div>
                        
                        <div style="font-size:14px; font-family:Verdana; line-height:25px; width:250px; height:35px; float:right; text-align:right;"><span id="findbook" style="cursor:pointer;"><button class="findabook">Search Catalogue</button></span></div>
                        </div>

                        <!--END OF CONTENT LAYER 1-->

                        <!--CONTENT LAYER 2-->

                        <div id="find_books_hold">

                        <table>

                        <tr>

                        <td valign="top">

                        	<div id="find_books_left">

                        <table width="720px;">

                   



                            <tr> 



                              <td width="115" colspan="3" align="right" valign="top"><table id="bookt" width="100%" border="0" cellpadding="0" cellspacing="15">



                                



                                      







										<?php



//linking the pagination script

include('ps_pagination.php');



//initializing variables from the search form




include_once("db_books.php");
if($kword=="Author"){

//$kword="Names";

$query="SELECT DISTINCT * from books2 where Status = 'Edited' AND Names LIKE '%$searchtext%' OR FullName LIKE '%$searchtext%' ORDER BY Title ASC"; 
}

if($kword=="Title"){

$kword="Title";

$query="SELECT DISTINCT * from books2 where Status = 'Edited' AND ".$kword." LIKE '%$searchtext%' ORDER BY Title ASC";
}

if($kword=="Genre"){

$kword="Genre";

$query="SELECT DISTINCT * from books2 where Status = 'Edited' AND ".$kword." LIKE '%$searchtext%' ORDER BY Title ASC";
}

if($kword =="Subject"){

$kword = "Subject";

$query="SELECT DISTINCT * from books2 where Status = 'Edited' AND ".$kword." LIKE '%$searchtext%' ORDER BY Title ASC";

}

if($kword == "Keyword") {



$query="SELECT DISTINCT * from books2 where Status = 'Edited' AND Title LIKE '%$searchtext%' OR Names LIKE '%$searchtext%' OR FullName LIKE '%$searchtext%' OR Summary LIKE '%$searchtext%' OR Publishers LIKE '%$searchtext%' OR Year LIKE '%$searchtext%' OR Subject LIKE '%$searchtext%' ORDER BY Title ASC";

}

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

												echo "<tr height=\"110\"><td><div class=\"resimg\" id=\"res".$i."\"><a href=\"eachbook.php?id=".$row['Id']."\"><img src=\"correction-new/Images/".$row['coverfront']."\" alt=\"".$row['clzbookid']."\" id=\"result".$row['Id']."\" height=\"100\" width=\"120\"/></a></div><br /></td><td><input type=\"hidden\" value=\"".$row['Id']."\"/></td><td align=\"left\" valign=\"top\"><span id=\"bookt\"><a href=\"eachbook.php?id=".$row['Id']."\">".$row['Title']."</a></span><br /><br /><font face=\"verdana\" size=\"2\" color=\"#000000\"><strong>Author : </strong>".$row['FullName']."</font><br></br><font face=\"verdana\" size=\"1\" color=\"#000000\"><strong>Publisher : </strong>".$row['Publishers']."</font></td></tr>";

												$author=$row['FullName'];

												$genre=$row['Subject'];



											}		

											$i++;

											

											//echo "<p align=\"center\">".$pager->renderFullNav()."</p>";

	

	echo "<br />\n";

	

																			

										}

										else{

											echo  "<tr><td align=\"left\"><font face=\"verdana\" size=\"2\" color=\"#EC9F00\"><strong>No Result found in our database for the search word used.</strong></font></td></tr>";

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

	
// echo  "<strong>$num Book(s) Found </strong>"; 
 //echo "  <p>&nbsp;</p>";
	echo"<div><div style=\"float:left; margin-right:20px; border:solid 1px #CCC; padding:1px; letter-spacing:1px; background:url(images/search_result.png) repeat-x; -moz-border-radius:3px;\">".$pager->renderFirst()."</div><div style=\"float:left; margin-right:20px; border:solid 1px #CCC; padding:1px; letter-spacing:1px; background:url(images/search_result.png) repeat-x; -moz-border-radius:3px;\">".$pager->renderPrev()."</div><div style=\"float:left; margin-right:20px; padding:1px;  \">".$pager->renderNav('<span>', '</span>')."</div><div style=\"float:left; margin-right:20px; border:solid 1px #CCC; padding:1px; letter-spacing:1px; background:url(images/search_result.png) repeat-x; -moz-border-radius:3px;\">".$pager->renderNext()."</div><div style=\"float:left; margin-right:20px; border:solid 1px #CCC; padding:1px; letter-spacing:1px; background:url(images/search_result.png) repeat-x; -moz-border-radius:3px;\">".$pager->renderLast()."</div></div>";


echo  "<div style=\"font-family:Verdana, Geneva, sans-serif; font-size:12px; font-weight:800; color:#444; margin-top:2px;\"><strong>$num Book(s) Found </strong></div>";
						  

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

                                   		  </div>-->

                   			  </div>	

                            

                            	</div>

                               

                               <!--END OF ACCORDION-->

                            

                            <?php //include_once("attach.php"); ?>   

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
<tbody>
<tr>
<td valign="top">&nbsp;</td>
<td valign="middle">
<p><a href="../../privacy-policy.php">Privacy Policy</a> | <a href="../../disclaimer.php">Disclaimer</a> | <a href="../../site_map.php">ZODML Sitemap</a> | <a href="#contactForm">Contact Us</a><br /><br />196 Awolowo Road, Ikoyi, Lagos, Nigeria.</p>
<p>Community Library: (234)-1-4631787</p>
<p>Corporate Office: (234)-1-4605700</p>
<p>Copyright &copy; ZODML 2013 All Rights Reserved</p>
</td>
</tr>
<tr>
<td>&nbsp;</td>
<td style="text-align: center;"><font size="-1" color="#EC9F00"><strong>Connect with us:</strong></font>
<div id="iconsfooter" align="center"><a href="http://www.facebook.com/ZODML" target="_blank"><img title="ZODML on Facebook" src="../../images/facebook-icon.png" alt="ZODML on Facebook" width="20" height="18" /></a> &nbsp;<a href="http://www.twitter.com/ZODML" target="_blank"><img title="ZODML on Twitter" src="../../images/twitter-bird.png" alt="ZODML on Twitter" width="20" height="18" /></a> &nbsp;<a href="http://www.youtube.com/ZODML" target="_blank"><img title="ZODML on YouTube" src="../../images/youtube_homepage.png" alt="ZODML on YouTube" width="20" height="18" /></a> &nbsp;<a href="http://zodml.tumblr.com" target="_blank"><img title="ZODML on Tumblr" src="../../images/tumblrzodml.png" alt="ZODML on Tumblr" width="20" height="18" /></a> &nbsp;<a href="http://www.linkedin.com/company/3189484" target="_blank"><img title="ZODML on LinkedIn" src="../../images/linkedin.png" alt="ZODML on LinkedIn" width="20" height="18" /> &nbsp;</a><a href="http://instagram.com/zodml" target="_blank"><img title="ZODML on Instagram" src="../../images/instagramzodml.png" alt="ZODML on Instagram" width="20" height="18" /></a> &nbsp;<a href="http://pinterest.com/zodml/" target="_blank"><img title="ZODML on Pinterest" src="../../images/pinterestzodml.png" alt="ZODML on Pinterest" width="20" height="18" /></a></div>
</td>
</tr>
</tbody>
</table>
</div>
<div id="footer_new3">
<table width="781" cellspacing="5">
<tbody>
<tr>
<td width="156"><font size="-2" color="#EC9F00"><strong>About Us</strong></font></td>
<td width="156"><font size="-2" color="#EC9F00"><strong>Discover Nigeria</strong></font></td>
<td width="156"><font size="-2" color="#EC9F00"><strong>Learning</strong></font></td>
<td width="156"><font size="-2" color="#EC9F00"><strong>Library</strong></font></td>
<td width="156"><font size="-2" color="#EC9F00"><strong>Support ZODML</strong></font></td>
<td width="156"><font size="-2" color="#EC9F00"><strong>Communities</strong></font></td>
</tr>
<tr>
<td><img src="../../images/icon.png" alt="" width="4" height="7" /> <a href="../../who-we-are.php">Who We Are</a></td>
<td><img src="../../images/icon.png" alt="" width="4" height="7" /> <a href="../../Nigeria/nigeria_geography_category_articles.php">Geography</a></td>
<td><img src="../../images/icon.png" alt="" width="4" height="7" /> <a href="../../past_questions.php">Past Questions</a></td>
<td><img src="../../images/icon.png" alt="" width="4" height="7" /> <a href="../../joining_the_library.php">Join the Library</a></td>
<td><img src="../../images/icon.png" alt="" width="4" height="7" /> <a href="../../Friends_of_the_library.php">Become a Friend of the Library</a></td>
<td><a href="../../blog/index.php"><img style="color: #000000;" src="../../images/icon.png" alt="" width="4" height="7" /><span style="color: #000000;">&nbsp;</span></a><a href="../../dlc/index.php" target="_blank">Digital Learning Community</a></td>
</tr>
<tr>
<td><img src="../../images/icon.png" alt="" width="4" height="7" /> <a href="../../what-we-do.php">What We Do</a></td>
<td><img src="../../images/icon.png" alt="" width="4" height="7" /> <a href="../../Nigeria/nigeria_people_category_articles.php">People</a></td>
<td><img src="../../images/icon.png" alt="" width="4" height="7" /> <a href="../../research_guide.php">Research Guide</a></td>
<td><img src="../../images/icon.png" alt="" width="4" height="7" /> <a href="../../get-help.php">Get Help</a></td>
<td><img src="../../images/icon.png" alt="" width="4" height="7" /> <a href="../../volunteer.php">Volunteer at ZODML</a></td>
<td>&nbsp;</td>
</tr>
<tr>
<td><img src="../../images/icon.png" alt="" width="4" height="7" /> <a href="../../newsletter-archives.php">ZODML Newsletter</a></td>
<td><img src="../../images/icon.png" alt="" width="4" height="7" /> <a href="../../Nigeria/nigeria_the_diaspora_articles.php">The Diaspora</a></td>
<td><img src="../../images/icon.png" alt="" width="4" height="7" /> <a href="../../career_guide.php">Career Guide</a></td>
<td><img src="../../images/icon.png" alt="" width="4" height="7" /> <a href="../../selected.php?catalogue=Subject&amp;search_word=nigeria&amp;search=other">Nigerian Writing</a></td>
<td>&nbsp;</td>
<td>&nbsp;</td>
</tr>
<tr>
<td><img src="../../images/icon.png" alt="" width="4" height="7" /> <a href="../../press.php">ZODML in the Press</a></td>
<td><img src="../../images/icon.png" alt="" width="4" height="7" /> <a href="../../Nigeria/nigeria_photos.php">Photography</a></td>
<td>&nbsp;</td>
<td><img src="../../images/icon.png" alt="" width="4" height="7" /> <a href="../../e-library/">e-Library</a></td>
<td>&nbsp;</td>
<td>&nbsp;</td>
</tr>
<tr>
<td><img src="../../images/icon.png" alt="" width="4" height="7" /> <a href="../../board_of_trustees.php">Board of Trustees</a></td>
<td>&nbsp;</td>
<td>&nbsp;</td>
<td><img src="../../images/icon.png" alt="" width="4" height="7" /> <a href="../../catalogue.php">Catalogue</a></td>
<td>&nbsp;</td>
<td>&nbsp;</td>
</tr>
</tbody>
</table>
</div>
</div>


</div>
<!--END OF FOOTER-->
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