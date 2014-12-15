
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
<!-- Piwik -->
<script type="text/javascript">
var pkBaseURL = (("https:" == document.location.protocol) ? "https://zodml.org/piwik/" : "http://zodml.org/piwik/");
document.write(unescape("%3Cscript src='" + pkBaseURL + "piwik.js' type='text/javascript'%3E%3C/script%3E"));
</script><script type="text/javascript">
try {
var piwikTracker = Piwik.getTracker(pkBaseURL + "piwik.php", 1);
piwikTracker.trackPageView();
piwikTracker.enableLinkTracking();
} catch( err ) {}
</script><noscript><p><img src="http://zodml.org/piwik/piwik.php?idsite=1" style="border:0" alt="" /></p></noscript>
<!-- End Piwik Tracking Code -->
<script type="text/javascript">
$(function(){
	$("input:radio[name='search']").click(function(){	
		var criteria=$("input:radio[name='search']:checked").val();
		if(criteria=="Other")
		$("#select_box").enable();
	});
});

</script>

<style>
pic_stand{
	width:auto;
	height:auto;
}
</style>
</head>

<body>

<!-- Start of StatCounter Code for Dreamweaver -->
<script type="text/javascript">
var sc_project=9025802; 
var sc_invisible=0; 
var sc_security="701b465a"; 
var sc_text=2; 
var scJsHost = (("https:" == document.location.protocol) ?
"https://secure." : "http://www.");
document.write("<sc"+"ript type='text/javascript' src='" +
scJsHost+
"statcounter.com/counter/counter.js'></"+"script>");
</script>
<noscript><div class="statcounter"><a title="hits counter"
href="http://statcounter.com/" target="_blank"><img
class="statcounter"
src="http://c.statcounter.com/9025802/0/701b465a/0/"
alt="hits counter"></a></div></noscript>
<!-- End of StatCounter Code for Dreamweaver -->

<!--BODY HOLDER-->
<div id="body_hold">
<!--HEADER-->
                <div id="header">
                <div id="subheader">
                <p>&nbsp;</p>
                <p>&nbsp;</p>
                	<div id="searchhold">
                <form name="form1" action="findbook2.php">
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
                    <li><a href="../press.php">ZODML in the Press</a></li>
				</ul>
			</li>
			<li id="menu-item-2"><a href="#">Our Team</a>
			    <ul>
					
					<li><a href="../board_of_trustees.php">Board of Trustees</a></li>
					<li><a href="../management_team.php">Management Team</a></li>
                    
									
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
					
					<li><a href="../learning_jss_student.php">Junior Secondary</a></li>
					<li><a href="../learning_sss_student.php">Senior Secondary</a></li>
                    <li><a href="#">Tertiary</a></li>
									
				</ul>
			</li>
			<li id="menu-item-3"><a href="#">Research</a>
			    <ul>
					
					<li><a href="#">Research Guides</a></li>
                    <li><a href="../career_guide.php">Career Guide</a></li>
				</ul>
			</li>
		</ul>
	</li>
    
    <li><a href="#">The Library</a>
		<ul>
			<li id="menu-item-1"><a href="#">Services</a>
				<ul>
                	<li><a href="../main_library.php">Main Library</a></li>
					<li><a href="../joining_the_library.php">Joining the Library</a></li>
                    <li><a href="../borrowing.php">Borrowing</a></li>
                    
                    <li><a href="../finding_things.php">Finding things</a></li>
                    <li><a href="../computer.php">Computers and Internet</a></li>
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
                    <li><a href="">All Time Greats</a></li>
                    <li><a href="">Nigerian Writers</a></li>
									
				</ul>
			</li>
			<li id="menu-item-3"><a href="#">Collections</a>
            		<ul>
					<li><a href="../e-library.php">E-library</a></li>
					<li><a href="">Catalogue</a></li>
                    </ul>
            </li>
			
		</ul>
	</li>
    
    <li><a href="#">Support ZODML</a>
		<ul>
			<li id="menu-item-1"><a href="#">Members</a>
				<ul>
					<li><a href="#">Friends of the Library</a></li>
				</ul>
			</li>
			<li id="menu-item-2"><a href="#">Others</a>
			    <ul>
					
					<li><a href="#">Donations</a></li>
					<li><a href="#">Volunteering</a></li>						
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
          			<div id="discover_nig_content_full_story_topic">Zamfara State (Farming Is Our Pride)</div>
                <!--CONTENT LAYER 3-->
                <div id="discover_nigeria_full_story_hold">
               	  <div id="discover_nigeria_full_story">
                    <div style="width:auto; float:right; margin :5px 0px 0px 5px;">
                    <img src="../images/zamfara.png" width="241" height="181" /></div>

