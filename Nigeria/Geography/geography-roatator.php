<div id="aboutus_others_cathy_hold_ad">
<?php 
								ini_set("display_errors", "off");
								include_once("../Nigeria/scripts/config.php");
								$sqlban = mysql_query("SELECT * FROM contentsupdate WHERE id=29");
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
                                
                                


<!--SOCIAL MEDIA BANNER FACEBOOK-->
										<div id="social_media">
                	
                        					<!--FACEBOOK API-->
                        								<div style="width:260px; height:300px;" class="fb-like-box" data-href="http://www.facebook.com/pages/Zaccheus-Onumba-Dibiaezue-Memorial-Libraries/233709620080206" data-width="" data-height="300" data-show-faces="true" data-border-color="#CCC" data-stream="false" data-header="false"></div>
                        						<!--END OF FACEBOOK API-->	
                        
                						</div>
										<!--END OF SOCIAL MEDIA BANNER FACEBOOK-->



 <!--SOCIAL MEDIA BANNER TWITTER-->
<div id="social_media2"><a class="twitter-timeline" href="https://twitter.com/ZODML" data-widget-id="260372541170917376">Tweets by @ZODML</a>
<script type="text/javascript">// <![CDATA[
!function(d,s,id){var js,fjs=d.getElementsByTagName(s)[0];if(!d.getElementById(id)){js=d.createElement(s);js.id=id;js.src="//platform.twitter.com/widgets.js";fjs.parentNode.insertBefore(js,fjs);}}(document,"script","twitter-wjs");
// ]]></script>
</div>
<!--END OF SOCIAL MEDIA BANNER TWITTER-->
</div>

<p>&nbsp;</p>