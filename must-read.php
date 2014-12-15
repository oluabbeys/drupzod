<?php						
error_reporting(0);
session_start();		


$id=$_GET['id'];
$_SESSION['must']=$_GET['id'];

						//include_once("db.php");
						include_once("db_books.php");
						$query="select * from mustread where id='$id'";

						$sql=mysql_query($query);

						$row=mysql_fetch_array($sql);
						$title = $row['title'];

						?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>ZODML | Must Read Books| Title: <?php echo $title;  ?> </title>
<link href="css/styles.css" type="text/css" rel="stylesheet" media="screen" />
<link href="css/menu.css" type="text/css" rel="stylesheet" media="screen" />
<link href="css/bottom.css" type="text/css" rel="stylesheet" media="screen"/>
<link href="images/favicon.ico" rel="shortcut icon" />
<link rel="stylesheet" type="text/css" href="css/jkmegamenu.css" />
<!--<script type="text/javascript" src=" https://ajax.googleapis.com/ajax/libs/jquery/1.6/jquery.js"></script>-->
<script type='text/javascript' src="js/pixreg1.js"></script>
<script type='text/javascript' src="js/pixreg2.js"></script>
<script type='text/javascript' src="js/pixreg1.js"></script>
<script type='text/javascript' src="js/pixreg2.js"></script>
<script type='text/javascript' src='js/jquery.hoverIntent.minified.js'></script>
<script type='text/javascript' src='js/jquery.dcmegamenu.1.2.js'></script>
<script type="text/javascript" src="js/contact.js"></script>
<script type="text/javascript" src="js2/megamenu.js"></script>
<script type="text/javascript" src="js2/jkmegamenu.js"></script>
<script type="text/javascript">
$(document).ready(function($){
	$('#mega-menu-tut').dcMegaMenu({
		rowItems: '3',
		speed: 'fast'
	});
});
</script>
<script type="text/javascript" src="../js3/jquery-1.5.1.min.js"></script>

<script type="text/javascript" src="../js3/jquery-ui-1.8.13.custom.min.js"></script>

<script type="text/javascript" src="../lightbox/js/jquery.lightbox-0.5.js"></script>

<link type="text/css" rel="stylesheet" href="../lightbox/css/jquery.lightbox-0.5.css" />

<script type="text/javascript" src="../js3/search.js"></script>

<script type="text/javascript" src="../star/jquery.MetaData.js"></script>

<script type="text/javascript" src="../star/jquery.rating.js"></script>

<script type="text/javascript" src="../star/jquery.rating.pack.js"></script>

<link rel="stylesheet" type="text/css" href="../css2/ui-lightness/jquery-ui-1.8.2.custom.css" />

<link rel="stylesheet" type="text/css" href="../star/jquery.rating.css" />


<style type="text/css">

#resulttable a img{

	border:none;

	text-decoration:none;

}

#resulttable a{

	text-decoration:none;

	color:#850000;

}

</style>

<script type="text/javascript">

$(function(){

	$('#showcomment').click(function(){

			$('#commentbox').dialog({

			

						resizable: false,

						width:500,

						modal: true,

						buttons: {

						Close: function() {

					$( this ).dialog( "close" );

				}

			}

			

		});	

	});

});



$(function(){

	$('#submitrate').click(function(){

		var rateval=$("input:radio[name='star1']:checked").val();

		var bookid=$('#bookidentity').val();

			$.get("../server/fetch.php?cmd=0_4&par="+rateval+"&id="+bookid, function(data){

				var res=$('#rateresult').html("");

				res.append('<font face="trebuchet ms" size="1" color="#850000">'+data+'</font>');

			});

	});

});

</script>



<!--Facebook API-->
<div id="fb-root"></div>
<script>(function(d, s, id) {
  var js, fjs = d.getElementsByTagName(s)[0];
  if (d.getElementById(id)) return;
  js = d.createElement(s); js.id = id;
  js.src = "//connect.facebook.net/en_GB/all.js#xfbml=1";
  fjs.parentNode.insertBefore(js, fjs);
}(document, 'script', 'facebook-jssdk'));</script>
<!--end of Facebook API-->