<p>Zamfara State is in the northwestern part of Nigeria. It shares an international border with Niger Republic to the North, and interstate boundaries with Katsina to the East, Sokoto to the West while Kebbi and Niger State are to its South. Gusau is the state capital. It is one of the six states that form the North West Geo-political zone.</p>

<p><strong>History</strong><br />
The area today called Zamfara state was one of the old Hausa city-states like Kano, Katsina, Gobir, Kabi and Zazzau. The Zamfara kingdom came into being in the 11th century and flourished up to the 16th century as a city state. The kingdom became part of the Sokoto Caliphate after the 1804 jihad by Usman dan Fodio before the British arrived and the town of Gusau became an important commercial and administrative center with road and rail networks passing through it  With the creation of States during the Gowon Administration, Zamfara Kingdom became part of the then North West Region and later Sokoto State before the new state of Zamfara was created in 1996 by the military regime of Late Sani Abacha. </p>
<p><strong>Main Cities and Towns</strong><br />
  Gusau (capital city) Kaura Namoda, Anka </p>
<p><strong>Land Mass, Location and Population</strong><br />
Zamfara covers an area of 37, 931 sq kilometers. Its population is approximately 3,259,846 (2006 Census).</p>


<p><strong>Ethnic Groups</strong><br />
Zamfara State is mainly populated by Hausa and Fulani people, with some members of Gwari, Kamuku, Kambari, Dukawa, Bussawa and Zabarma ethnic communities. <br />
</p>

<div style="width:200; float:right; margin:50px 100px 0px 50px; font-size:10px; text-align:center;"><img src="../images/zm_map.png" width="461" height="525" /><br />
<strong>Map of Zamfara State</strong></div>
<p><strong>Religion</strong><br />
Islam is the principal and major religion of the state. Zamfara was the first state in Nigeria to introduce sharia law.</p>

<p><strong>Administrative Structure</strong><br />
There are 14 Local Government Areas and 17 Emirates in the State. The Emirates are split into First and Second Class.


 
</p>


<strong>Local Government Areas</strong><br />
 


<table border="1" width="300">
<tr>
<td width="131">
<ul>

	<li>Anka</li>
    <li>Bakura</li>
    <li>Birnin Magaji/Kiyaw</li>
	<li>Bukkuyum</li>
	<li>Bungudu</li>
	<li>Chafe</li>
    <li>Gummi</li>
</ul>
</td>
<td width="149" valign="top">
<ul>
	
	<li>Gusau</li>
	<li>Kaura Namoda</li>
	<li>Maradun</li>
	<li>Maru</li>
	<li>Shinkafi</li>
	<li>Talata Mafara</li>
    <li>Zurmi</li>	
 </ul>
</td></tr>
</table>

<span style="width:200; float:right; margin:50px 180px 0px 50px; font-size:10px; text-align:center;"><img src="../images/zm_emir.png" width="287" height="249" /><br />
<strong>HRH Alh. Attahiru Muh’d Ahmad (CON) The Emir of Anka and Zamfara</strong></span>

<table border="1" width="300">
<tr bgcolor="#666666" style="color:#000000; font-weight:bold; border:solid 2px #000000;">
  <td align="center" >
