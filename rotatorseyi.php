<div >
<?php 
								ini_set("display_errors", "off");
								include_once("Nigeria/scripts/config.php");
								$sqlban = mysql_query("SELECT * FROM contentsupdate WHERE id=26");
								while($rowban = mysql_fetch_array($sqlban)){
								$id2ban = $rowban["id"];
								$content2ban = $rowban["contents"];
								$title2ban = $rowban["title"];
								$tagsban = $rowban["metatags"];
								$descriptionban = $rowban["metadescription"];
								$metatitleban = $rowban["metatitle"];
								}
					 			?>
								
                                <?php echo $content2ban; ?>


</div>