<script type="text/javascript">
jkmegamenu.definemenu("megaanchor9", "megamenu5", "mouseover")

</script>


<!-- Google+ tag. -->
<script type="text/javascript">
  (function() {
    var po = document.createElement('script'); po.type = 'text/javascript'; po.async = true;
    po.src = 'https://apis.google.com/js/plusone.js';
    var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(po, s);
  })();
</script>
<!-- End of Google+ tag. -->


<!--linkedin api-->
<!--
<script src="//platform.linkedin.com/in.js" type="text/javascript">
 lang: en_US
</script>
-->

<!-- AddThis Button BEGIN -->
<div class="addthis_toolbox addthis_floating_style addthis_32x32_style" style="right:25px;top:25px;">
<a class="addthis_button_twitter"></a>
<a class="addthis_button_facebook"></a>
<a class="addthis_button_pinterest_share"></a>
<a class="addthis_button_linkedin"></a>
<a class="addthis_button_email"></a>
<a class="addthis_button_tumblr"></a>
<a class="addthis_button_google_plusone_share"></a>
<a class="addthis_button_compact"></a>
</div>
<script type="text/javascript">var addthis_config = {"data_track_addressbar":true};</script>
<script type="text/javascript" src="//s7.addthis.com/js/300/addthis_widget.js#pubid=ra-521f68de301bc049"></script>
<!-- AddThis Button END -->

<!--code that link Addthis to google analytics-->
<script type="text/javascript">
      var addthis_config = {
         data_ga_property: 'UA-33455239-1'
      }; 
</script>
<!--end code that link Addthis to google analytics-->
<!-- Start of Woopra Code -->
<script>
(function(){
    var t,i,e,n=window,o=document,a=arguments,s="script",r=["config","track","identify","visit","push","call"],c=function(){var t,i=this;for(i._e=[],t=0;r.length>t;t++)(function(t){i[t]=function(){return i._e.push([t].concat(Array.prototype.slice.call(arguments,0))),i}})(r[t])};for(n._w=n._w||{},t=0;a.length>t;t++)n._w[a[t]]=n[a[t]]=n[a[t]]||new c;i=o.createElement(s),i.async=1,i.src="//static.woopra.com/js/w.js",e=o.getElementsByTagName(s)[0],e.parentNode.insertBefore(i,e)
})("woopra");

woopra.config({
    domain: 'zodml.org'
});
woopra.track();
</script>
<!-- End of Woopra Code -->
<!--GOOGLE TRACKING CODE-->
<script>
  (function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
  (i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s.createElement(o),
  m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a,m)
  })(window,document,'script','//www.google-analytics.com/analytics.js','ga');

  ga('create', 'UA-33455239-1', 'zodml.org');
  ga('send', 'pageview');

</script>
<!--END OF GOOGLE TRACKING CODE-->


</head>

<body>
<!--BODY HOLDER-->
<div id="body_hold">
			<!--HEADER-->
                 <div id="header">
                 <a href="http://zodml.org"><div id="logo-link"></div></a>
                 
                <div id="subheader">
                <br />
                	<?php include("search_bar.php"); ?>
                </div>	
                </div>
		<!--END OF HEADER-->

<!--MENU-->
			<div id="menu_ba">
            	<?php include("menu.php");?>
            </div>
<!--END OF MENU-->