Emirates</td></tr>
</table>

<table border="1" width="300">
<tr><td width="126">
First Class Emirates
<ul>
	 <li>Anka</li> 
	 <li>Bakura</li> 
 	 <li>Bukuyum</li>
 	 <li>Bungudu</li> 
 	 <li>Gummi</li> 
 	<li>Gusau </li>
 	<li>Kaura Namoda</li>
 	<li>Maradun</li>
 	<li>Talata Mafara</li>
 	<li>Tsafe</li> 
 	<li>Zurmi</li>
</ul>
</td>
<td width="158" valign="top">
Second Class Emirates
<ul>
	 <li>Birnin Magaji</li> 
 	<li>Dansadau</li> 
 	<li>Kotorkoshi</li>
	<li>Maru </li>
 	<li>Moriki</li>
 	<li>Shinkafi</li>
</ul>
</td></tr>
</table>



<div style="width:200; float:right; margin:50px 180px 0px 50px; font-size:10px; text-align:center;"><img src="../images/zm_gov.png" width="350" height="302" /><br />
<strong>Abdul'aziz Abubakar Yari (Current Governor)</strong></div>

<p><strong>Governors and Administrators</strong></p>
<ul>
  <li>Jibril Yakubu	(Administrator - Military) 7 October 1996 - May 1999</li>
  <li>Ahmad Sani Yerima	(Governor-Civilian ANPP) 29 May 1999	- 29 May 2007</li>
  <li>Mahmud Shinkafi	(Governor- Civilian ANPP) 29 May 2007 - May 2011</li>		
  <li>Abdul'aziz Abubakar Yari (Governor- Civilian ANPP) May 2011 - Present </li>
</ul>
 
  
<p>

<strong>Agriculture and Economy</strong><br />
Agriculture is the major economic activity in the state. Produce includes maize, millet, beans, cotton, sheanuts, guinea corn, cowpeas, gum Arabic, sheep, goats, sugarcane, cattle, sweet potatoes, onions, pepper and ginger. Tobacco too is exported from the state.
A number of minerals may be found in the state. These include: alluvial gold, chromate, chamovite, clay, mica, granite, silica, feldspar, gold, gypsum, limestone, phosphate, quartz, kaolin and sand. 

<span style="width:200; float:right; font-size:10px; margin-left:10px; text-align:center;"><img src="../images/zm_wall.png" width="300" height="225" /><br />
<strong>Kiyawa City Walls</strong></span>


<p><strong>Tourism and Recreation</strong><br />            
  <em>Kiyawa City Walls</em><br />
Kiyawa is situated in the eastern plains of Zamfara State. Once a mighty 
city, the walls which still stand today are more than 250 years old.</p>
<p><strong>Sources</strong></p>
<ol>
	<li>http://www.cometonigeria.com/search-by-region/north-west/zamfara-state</li>
	<li>http://en.wikipedia.org/wiki/Zamfara</li>
	<li>http://hospitalitynigeria.com/zamfara.php</li>
	<li>http://www.britannica.com/EBchecked/topic/249748/Gusau</li>
	<li>http://www.nacd.gov.ng/Zamfara%20tourist%20sites.htm</li>
	<li>http://www.northernnigeriatourism.com/states/zamfara.html</li>
	<li>http://zamfaraonline.net/go/go/zamfara/emirate-councils/83-zamfara-emirs</li>
	<li>http://zamfaraonline.net/go/zamfara/emirate-councils/83-zamfara-emirs?showall=&start=1 </li>
    <li>http://nnn.com.ng/?page_id=4369</li>
	<li>http://insidezamfara.blogspot.com/2010/03/emirates-in-zamfara-state-and-their.html</li>
	<li>http://www.britannica.com/EBchecked/topic/313467/Kaura-Namoda</li>
</ol>
</div>
</div>
                   
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
</body>
</html>