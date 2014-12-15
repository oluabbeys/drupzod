<?php 
								//ini_set("display_errors", "off");
								include_once("Nigeria/scripts/config.php");
								$sqlpixtrans = mysql_query("SELECT * FROM contentsupdate WHERE id=77");
								while($rowpixtrans = mysql_fetch_array($sqlpixtrans)){
								$idpixtrans = $rowpixtrans['id'];
								$contentpixtrans = $rowpixtrans['contents'];
								
					 			?>
								
                                <?php echo $contentpixtrans; ?>
								
                                <?php } ?>