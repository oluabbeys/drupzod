<div id="aboutus_others_cathy_hold_ad2">
                               			<!--BLOG POST BANNER-->
                            			<div id="aboutus_cathy_shortlinks_ad">
                                        	<div id="aboutus_shortlinks_title_ad">ZODML Blog posts</a></div>
                                            <div style="margin:5px 0px 0px 0px; padding:4px; font-size:12px; line-height:22px; font-family: 'Lucida Sans Unicode', 'Lucida Grande', sans-serif;">
                                            <a href="blog/what-do-you-see.php">What Do You See? </a><br />
                                            <a href="blog/christmas_stories.php">Christmas Stories</a><br />
                                            <a href="blog/power_of_books.php">The Power of Books</a><br />
                                            </div>
                                           
                                        </div>
										<!--END OF BLOG POST BANNER-->	
										
										<!--VOLUNTEER BANNER-->
											<a href="volunteer.php">
                                        	<div id="cathy_get_involved">
                                            <table>
                                            <tr>
                                            <td align="center"><img src="images/get-involved-icon.png" width="150" height="80" alt="get involved" /><br/><br/>Volunteer for ZODML</td>
                                            <td><span style="font-size:10px;">Want to give back to the community? ZODML offers rewarding opportunities for volunteers of all ages and professions.</span></td>
                                            </tr>
                                            </table>
                                            </div>
											</a>
										<!--END OF VOLUNTEER BANNER-->
										
										<!--E-LIBRARY BANNER-->
											<a href="e-library/">
							   				<div id="cathy_get_involved">
                                            <table>
                                            <tr>
                                            <td align="center"><img src="images/e-library.png" width="150" height="80" alt="e-library" /><br/><br/>e-Books</td>
                                            <td valign="top"><span style="font-size:10px;">View our e-library section and browse through our collections of e-books on various subjects.</span></td>
                                            </tr>
                                            </table>
                                            </div>
											</a>
                                            <!--END OF E-LIBRARY BANNER-->
                                            
										<!--DLC BANNER-->
											<a href="dlc/" target="_blank">
                                            <div id="cathy_get_involved">
                                            <table>
                                            <tr>
                                            <td align="center"><img src="images/dlc_banner_ad.jpg" width="150" height="80" alt="get involved" /><br/><br/>Join the DLC</td>
                                            <td valign="top"><span style="font-size:10px;">Join the Digital Learning Community, share your knowledge with fellow students and win exciting prizes!</span></td>
                                            </tr>
                                            </table>
                                            </div>
											</a>
                                         <!--END OF DLC BANNER-->
										<!--BOOK OF THE WEEK BANNER-->
                            				<div id="each_book_others_holdbow_ad">

                           

                            			<div id="aboutus_shortlinksbow_ad">

                                        	<div id="aboutus_shortlinks_titlebow_ad"><b>Book of the Week</b></div>

                                       		<table cellspacing="8">

                                            <?php
											  include_once("Nigeria/scripts/config2.php");
											  $bookfiction = mysql_query("SELECT * FROM books2 WHERE Id='29252'");
											  $row2 = mysql_fetch_array($bookfiction);
											  $fictiontitle = $row2['Title'];
											  $fictionfullname = $row2['FullName'];
				 						 	?>
                                            <tr>

                                            <td><img src="images/purple_hibiscus_home.png" width="60" height="70" alt="<?php echo $fictiontitle; ?>" title="<?php echo $fictiontitle; ?>" /></td>

                                            <td><a href="book-of-the-week.php?bookid=29252"><?php echo $fictiontitle; ?></a> <br />by <?php echo $fictionfullname; ?><br />Category: Fiction</td>

                                            </tr>
                                            
											<?php
											  include_once("Nigeria/scripts/config2.php");
											  $booknonfiction = mysql_query("SELECT * FROM books2 WHERE Id='2394'");
											  $row3 = mysql_fetch_array($booknonfiction);
											  $nonfictiontitle = $row3['Title'];
											  $nonfictionfullname = $row3['FullName'];
				  							?>
                                             <tr>

                                            <td><img src="images/awoism_home.png" width="60" height="70" alt="<?php echo $nonfictiontitle; ?>" title="<?php echo $nonfictiontitle; ?>" /></td>

                                            <td><a href="book-of-the-week.php?bookid=2394"><?php echo $nonfictiontitle; ?></a> <br />by <?php echo $nonfictionfullname; ?><br />Category: Non-fiction</td>

                                            </tr>
                                            
                                            <?php
											  include_once("Nigeria/scripts/config2.php");
											  $bookchildren = mysql_query("SELECT * FROM books2 WHERE Id='16426'");
											  $row4 = mysql_fetch_array($bookchildren);
											  $childrentitle = $row4['Title'];
											  $childrenfullname = $row4['FullName'];
				  							?>

                                             <tr>

                                            <td><img src="images/first_corn_home.png" width="60" height="70" alt="<?php echo $childrentitle; ?>" title="<?php echo $childrentitle; ?>"/></td>

                                            <td><a href="book-of-the-week.php?bookid=29358"><?php echo $childrentitle; ?></a> <br />by <?php echo $childrenfullname; ?><br />Category: Children & Young Adults</td>

                                            </tr>


                                            </table>

                                        </div>	
										<!--END OF BOOK OF THE WEEK BANNER-->
										
										<!--SOCIAL MEDIA BANNER FACEBOOK-->
										<div id="social_media">
                	
                        					<table cellspacing="0">
                        
                       							 <!--FACEBOOK API-->
                        						<tr>
                        							<td>
                        								<div class="fb-like-box" data-href="http://www.facebook.com/pages/Zaccheus-Onumba-Dibiaezue-Memorial-Libraries/233709620080206" data-width="260" data-height="300" data-show-faces="true" data-border-color="#CCC" data-stream="false" data-header="false"></div>
                        							</td>
                        						</tr>
                        						<!--END OF FACEBOOK API-->
                        					</table>
                        
                						</div>
										<!--END OF SOCIAL MEDIA BANNER FACEBOOK-->

                            

                            	</div>
                                
                                	
                           	 </div>
							 
							 

