<?php 
								//ini_set("display_errors", "off");
								include_once("Nigeria/scripts/config.php");
								$sqlaotw = mysql_query("SELECT * FROM contentsupdate WHERE id=78");
								while($rowaotw = mysql_fetch_array($sqlaotw)){
								$idaotw = $rowaotw['id'];
								$contentaotw = $rowaotw['contents'];
								
					 			?>
								
                                <?php echo $contentaotw; ?>
								
                                <?php } ?>