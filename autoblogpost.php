<?php 
								//ini_set("display_errors", "off");
								include_once("Nigeria/scripts/config.php");
								$sqlblog = mysql_query("SELECT * FROM contentsupdate WHERE id=79");
								while($rowblog = mysql_fetch_array($sqlblog)){
								$idblog = $rowblog['id'];
								$contentblog = $rowblog['contents'];
								
					 			?>
								
                                <?php echo $contentblog; ?>
								
                                <?php } ?>