<?php include("scripts/config.php");

function myTruncate($string, $limit, $break=".", $pad=".....") { 
// return with no change if string is shorter than $limit 
if(strlen($string) <= $limit) return $string; 
// is $break present between $limit and the end of the string? 
if(false !== ($breakpoint = strpos($string, $break, $limit))) { if($breakpoint < strlen($string) - 1) { $string = substr($string, 0, $breakpoint) . $pad; } } return $string; }
 

$do = mysql_query("SELECT * FROM articles where category ='Agriculture' ORDER BY id ASC");
while($row = mysql_fetch_array($do)){ 

	$title = $row["title"];
	$id = $row["id"];
	$author = $row["author"];
	$contents = $row["contents"];
	$date = $row["date"];
	$category = $row["category"];

$result .= '<div id="discover_nigeria_category_people_article_hold"><div id="discover_nigeria_category_people_article_topic">' . $title . '</div>
			<div id="discover_nigeria_category_people_article_dateposted_author_hold"><div id="discover_nigeria_category_people_article_author"> '.'Dated Posted:'.' '. $date.'</div>
			<div id="discover_nigeria_category_people_article_date_posted"></div></div>
			</div>';

}


?>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>zodml.org .::: Discover Nigeria</title>
<link href="../css/styles.css" type="text/css" rel="stylesheet" media="screen" />
<link href="../css/menu.css" type="text/css" rel="stylesheet" media="screen" />
<link href="../css/bottom.css" type="text/css" rel="stylesheet" media="screen"/>
<script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jquery/1.4.2/jquery.min.js"></script>
<script type="text/javascript" src=" https://ajax.googleapis.com/ajax/libs/jquery/1.6/jquery.js"></script>
<script type='text/javascript' src='../js/jquery.hoverIntent.minified.js'></script>
<script type='text/javascript' src='../js/jquery.dcmegamenu.1.2.js'></script>
<script type="text/javascript" src="../js/jquery.pikachoose.js"></script>
<script type="text/javascript" src="../js/search.js"></script>
<script type="text/javascript">
$(document).ready(function($){
	$('#mega-menu-tut').dcMegaMenu({
		rowItems: '3',
		speed: 'fast'
	});
});
</script>

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
                <form name="form1" action="#">
                <select name="catalogue" id="select_box"><option selected="selected">Keyword</option><option>Title</option><option>Author</option><option>Subject</option></select>
               <!-- <input type="text" name="catalogue" />-->
                <div id="searchwrapper">
            <input type="text" id="searchbox" name="search_word" placeholder="Search"/>
          
          <label>zodml.org</label><input name="search" type="radio" value="1" onclick="chooseOne();" />&nbsp;&nbsp;<label>Catalogue</label><input name="search" type="radio" value="other" onclick="chooseOne();"/> 
                </div>
                 </form>
                	</div>
                </div>	
                </div>
<!--END OF HEADER-->

<!--MENU-->
			<div id="menu_ba">
            	<div class="dcjq-mega-menu">
<ul id="mega-menu-tut" class="menu">
	<li><a href="../index.php">Home</a></li>
	<li><a href="#">About Us</a>
		<ul>
        	<li id="menu-item-3"><a href="#">Projects</a>
			    <ul>
					
					<li><a href="../cathy.php">CATHY</a></li>
					<li><a href="../oasis.php">OASIS</a></li>
					<li><a href="../mobile_library.php">Mobile Library</a></li>
					<li><a href="../symp.php">SYMP</a></li>
                    <li><a href="../dlc.php">DLC</a></li>
                    <li><a href="../book_fair.php">Book Fair Excursion</a></li>
					
				</ul>
			</li>
			<li id="menu-item-1"><a href="#">Our Story</a>
				<ul>
					<li><a href="../zodml_story.php">ZODML Story</a></li>
                    <li><a href="../picture_gallery.php">Picture Gallery</a></li>
				</ul>
			</li>
			<li id="menu-item-2"><a href="#">Our Team</a>
			    <ul>
					
					<li><a href="../board_of_trustees.php">Board of Trustees</a></li>
					<li><a href="../management_team.php">Management Team</a></li>
                    <li><a href="../contacts.php">Contacts</a></li>
									
				</ul>
			</li>
		</ul>
	</li>
	
	<li><a href="index.php">Discover Nigeria</a></li>
    
    <li><a href="#">Learning</a>
		<ul>
			<li id="menu-item-1"><a href="#">Children</a>
				<ul>
					<li><a href="#">0-5 Years</a></li>
                    <li><a href="#">6-8 Years</a></li>
                    <li><a href="#">9-11 Years</a></li>
				</ul>
			</li>
			<li id="menu-item-2"><a href="#">Students</a>
			    <ul>
					
					<li><a href="#">Junior Secondary</a></li>
					<li><a href="#">Senior Secondary</a></li>
                    <li><a href="#">University</a></li>
									
				</ul>
			</li>
			<li id="menu-item-3"><a href="#">Research</a>
			    <ul>
					
					<li><a href="#">Research Guide</a></li>
				</ul>
			</li>
		</ul>
	</li>
    
    <li><a href="#">The Library</a>
		<ul>
			<li id="menu-item-1"><a href="#">Services</a>
				<ul>
					<li><a href="../joining_the_library.php">Joining the Library</a></li>
                    <li><a href="../borrowing.php">Borrowing</a></li>
                    <li><a href="../e-library.php">E-library</a></li>
                    <li><a href="../finding_things.php">Finding things</a></li>
                    <li><a href="../computer.php">Computer</a></li>
                    <li><a href="../jobs.php">Jobs</a></li>
                    <li><a href="../ask_a_librarian.php">Ask a Librarian</a></li>
				</ul>
			</li>
			<li id="menu-item-2"><a href="#">New and Noteworthy</a>
			    <ul>
					
					<li><a href="../recent_events.php">Recent Events</a></li>
					<li><a href="../new_title.php">New Titles</a></li>
                    <li><a href="../award_winners.php">Award Winners</a></li>
                    <li><a href="../best_seller.php">Bestsellers</a></li>
                    
									
				</ul>
			</li>
			<li id="menu-item-3"><a href="#">About the Library</a>
            		<ul>
					
					<li><a href="../main_library.php">Main Library</a></li>
					<li><a href="../location_hours.php">Location Hours</a></li>
                    </ul>
            </li>
			
		</ul>
	</li>
    
    <li><a href="#">Support ZODML</a>
		<ul>
			<li id="menu-item-1"><a href="#">Members</a>
				<ul>
					<li><a href="#">Basic Membership</a></li>
				</ul>
			</li>
			<li id="menu-item-2"><a href="#">Donations</a>
			    <ul>
					
					<li><a href="#">Books</a></li>
					<li><a href="#">Cash</a></li>
                    <li><a href="#">Gifts in Kind</a></li>						
				</ul>
			</li>
			<li id="menu-item-3"><a href="#">Others</a>
            		<ul>
					
					<li><a href="#">Volunteering</a></li>
					<li><a href="#">ZODML Shop</a></li>
                    <li><a href="#">Fundraising Events</a></li>
                    </ul>
            </li>
			
		</ul>
	</li>
	<li><a href="../blog/index.php">Blog</a></li>
	<li><a href="#">Communities</a>
    	<ul>
        <li><a href="#">Book Club</a></li>
        <li><a href="#">DLC</a></li>
        </ul>
    </li>
	</ul>
