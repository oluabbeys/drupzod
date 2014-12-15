

						
                     			<?php 
								ini_set("display_errors", "off");
								include_once("Nigeria/scripts/wordpress.php");
								$sql = mysql_query("SELECT * FROM wp_posts WHERE post_status='publish' ORDER BY post_date DESC LIMIT 0,3");
								while($row = mysql_fetch_array($sql)){
								$id = $row['ID'];
								$topic = $row['post_title'];
								$url = $row['guid'];
								echo "<tr><td><img src=\"images/icon.png\" width=\"7\" height=\"10\"/></td><td><span style=\"color:#444;\"><a href=\"$url\">$topic</a></span></td></tr>";
					 			?>
                     
                     		<?php } ?>
                            
                         