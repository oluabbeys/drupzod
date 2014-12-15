<?php 
								ini_set("display_errors", "off");
								include_once("Nigeria/scripts/config.php");
								$sqlfooter = mysql_query("SELECT * FROM contentsupdate WHERE id=33");
								while($rowfooter = mysql_fetch_array($sqlfooter)){
								$idfooter = $rowfooter["id"];
								$contentfooter = $rowfooter["contents"];
								$titlefooter = $rowfooter["title"];
								$tagsfooter = $rowfooter["metatags"];
								$descriptionfooter = $rowfooter["metadescription"];
								$metatitlefooter = $rowfooter["metatitle"];
								}
					 			?>
								
                                <?php echo $contentfooter; ?>