<!--CONTENT HOLDER-->
<div id="content_holder">
                		
                         <!--CONTENT LAYER 1-->
    <div id="aboutus_content_eachbook" style="height:30px;">
                        <!--LEFT-->
      <div style="font-size:14px; font-family:'Lucida Sans Unicode', 'Lucida Grande', sans-serif; line-height:25px; width:700px; height:35px; float:left;">
                        <table>
                        <tr>
                        <td height="30" valign="top">
                        <div style="width:450px; font-size:13px;"><img src="images/back.png" width="9" height="11" />&nbsp;&nbsp;<span id="backtocatalogue"><a href="catalogue.php">Catalogue Home</a></span> | <span style="color:#EC9F00; font-size:13px;"><?php echo $title; ?></span> Details</div>
                        </td>
                        <td height="30" valign="top">
                        <div style="width:160px; height:30px; float:left; margin:0px 0px 0px 0px;">
                                	<span id="megaanchor9" style="cursor:pointer;"><img src="images/share_seyi.png" width="100" height="30" /></span>
                                    <div id="megamenu5" class="megamenu2">
                                        <div class="column2">
                                        
                                            <ul>
                                            <li>
                                            <!--Twitter API-->
                         <a href="https://twitter.com/share" class="twitter-share-button" data-url="<?php echo $url; ?>" data-via="ZODML" data-hashtags="DiscoverNigeria">Tweet</a>
<script>!function(d,s,id){var js,fjs=d.getElementsByTagName(s)[0];if(!d.getElementById(id)){js=d.createElement(s);js.id=id;js.src="//platform.twitter.com/widgets.js";fjs.parentNode.insertBefore(js,fjs);}}(document,"script","twitter-wjs");</script>
							<!--End of Twitter API-->
                                            </li>
                                            <li></li>
                                            <li><!--facebook API-->
                            	<div class="fb-like" data-href="<?php echo $url; ?>" data-send="false" data-layout="button_count" data-width="100" data-show-faces="false" data-font="verdana" style="margin:0px 0px 0px 0px;"></div>
                            
                            <!--End of facebook API--></li>
                                            <li><!--Email a friend script-->
                        <script type="text/javascript">
function open_win(){
	window.open("email-must.php?code=<?php echo $id; ?>","_blank","menubar=no, scrollbar=no, resizable=no, width=400, height=450");
}
</script>
<!--end of Email a friend script-->
                        <!--Email a friend-->
                        <div id="email_a_friend_seyi" onclick="open_win();" title="Email a friend"></div>
                        <!--End of Email a friend--></li>
                                            <li>
                   	  <a data-pin-do="buttonFollow" href="http://pinterest.com/zodml/">Pinterest</a></li>
                      <li><a href="http://www.tumblr.com/share" title="Share on Tumblr" style="display:inline-block; text-indent:-9999px; overflow:hidden; width:61px; height:20px; background:url('http://platform.tumblr.com/v1/share_2.png') top left no-repeat transparent;">Share on Tumblr</a></li>
                                            <!--<li><a href="http://www.linkedin.com/company/3189484" onclick="window.open('http://www.linkedin.com/company/3189484','popup','width=800,height=800,scrollbars=no,resizable=no,toolbar=no,directories=no,location=no,menubar=no,status=no,left=0,top=0'); return false"><img src="../images/linkedin-logo.png" width="120" height="30" title="ZODML on LinkedIn" /></a></li>-->
                                           <!-- <li><a href="https://plus.google.com/105034633811205771915" rel="publisher">Google+</a></li>-->
                                           <li><div class="g-plusone"></div></li>
                                            <!--<li><div class="linkedin"> <script type="IN/Share" data-counter="left"></script></div></li>-->

                                            </ul>
                                        </div>
                          </div>
                   		  </div>
                        </td>
                        </tr>
                        </table>
      </div>
      <!--END OF LEFT-->
     </div>
                       
                        <!--END OF CONTENT LAYER 1-->
                        <!--CONTENT LAYER 2-->
                        <div id="aboutus_content_holder2">
                        <table cellspacing="10">
                        <tr><td valign="top">
                        			<div id="aboutus_content_holder3_eachbook-new">
                                        <div id="each_book-new">
                                      <!--  remove something here-->
                                        <table width="100%" border="0" cellpadding="0" cellspacing="5">

                             <tr> 

                              <td valign="top" bgcolor="" colspan="3"><div style="margin:0px 20px 0px 0px;"><code><img src="correction-new/Images/<?php echo $row['picture']; ?>" width="150" height="150" /></code></div></td>

                              <td valign="top"><code><font face="verdana" size="3" color="#EC9F00"><strong><?php echo $row['title']; ?></strong></font></td></tr>

                              <tr>
                                    <td colspan="5"><code></code></td>
                                  </tr>

                               <tr><td colspan="3"><code><font face="verdana" size="2" color="#000000"><strong>Author:</strong></font></code></td><td valign="top" style="border-bottom:#AFB3C0 1px dashed;"><code><font face="verdana" size="2" color="#000000"><br />
                               <?php echo $row['author']; ?></font><br /><br />
                               </code></td></tr>

                              <tr><td  colspan="3"><code><font face="verdana" size="2" color="#000000"><strong>Nationality:</strong></font></code></td><td valign="top" style="border-bottom:#AFB3C0 1px dashed;"><code><font face="verdana" size="2" color="#000000">
                              <?php echo $row['nationality']; ?></font><br /><br />
                              </code></td></tr>

                              <tr><td valign="top" colspan="3"><code><font face="verdana" size="2" color="#000000"><strong>Synopsis:</strong></font></code></td><td valign="top" style="border-bottom:#AFB3C0 1px dashed; line-height:25px;"><code><font face="verdana" size="2" color="#000000">
                              <?php echo $row['synopsis']; ?></font><br /><br />
                              </code></td></tr>
                              
                              <tr>
                                    <td colspan="5"><code></code></td>
                                  </tr>
                                  <tr>
                                    <td width="73" >
                                    <!-- First level Comment-->
                                    <code><script type="text/javascript">