</div>
            </div>
<!--END OF MENU-->

<!--CONTENT-->
<div id="content_holder">

                
                <!--CONTENT LAYER 2-->
                <div id="discover_nig_content_layer2">
                <div id="browse_by">
                <div id="s"><table><tr><td>Search:&nbsp;&nbsp;</td><td valign="middle"><form><input type="text" name="search_articles" id="search_article_input" value="Search for articles" onfocus="if(this.value=='Search for articles'){this.value=''};" onblur="if(this.value==''){this.value=='Search for articles'};" /></form></td></tr></table></div>
                <table>
                <tr>
                <td>
                	<div id="browse_by_select_category">
                		<div style="padding:8px; font-size:12px;">Browse by category</div>
                        	<div style="padding:15px; margin:0px 0px 5px 50px;">
                            	<div id="cat_list"><a href="nigeria_business_category_articles.php">Business</a></div>
                            	<div id="cat_list"><a href="nigeria_culture_category_articles.php">Culture and Arts</a></div>
                            	<div id="cat_list"><a href="nigeria_education_category_articles.php">Education</a></div>
                            	<div id="cat_list"><a href="nigeria_entertainment_category_articles.php">Entertainment</a></div>
                            	<div id="cat_list"><a href="nigeria_geography_category_articles.php">Geography</a></div><!--<div id="cat_list">Technology</div>-->
                   			</div>
                            <div style="padding:15px; margin:0px 0px 5px 50px;">
                            	<div id="cat_list"><a href="nigeria_history_category_articles.php">History</a></div>
                            	<div id="cat_list"><a href="nigeria_literature_category_articles.php">Literature</a></div>
                            	<div id="cat_list"><a href="nigeria_nigeria_the_basics_category_articles.php">Nigeria: The Basics</a></div><div id="cat_list"><a href="nigeria_people_category_articles.php">People</a></div>
                            	<div id="cat_list"><a href="nigeria_photos.php">Images</a></div>
                   			</div>
                            <div style="padding:15px; margin:0px 0px 5px 50px;">
                            	<div id="cat_list"><a href="nigeria_religion_category_articles.php">Religion</a></div>
                            	<div id="cat_list"><a href="nigeria_sports_category_articles.php">Sports</a></div>
                            	<div id="cat_list"><a href="nigeria_technology_category_articles.php">Technology</a></div>
                   			</div>
                            
                            
                
                		</div>
                </td>
                <!--<td><div id="browse_by_flash"></div></td>-->
                </tr>
                </table>
                </div>
                </div>
                <!--END OF CONTENT LAYER 2-->
          			<div id="discover_nig_content_category_article_topic"><?php echo 'Category:'.' '.$category; ?></div>
                <!--CONTENT LAYER 3-->
                	<div id="discover_nig_content_category_article">
                    	<!--<div id="discover_nig_content_category_article_display"></div>
                        <div id="discover_nig_content_category_article_display"></div>
                        <div id="discover_nig_content_category_article_display"></div>
                        <div id="discover_nig_content_category_article_display"></div>-->
                    <?php print "$result"; ?>
                    
                    </div>
                <!--END OF CONTENT LAYER 3-->
                
                <!--CONTENT LAYER 4-->
                
                <!--END OF CONTENT LAYER 4-->
                
                <!--CONTENT LAYER 5-->
                
                <!--END OF CONTENT LAYER 5-->

</div>
<!--END OF CONTENT-->

<!--FOOTER-->
<div id="footer">

<table align="center">
<tr>
<td align="center">Privacy Policy | Disclaimer | Careers | Contact Us</td>
</tr>
<tr>
<td align="center">Copyright© ZODML 2012 All Rights Reserved</td>
</tr>
</table>
</div>
<!--END OF FOOTER-->

</div>
<!--END OF THE BODY HOLDER-->
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