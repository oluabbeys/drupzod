<?php 
								ini_set("display_errors", "off");
								include_once("scripts/config.php");
								$sql22 = mysql_query("SELECT * FROM contentsupdate WHERE id=32");
								while($row22 = mysql_fetch_array($sql22)){
								$id22 = $row22["id"];
								$content22 = $row22["contents"];
								$title22 = $row22["title"];
								$tags22 = $row22["metatags"];
								$description22 = $row22["metadescription"];
								$metatitle22 = $row22["metatitle"];
								}
					 			?>
								
                                <?php echo $content22; ?>