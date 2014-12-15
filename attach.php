<div id="each_book_others_holdbow">

                           

                            			<div id="aboutus_shortlinksbow">

                                        	<div id="aboutus_shortlinks_titlebow"><b>Book of the Week</b></div>

                                       		<table cellspacing="10">
                                            
											 <?php
											  include_once("Nigeria/scripts/config2.php");
											  $bookfiction = mysql_query("SELECT * FROM books2 WHERE Id='2712'");
											  $row2 = mysql_fetch_array($bookfiction);
											  $fictiontitle = $row2['Title'];
											  $fictionfullname = $row2['FullName'];
				 						 	?>
                                            <tr>

                                            <td><img src="images/measuring_time_home.png" width="60" height="70" alt="<?php echo $fictiontitle; ?>" title="<?php echo $fictiontitle; ?>" /></td>

                                            <td><a href="book-of-the-week.php?bookid=<?php echo $fictiontitle; ?>"><?php echo $fictiontitle; ?></a> <br />by <?php echo $fictionfullname; ?><br />Category: Fiction</td>

                                            </tr>
                                            
											<?php
											  include_once("Nigeria/scripts/config2.php");
											  $booknonfiction = mysql_query("SELECT * FROM books2 WHERE Id='960'");
											  $row3 = mysql_fetch_array($booknonfiction);
											  $nonfictiontitle = $row3['Title'];
											  $nonfictionfullname = $row3['FullName'];
				  							?>
                                             <tr>

                                            <td><img src="images/my_odyssey_home.png" width="60" height="70" alt="<?php echo $nonfictiontitle; ?>" title="<?php echo $nonfictiontitle; ?>" /></td>

                                            <td><a href="book-of-the-week.php?bookid=<?php echo $nonfictiontitle; ?>"><?php echo $nonfictiontitle; ?></a> <br />by <?php echo $nonfictionfullname; ?><br />Category: Non-fiction</td>

                                            </tr>
                                            
                                            <?php
											  include_once("Nigeria/scripts/config2.php");
											  $bookchildren = mysql_query("SELECT * FROM books2 WHERE Id='36728'");
											  $row4 = mysql_fetch_array($bookchildren);
											  $childrentitle = $row4['Title'];
											  $childrenfullname = $row4['FullName'];
				  							?>

                                             <tr>

                                            <td><img src="images/twins_home.jpg" width="60" height="70" alt="<?php echo $childrentitle; ?>" title="<?php echo $childrentitle; ?>"/></td>

                                            <td><a href="book-of-the-week.php?bookid=<?php echo $childrentitle; ?>"><?php echo $childrentitle; ?></a> <br />by <?php echo $childrenfullname; ?><br />Category: Children & Young Adults</td>

                                            </tr>

                                            </table>

                                        </div>	

                            

                            	</div>