<?php 
ini_set('display_errors','off');
include("scripts/config.php");

function myTruncate($string, $limit, $break=".", $pad=".....") { 
// return with no change if string is shorter than $limit 
if(strlen($string) <= $limit) return $string; 
// is $break present between $limit and the end of the string? 
if(false !== ($breakpoint = strpos($string, $break, $limit))) { if($breakpoint < strlen($string) - 1) { $string = substr($string, 0, $breakpoint) . $pad; } } return $string; }
 

$do = mysql_query("SELECT * FROM articles where category ='Literature' ORDER BY id ASC");
while($row = mysql_fetch_array($do)){ 

	//$title = $row["title"];
//	$id = $row["id"];
//	$author = $row["author"];
//	$contents = $row["contents"];
//	$date = $row["date"];
	$category = $row["category"];

//$result .= '<div id="discover_nigeria_category_people_article_hold"><div id="discover_nigeria_category_people_article_topic">' . $title . '</div>
//			<div id="discover_nigeria_category_people_article_dateposted_author_hold"><div id="discover_nigeria_category_people_article_author">'.'Dated Posted:'.' '. $date.'</div>
//			<div id="discover_nigeria_category_people_article_date_posted"></div></div>
//			</div>';

}


?>
<?php
include("scripts/config.php");
$per_page = 6; 

//getting number of rows and calculating no of pages
$sql = "SELECT * FROM articles where category ='Literature' ORDER BY id ASC";
$rsd = mysql_query($sql);
$count = mysql_num_rows($rsd);
$pages = ceil($count/$per_page)

?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Zaccheus Onumba Dibiaezue Memorial Libraries|e-library in Nigeria|Library services|Discover Nigeria|Literature</title>
<link href="../css/styles.css" type="text/css" rel="stylesheet" media="screen" />
<link href="../css/menu.css" type="text/css" rel="stylesheet" media="screen" />
<link href="../css/bottom.css" type="text/css" rel="stylesheet" media="screen"/>
<link href="../css/pagination.css" type="text/css" rel="stylesheet" media="screen"/>
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

<!--<script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jquery/1.3.0/jquery.min.js"></script>-->
<script type="text/javascript" src="../js/loading.js"></script>
<script type="text/javascript">
	
	$(document).ready(function(){
		
	//Display Loading Image
	function Display_Load()
	{
	    $("#loading").fadeIn(900,0);
		$("#loading").html("<img src='../images/loader.gif' />");
	}
	//Hide Loading Image
	function Hide_Load()
	{
		$("#loading").fadeOut('slow');
	};
	

   //Default Starting Page Results
   
	$("#pagination dt:first").css({'color' : '#EC9F00'});//.css({'border' : 'none'});
	
	Display_Load();
	
	$("#discover_nig_content_category_article").load("literature_data.php?page=1", Hide_Load());



	//Pagination Click
	$("#pagination dt").click(function(){
			
		Display_Load();
		
		//CSS Styles
		$("#pagination dt")
		.css({'border' : 'solid #CCC 1px'})
		.css({'color' : '#EC9F00'});
		
		$(this)
		.css({'color' : '#EC9F00'})
		.css({'border' : 'none'});

		//Loading Data
		var pageNum = this.id;
		
		$("#discover_nig_content_category_article").load("literature_data.php?page=" + pageNum, Hide_Load());
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
</head>

<body>
<!--BODY HOLDER-->
<div id="body_hold">
<!--HEADER-->
                <div id="header">
                <div id="subheader">
                <p>&nbsp;</p>
                <p>&nbsp;</p>
                	<div id="searchhold">
                <form name="form1" action="../findbook2.php">
                <table>
               <tr>
               <td>
                <select name="catalogue" id="select_box"><option selected="selected">Keyword</option><option>Title</option><option>Author</option><option>Subject</option></select>
               <!-- <input type="text" name="catalogue" />-->
               </td>
               <td>
                <div id="searchwrapper">
            <input type="text" id="searchbox" name="search_word" placeholder="Search" />
          		</div>
                </td>
                <td>
                <div id="submit_button"><button id="search_button">Search</button></div>
                </td>
                </tr>
                </table>
                 <label>zodml.org</label><input name="search" type="radio" value="1" onclick="chooseOne();" />&nbsp;&nbsp;<label>Catalogue</label><input name="search" type="radio" value="other" onclick="chooseOne();"/>
                
                 </form>
                	</div>
                </div>	
                </div>
<!--END OF HEADER-->

<!--MENU-->
			<div id="menu_ba">
            	<?php include("menu.php");?>
            </div>
<!--END OF MENU-->

<!--CONTENT-->
<div id="content_holder">

                
                
                <!--CONTENT LAYER 2-->
                <div id="discover_nig_content_layer2">
                <div id="browse_by">
                <?php include("browse.php"); ?>
                </div>
                </div>
                <!--END OF CONTENT LAYER 2-->
          			<div id="discover_nig_content_category_article_topic"><?php echo 'Category:'.' '.$category; ?></div>
                <!--CONTENT LAYER 3-->
                	<div id="loading" ></div>
                	<div id="discover_nig_content_category_article">
                    	<!--<div id="discover_nig_content_category_article_display"></div>
                        <div id="discover_nig_content_category_article_display"></div>
                        <div id="discover_nig_content_category_article_display"></div>
                        <div id="discover_nig_content_category_article_display"></div>-->
                    	
                    
                    </div>
                    <div style="width:1015px; margin:0px auto; padding:3px;">
                    	
							<dl id="pagination">
								<?php
									//Show page links
									for($i=1; $i<=$pages; $i++)
									{
										echo '<dt id="'.$i.'">'.$i.'</dt>';
									}
								?>
							</dl>	
					</div>
                <!--END OF CONTENT LAYER 3-->
                
                <!--CONTENT LAYER 4-->
                
                <!--END OF CONTENT LAYER 4-->
                
                <!--CONTENT LAYER 5-->
                
                <!--END OF CONTENT LAYER 5-->

</div>
<!--END OF CONTENT-->

<!--FOOTER-->
<?php include("footer.php"); ?>
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