function open_win_seyi(){
	window.open("mustcomment.php?code=<?php echo $row['id']; ?>","_blank","menubar=no, scrollbar=no, resizable=no, width=400, height=350");
}
</script> 

                        
                        <div id="each_book_add_comment" onclick="open_win_seyi();" title="Add your Comment"></div>
                       <!--End of First Level Comment--></code></td>
                                    <td width="73" >&nbsp;</td>
                                    <td colspan="3"></td>
                                  </tr>
                                  <tr>
                                    <td colspan="5"><code></code></td>
                                  </tr>
                                  <?php
							include("db.php");
							$query2="select * from mustreadcomment where BookId='$id'  and childReply = '' order by Id desc";

							$sql2=mysql_query($query2);

							while($row2=mysql_fetch_array($sql2)){ 
							$namefirst= $row2['Name'];
							$commentfirst= $row2['Comment'];
							$firstreplyid= $row2['ParentReply'];
							$datefirst = $row2['DateComment'];
						
							
							?>
                                  <tr>
                                    <td colspan="5"><code>
                                      <div style="word-wrap:break-word; width:600px; border:solid 3px #EC9F00; padding:2px; overflow:auto;"><code><font face="verdana" size="2" color="#444" ><strong>Posted By: <?php echo $namefirst; ?> &nbsp; &nbsp; &nbsp; <?php echo $datefirst;?> </strong></font><br />
                                            <font face="Verdana" size="2"><?php echo $commentfirst; ?></font></code></div>
                                    </code></td>
                                  </tr>
                                  <tr>
                                    <td width="73" ><code><!-- Second Level Comment-->
                                    <a href="mustcomment-reply.php?firstreplyid=<?php echo $firstreplyid; ?>" onclick="window.open('mustcomment-reply.php?firstreplyid=<?php echo $firstreplyid; ?>','popup','width=400,height=350,scrollbars=no,resizable=no,toolbar=no,directories=no,location=no,menubar=no,status=no,left=0,top=0' ); return false"><div id="each_book_add_reply"; title="Reply to this Comment"></div>
                                    </a> 
                       <!--End of Second Level Comment--></code></td>
                                    <td width="73" >&nbsp;</td>
                                    <td colspan="3"></td>
                                  </tr>
                                   <?php
							//include("db.php");
							
							$ParentReplyid = $row2['ParentReply'];
							
							$query9="select * from mustreadcomment where ChildReply='$ParentReplyid' and BookId='$id' order by Id desc";

							$sql9=mysql_query($query9);

							while($row9=mysql_fetch_array($sql9)){ 

							?>
                                  <tr>
                                    <td><code> </code></td>
                                    <td colspan="4"><code>
                                      <div style="word-wrap:break-word; width:484px; border:solid 1px #EC9F00; padding:2px; overflow:auto;"><code><font face="verdana" size="2" color="#444" ><strong>Posted By: <?php echo $row9['Name']; ?> &nbsp; &nbsp; &nbsp; <?php echo  $row9['DateComment']; ?></strong></font><br />
                                            <font face="Verdana" size="2"><?php echo $row9['Comment']; ?></font></code></div>
                                    </code></td>
                                  </tr>
                                  <?php

							}

							?>
                                  <tr>
                                    <td colspan="5"><code>&nbsp;</code></td>
                                  </tr>
                                  
                                  <?php

							}

							?>
                                </table>
                                <p>&nbsp;</p>  
                                  <p>&nbsp;</p>   
                                        
                               
                                        </div>
                         			</div>
                           </td>
                           <td valign="top">         
                                    <?php include("rotator.php"); ?>
                            </td>
                            </tr>
                            </table>
                            
                                    
                        </div>		
                       <!--END OF CONTENT LAYER 2-->
                       
          
  </div>