~

<div id="aboutus_others_cathy_hold_ad2">
                                    	
                                        
                                    
                               				<!--DISCOVER NIGERIA BANNER-->
											<a href="Nigeria/">
                            			<div id="cathy_get_involved" style="font-size:10px;">
                                        	<table cellspacing="10">
                                            <tr>
                                            <td valign="top" align="center"><img src="images/discovernigeria5.png" width="150" height="130" alt="discover nigeria" /><br /><br />Discover Nigeria</td>
                                            <td valign="top">We at ZODML have set ourselves the task of reminding people about the rich culture we possess, numerous achievements of Nigerians. </td>
                                            </tr>
                                            </table>
                                           
                                        </div>	
											</a>
                                        <!--END OF DISCOVER NIGERIA BANNER-->
										
											<!--E-LIBRARY BANNER-->
											<a href="e-library/">
							   				<div id="cathy_get_involved">
                                            <table>
                                            <tr>
                                            <td align="center"><img src="images/e-library.png" width="150" height="80" alt="e-library" /><br/><br/>e-Books</td>
                                            <td valign="top"><span style="font-size:10px;">View our e-library section and browse through our collections of e-books on various subjects.</span></td>
                                            </tr>
                                            </table>
                                            </div>
											</a>
                                            <!--END OF E-LIBRARY BANNER-->
                                       
                                            <!--DLC BANNER
                                            <div id="cathy_get_involved">
                                            <table>
                                            <tr>
                                            <td align="center"><img src="images/dlc_banner_ad.jpg" width="150" height="80" alt="dlc" /><br/><br/><a href="dlc/" target="_blank">Join the DLC</a></td>
                                            <td valign="top"><span style="font-size:10px;">Join the Digital Learning Community and Share your learning experience with other students. Exciting prizes to be won!!!</span></td>
                                            </tr>
                                            </table>
                                            </div>-->
                                            <!--END OF DLC BANNER-->
                                            
                                            
                                             <!--VOLUNTEER-->
											 <a href="volunteer.php">
                                        	<div id="cathy_get_involved">
                                            <table>
                                            <tr>
                                            <td align="center"><img src="images/get-involved-icon.png" width="150" height="80" alt="get involved" /><br/><br/>Volunteer for ZODML</td>
                                            <td><span style="font-size:10px; color:#444;">Want to give back to the community? ZODML offers rewarding opportunities for volunteers of all ages and professions.</span></td>
                                            </tr>
                                            </table>
                                            </div>
											</a>
                                            <!--END OF VOLUNTEER-->
											
											<!--CAREER GUIDE BANNER-->
											<a href="career_guide.php">
											<div id="cathy_get_involved">
                                            <table>
                                            <tr>
                                            <td align="center"><img src="images/career_guide.png" width="150" height="80" alt="career guide" /><br/><br/>Career Guide</td>
                                            <td valign="top"><span style="font-size:10px;">Free resources to help you build a thriving and rewarding career.</span></td>
                                            </tr>
                                            </table>
                                            </div>
											</a>
											<!--END OF CAREER GUIDE BANNER-->
                                            
                                            <!--SOCIAL MEDIA BANNER TWITTER-->
										<div id="social_media2">
										<a class="twitter-timeline"  href="https://twitter.com/ZODML" data-widget-id="260372541170917376" width="260" height="300">Tweets by @ZODML</a>
<script>!function(d,s,id){var js,fjs=d.getElementsByTagName(s)[0];if(!d.getElementById(id)){js=d.createElement(s);js.id=id;js.src="//platform.twitter.com/widgets.js";fjs.parentNode.insertBefore(js,fjs);}}(document,"script","twitter-wjs");</script>
										</div>

                                            
                            </div>

                            	</div>
                                
                                	
                           	 </div>
