<?php 
								//ini_set("display_errors", "off");
								include_once("Nigeria/scripts/config.php");
								$sqlbotw = mysql_query("SELECT * FROM contentsupdate WHERE id=76");
								while($rowbotw = mysql_fetch_array($sqlbotw)){
								$idbotw = $rowbotw['id'];
								$contentbotw = $rowbotw['contents'];
								
					 			?>
								
                                <?php echo $contentbotw; ?>
								
                                <?php } ?>