<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>zodml.org .::: Blog</title>
<link href="css/styles.css" type="text/css" rel="stylesheet" media="screen" />
<link href="css/menu.css" type="text/css" rel="stylesheet" media="screen" />
<link href="css/bottom.css" type="text/css" rel="stylesheet" media="screen"/>
<script type="text/javascript" src=" https://ajax.googleapis.com/ajax/libs/jquery/1.6/jquery.js"></script>
<script type='text/javascript' src='js/jquery.hoverIntent.minified.js'></script>
<script type='text/javascript' src='js/jquery.dcmegamenu.1.2.js'></script>
<!--<script type="text/javascript" src="js/pack.js"></script>-->
<script type="text/javascript" src="js/search.js"></script>
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
			<div id="menu_ba2">
            	<div class="dcjq-mega-menu">
<ul id="mega-menu-tut" class="menu">
	<li><a href="index.php">Home</a></li>
	<li><a href="#">About Us</a>
		<ul>
        	<li id="menu-item-3"><a href="#">Projects</a>
			    <ul>
					
					<li><a href="cathy.php">CATHY</a></li>
					<li><a href="oasis.php">OASIS</a></li>
					<li><a href="mobile_library.php">Mobile Library</a></li>
					<li><a href="symp.php">SYMP</a></li>
                    <li><a href="dlc.php">DLC</a></li>
                    <li><a href="book_fair.php">Book Fair Excursion</a></li>
					
				</ul>
			</li>
			<li id="menu-item-1"><a href="#">Our Story</a>
				<ul>
					<li><a href="zodml_story.php">ZODML Story</a></li>
                    <li><a href="picture_gallery.php">Picture Gallery</a></li>
                    <li><a href="press.php">ZODML in the Press</a></li>
				</ul>
			</li>
			<li id="menu-item-2"><a href="#">Our Team</a>
			    <ul>
					
					<li><a href="board_of_trustees.php">Board of Trustees</a></li>
					<li><a href="management_team.php">Management Team</a></li>
                   
									
				</ul>
			</li>
		</ul>
	</li>
	
	<li><a href="Nigeria/index.php">Discover Nigeria</a></li>
    
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
					
					<li><a href="learning_jss_student.php">Junior Secondary</a></li>
					<li><a href="learning_sss_student.php">Senior Secondary</a></li>
                    <li><a href="#">Tertiary</a></li>
									
				</ul>
			</li>
			<li id="menu-item-3"><a href="#">Research</a>
			    <ul>
					
					<li><a href="#">Research Guides</a></li>
                    <li><a href="career_guide.php">Career Guide</a></li>
				</ul>
			</li>
		</ul>
	</li>
    
    <li><a href="#">The Library</a>
		<ul>
			<li id="menu-item-1"><a href="#">Services</a>
				<ul>
                	<li><a href="main_library.php">Main Library</a></li>
					<li><a href="joining_the_library.php">Joining the Library</a></li>
                    <li><a href="borrowing.php">Borrowing</a></li>
                    
                    <!--<li><a href="finding_things.php">Finding Things</a></li>-->
                    <li><a href="computer.php">Computers and Internet</a></li>
                    <li><a href="jobs.php">Jobs</a></li>
                    <li><a href="ask_a_librarian.php">Ask a Librarian</a></li>
                    
				</ul>
			</li>
			<li id="menu-item-2"><a href="#">New and Noteworthy</a>
			    <ul>
					
					<li><a href="recent_events.php">Recent Events</a></li>
					<li><a href="new_title.php">New Titles</a></li>
                    <li><a href="award_winners.php">Award Winners</a></li>
                    <li><a href="best_seller.php">Bestsellers</a></li>
                    <li><a href="#">All Time Greats</a></li>
                    <li><a href="#">Nigerian Writers</a></li>
                  
									
				</ul>
			</li>
			<li id="menu-item-3"><a href="#">Collections</a>
            		<ul>
					<li><a href="e-library.php">E-library</a></li>
					<li><a href="#">Catalogue</a></li>
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
			<!--<li id="menu-item-3"><a href="#">Others</a>
            		<ul>
					
					<li><a href="#">Volunteering</a></li>
					<li><a href="#">ZODML Shop</a></li>
                    <li><a href="#">Fundraising Events</a></li>

                    </ul>
            </li>-->
			
		</ul>
	</li>
	<li><a href="blog/index.php">Blog</a></li>
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

<!--CONTENT HOLDER-->
<div id="content_holder">
                		
                        <!--CONTENT LAYER 1-->
                        <div id="aboutus_content_layer1">
                        Services > JOBS
                        </div>
                        <!--END OF CONTENT LAYER 1-->
                        <!--CONTENT LAYER 2-->
                        <div id="aboutus_content_holder2">
                        <table>
                        <tr><td>
                        			<div id="aboutus_content_holder3">
                                        <div id="aboutus_cathy">
                                        CONTENTS  TO FILL THIS SPACE
                                        
                                        </div>
                         			</div>
                           </td>
                           <td valign="top">         
                                    <div id="aboutus_others_hold">
                               
                            			<div id="aboutus_shortlinks">
                                        	<div id="aboutus_shortlinks_title"">Other links</div>
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