<!--END OF CONTENT HOLDER-->

<!--FOOTER-->
<div id="footer_new_hold">
<?php include("footer.php"); ?>
</div>
<!--END OF FOOTER-->

</div>
<!--END OF THE BODY HOLDER-->
<!--comment form-->
<form id="contactForm" action="processForm.php" method="post">

  <h2>Send us an email...</h2>

  <ul>

    <li>
      <label for="senderName" class="label">Your Name</label>
      <input type="text" name="senderName" id="senderName" placeholder="Please type your name" required maxlength="40" class="input" />
    </li>

    <li>
      <label for="senderEmail" class="label">Your Email Address</label>
      <input type="email" name="senderEmail" id="senderEmail" placeholder="Please type your email address" required maxlength="50" class="input" />
    </li>

    <li>
      <label for="message" style="padding-top: .5em;" class="label">Your Message</label>
      <textarea name="message" id="message" placeholder="Please type your message" required cols="80" rows="10" maxlength="10000" class="textarea"></textarea>
    </li>
  <li> <center>
   <?php
          require_once('recaptchalib.php');
          $publickey = "6LeaNe0SAAAAAD_k-yxZlOyJqFiWdPmSP42ppTpG"; // you got this from the signup page
          echo recaptcha_get_html($publickey);
        ?></center>
        </li>
  </ul>

  <div id="formButtons">
    <input type="submit" id="sendMessage" name="sendMessage" value="Send Email" />
    <input type="button" id="cancel" name="cancel" value="Cancel" />
  </div>

</form>

<div id="sendingMessage" class="statusMessage"><p>Sending your message. Please wait...</p></div>
<div id="successMessage" class="statusMessage"><p>Thanks for sending your message! We'll get back to you shortly.</p></div>
<div id="failureMessage" class="statusMessage"><p>There was a problem sending your message. Please try again.</p></div>
<div id="incompleteMessage" class="statusMessage"><p>Please complete all the fields in the form before sending.</p></div>
<script type="text/javascript" src="//assets.pinterest.com/js/pinit.js"></script>
<script type="text/javascript" data-pin-hover="true" src="//assets.pinterest.com/js/pinit.js"></script>
<script src="http://platform.tumblr.com/v1/share.js"></script>
</body>
</html>