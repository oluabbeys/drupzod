<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Zaccheus Onumba Dibiaezue Memorial Libraries|e-library in Nigeria|Library services|Anthills of the Savannah</title>
<link href="css/styles.css" type="text/css" rel="stylesheet" media="screen" />
<link href="css/menu.css" type="text/css" rel="stylesheet" media="screen" />
<link href="css/bottom.css" type="text/css" rel="stylesheet" media="screen"/>
<script type='text/javascript' src="js/pixreg1.js"></script>
<script type='text/javascript' src="js/pixreg2.js"></script>
<script type='text/javascript' src='js/jquery.hoverIntent.minified.js'></script>
<script type='text/javascript' src='js/jquery.dcmegamenu.1.2.js'></script>
<script type="text/javascript">
$(document).ready(function($){
	$('#mega-menu-tut').dcMegaMenu({
		rowItems: '3',
		speed: 'fast'
	});
});
</script>
<script type="text/javascript" src="../js/jquery-1.5.1.min.js"></script>

<script type="text/javascript" src="../js/jquery-ui-1.8.13.custom.min.js"></script>

<script type="text/javascript" src="../lightbox/js/jquery.lightbox-0.5.js"></script>

<link type="text/css" rel="stylesheet" href="../lightbox/css/jquery.lightbox-0.5.css" />

<script type="text/javascript" src="../js/search.js"></script>

<script type="text/javascript" src="../star/jquery.MetaData.js"></script>

<script type="text/javascript" src="../star/jquery.rating.js"></script>

<script type="text/javascript" src="../star/jquery.rating.pack.js"></script>

<link rel="stylesheet" type="text/css" href="../css/ui-lightness/jquery-ui-1.8.2.custom.css" />

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


<!--GOOGLE PAGE-TRACK CODE-->
<script type="text/javascript">

  var _gaq = _gaq || [];
  _gaq.push(['_setAccount', 'UA-33247984-1']);
  _gaq.push(['_trackPageview']);

  (function() {
    var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
    ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
    var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
  })();

</script>
<!--END OF GOOGLE PAGE-TRACK CODE-->



<!-- Start of StatCounter Code for Dreamweaver -->
<script type="text/javascript">
var sc_project=9060187; 
var sc_invisible=1; 
var sc_security="8717740f"; 
var scJsHost = (("https:" == document.location.protocol) ?
"https://secure." : "http://www.");
document.write("<sc"+"ript type='text/javascript' src='" +
scJsHost+
"statcounter.com/counter/counter.js'></"+"script>");
</script>
<noscript><div class="statcounter"><a title="free hit
counter" href="http://statcounter.com/" target="_blank"><img
class="statcounter"
src="http://c.statcounter.com/9060187/0/8717740f/1/"
alt="free hit counter"></a></div></noscript>
<!-- End of StatCounter Code for Dreamweaver -->







</head>

<body>
<!--BODY HOLDER-->
<div id="body_hold">
			<!--HEADER-->
                 <div id="header">
                <div id="subheader">
                <p>&nbsp;</p>
                <p>&nbsp;</p>
                	<div id="searchhold">
                <form name="form1" action="findbook2.php">
                <table>
               <tr>
               <td>
                <select name="catalogue" id="select_box"><option selected="selected">Keyword</option><option>Title</option><option>Author</option><option>Subject</option></select>
               <!-- <input type="text" name="catalogue" />-->
               </td>
               <td>
                <div id="searchwrapper">
            <input type="text" id="searchbox" name="search_word" placeholder="Search" />
          		</div>
                </td>
                <td>
                <div id="submit_button"><button id="search_button">Search</button></div>
                </td>
                </tr>
                </table>
                 <label>zodml.org</label><input name="search" type="radio" value="1" onclick="chooseOne();" />&nbsp;&nbsp;<label>Catalogue</label><input name="search" type="radio" value="other" onclick="chooseOne();"/>
                
                 </form>
                	</div>
                </div>	
                </div>
		<!--END OF HEADER-->

<!--MENU-->
			<div id="menu_ba">
            	<?php include("menu.php"); ?>
            </div>
<!--END OF MENU-->

<!--CONTENT HOLDER-->
<div id="content_holder">
                		
                        <!--CONTENT LAYER 1-->
                        <div id="aboutus_content_layer1">
                        <span style="color:#EC9F00;">Anthills of the Savannah</span>
    </div>
                        <!--END OF CONTENT LAYER 1-->
                        <!--CONTENT LAYER 2-->
                        <div id="aboutus_content_holder2">
                        <table>
                        <tr><td valign="top">
                        			<div id="aboutus_content_holder3_eachbook">
                                        <div id="each_book">
                                          <?php

						//$id=$_GET['id'];
						
						

						include_once("db.php");
						$id = '90';
						$query="select * from books2 where id='$id'";

						$sql=mysql_query($query);

						$row=mysql_fetch_array($sql);

						?>
                                        <table width="100%" border="0" cellpadding="0" cellspacing="10">

                            <!--DWLayoutTable-->

                            <!--<div id="fb-root"></div>

                            <script src="http://connect.facebook.net/en_US/all.js#appId=245147332191834&amp;xfbml=1"></script>

                            <fb:like href="www.zodmel.org/findbooks.php" send="true" width="650" show_faces="false" action="like" font=""></fb:like> 
-->
                            <!--<tr> 

                              <td width="127" height="21"><code></code></td>

                              <td width="130"><code></code></td>

                              <td width="443"><code></code></td>

                            </tr>-->

                            <tr> 

                              <!--<td width="127" height="28" align="center" valign="middle" class="txtac"><code><strong>&raquo; <a href="findbook2.php" class="Navboxa">Back to Search</a></strong></code></td>

                              

                            <td><code></code></td>

                            <td><code></code></td>-->

                            </tr>

                             <tr> 

                              <td height="61" valign="middle" bgcolor="" ><div style="padding:0px 0px 0px 20px;" class="txtac"><code><img src="../correction/Images/<?php echo $row['coverfront']; ?>" width="100" height="100" /></code></div></td>

                              <td colspan="2" ><code><font face="trebuchet ms" size="3" color="#850000"><strong><?php echo $row['Title']; ?></strong></font><br /><br />

                              <font face="trebuchet ms" size="1" color="#000000">Average Rating</font>          

<?php

$query4="select * from rating where BookId='$id'";

$sql4=mysql_query($query4);

$num=mysql_num_rows($sql4);

if($num>0){

	$rates=0;

while($row3=mysql_fetch_array($sql4)){

	$rates += $row3['Rating'];

}

$avg=$rates/$num;

}

else

$avg=0;

?>                              

<input name="avg" type="radio" class="star" disabled="disabled" <?php if($avg>=0.5 && $avg<1.5) echo "checked=\"checked\""; ?>/>

<input name="avg" type="radio" class="star" disabled="disabled" <?php if($avg>=1.5 && $avg<2.5) echo "checked=\"checked\""; ?>/>

<input name="avg" type="radio" class="star" disabled="disabled" <?php if($avg>=2.5 && $avg<3.5) echo "checked=\"checked\""; ?>/>

<input name="avg" type="radio" class="star" disabled="disabled" <?php if($avg>=3.5 && $avg<4.5) echo "checked=\"checked\""; ?>/>

<input name="avg" type="radio" class="star" disabled="disabled" <?php if($avg>=4.5 && $avg<=5) echo "checked=\"checked\""; ?>/>
                              </code></td></tr>


                              <tr><td colspan="3"><code></code></td></tr>

     



                               <tr><td ><code><font face="trebuchet ms" size="2" color="#000000"><strong>Author:</strong></font></code></td><td colspan="2"style="border-bottom:#AFB3C0 1px solid;"><code><font face="trebuchet ms" size="2" color="#000000"><br />
                               <?php echo $row['FullName']; ?></font><br /><br />
                               </code></td></tr>

                              <tr><td ><code><font face="trebuchet ms" size="2" color="#000000"><strong>Publisher:</strong></font></code></td><td colspan="2" style="border-bottom:#AFB3C0 1px solid"><code><font face="trebuchet ms" size="2" color="#000000"><br />
                              <?php echo $row['Publishers']; ?></font><br /><br />
                              </code></td></tr>

                              <tr><td ><code><font face="trebuchet ms" size="2" color="#000000"><strong>Publication Year:</strong></font></code></td><td colspan="2" style="border-bottom:#AFB3C0 1px solid"><code><font face="trebuchet ms" size="2" color="#000000"><br />
                              <?php echo $row['Year']; ?></font><br /><br />
                              </code></td></tr>

                              <tr><td ><code><font face="trebuchet ms" size="2" color="#000000"><strong>Genre/Subject:</strong></font></code></td><td colspan="2" style="border-bottom:#AFB3C0 1px solid"><code><font face="trebuchet ms" size="2" color="#000000"><br />
                              <?php echo $row['Subject']; ?></font><br /><br />
                              </code></td></tr>

                              <tr><td ><code><font face="trebuchet ms" size="2" color="#000000"><strong>ISBN:</strong></font></code></td><td colspan="2" style="border-bottom:#AFB3C0 1px solid"><code><font face="trebuchet ms" size="2" color="#000000"><br />
                              <?php echo $row['isbn']; ?></font><br /><br />
                              </code></td></tr>

                              <tr><td><code><font face="trebuchet ms" size="2" color="#000000"><strong>No of Pages:</strong></font></code></td><td colspan="2" style="border-bottom:#AFB3C0 1px solid"><code><font face="trebuchet ms" size="2" color="#000000"><br />
                              <?php echo $row['Pagecount']; ?></font><br /><br />
                              </code></td></tr>

                              <tr><td colspan="3"><code></code></td></tr>

                                                       <tr><td><code><font face="trebuchet ms" size="2" color="#000000"><strong>Rate this book:</strong></font></code></td><td colspan="2" style="border-bottom:#AFB3C0 1px solid">
                                                       <input name="star1" type="radio" class="star" value="1"/>

<input name="star1" type="radio" class="star" value="2"/>

<input name="star1" type="radio" class="star" value="3"/>

<input name="star1" type="radio" class="star" value="4"/>

<input name="star1" type="radio" class="star" value="5"/>

»	

<font face="trebuchet ms" size="2" color="#850000"><a id="submitrate" href="#" style="text-decoration:none;">Submit Rating</a></font>

<input type="hidden" value="<?php echo $id; ?>" id="bookidentity" />&nbsp;&nbsp;

&nbsp;&nbsp;&nbsp;<span id="rateresult"></span>

<br />

                                          </td></tr>
                                          <p>&nbsp;</p>

                              <tr><td><font face="trebuchet ms" size="2" color="#000000"><a href="#" id="showcomment">Add Comment</a></font></td><td colspan="2"></td></tr>

                              <tr><td></td>

                              

                              <td colspan="2" valign="top" bgcolor="" class="txtac"><div style="padding:14px 0px 0px 0px; display:none;" id="commentbox"> 

                               
                                <input type="hidden" id="bookid" value="<?php echo $id; ?>"/>

                                  

                                
                                  <h3 align="center">Comment on this book</h3>

                                    <p>&nbsp; &nbsp;Email&nbsp; &nbsp;&nbsp; &nbsp;&nbsp; &nbsp;

                                    <input name="email" type="text" style="width:300px;height:24px" id="email">

                                    <br/> <div style="margin-left:100px;"><span id="emailerror" style="display:none;"><font color="red">**Please Enter a Valid Email**</font></span></div>

                                      

                                    &nbsp; &nbsp; </p>

                                      <p>&nbsp; &nbsp;Name&nbsp; &nbsp;&nbsp; &nbsp;&nbsp; &nbsp;

                                      <input name="name" type="text" style="width:300px;height:24px" id="name">

                                      <br/><div style="margin-left:100px;"><span id="nameerror" style="display:none;"><font color="red">**Please Enter a Name**</font></span></div>

                                      

                                      &nbsp; &nbsp;</p>



                                      

                                    <p>&nbsp; &nbsp;Comment&nbsp; &nbsp;

                                    <textarea name="comment"style="width:300px;height:100px" id="comment"></textarea>

                                    <br/><div style="margin-left:10px;"><span id="commenterror" style="display:none;"><font color="red">Please Type a Comment</font></span> </div>

                                      

                                    &nbsp; &nbsp;</p>

                                    <p>

									  &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;

                                    <input type="button" name="Submit"  id="postbutton" value="Post">                                  

                                                                    
                              </div></td>

                              <td></td>

                            </tr>

							<tr>

                            <td colspan="3">

                            <div id="commentadddiv" style="width:100%;">

                            <div id="loading2" style="display:none;">

                                      <img src="loading.gif" style="margin-left:46%;"/><br />

                                      
                                      <p align="center"><code>Please Wait!!!</code></p>

                              </div>

                            <table id="commentadd" style="width:100%;">

                            

                            </table>

                            </div>

                            </td></tr>

                            <?php

							$query2="select * from bookscomment where BookId='$id' order by Id desc";

							$sql2=mysql_query($query2);

							while($row2=mysql_fetch_array($sql2)){

							?>

                            <tr><td colspan="3" style="border-bottom:#AFB3C0 1px solid;"><code><font face="trebuchet ms" size="3" color="#850000"><strong>Posted By: <?php echo $row2['Name']; ?></strong></font><br />
                              <font face="Verdana, Geneva, sans-serif" size="2"><?php echo $row2['Comment']; ?></font></code></td>

                            

                            </tr>

                            <?php

							}

							?>

						<!--<tr><td>&nbsp;</td><td colspan="2">&nbsp;</td></tr>
                        <tr><td>&nbsp;</td><td colspan="2">&nbsp;</td></tr>
                        <tr><td>&nbsp;</td><td colspan="2">&nbsp;</td></tr>-->
                           

                          </table>
                                        
                                 <p>&nbsp;</p>  
                                  <p>&nbsp;</p>      
                                        
                                        </div>
                         			</div>
                           </td>
                           <td valign="top">         
                             <div id="each_book_others_hold">
                               
                            			<div id="aboutus_shortlinks">
                                        	<div id="aboutus_shortlinks_title_eachbook">Other Books by Chinua Achebe</div>
                                            	<table cellspacing="20">
                                                	<tr>
                                                    <td><img src="images/list.png" width="7" height="10" />&nbsp;<a href="An_image_of_africa.php">&nbsp;An Image of Africa and the Trouble with Nig</a><a href="">eria</a></td>
                                                    </tr>
                                                    <tr>
                                                    <td><img src="images/list.png" width="7" height="10" />&nbsp;&nbsp;<a href="Home_and_exile.php">Home and Exile</a></td>
                                                    </tr>
                                                    <tr>
                                                    <td><img src="images/list.png" width="7" height="10" />&nbsp;&nbsp;<a href="No_longer_at_ease.php">No Longer at Ease</a></td>
                                                    </tr>
                                                    <tr>
                                                    <td><img src="images/list.png" width="7" height="10" />&nbsp;&nbsp;<a href="The_education_of_a_british_protected_child.php">The Education of a british protected child</a></td>
                                                    </tr>
                                                    <tr>
                                                    <td><img src="images/list.png" width="7" height="10" />&nbsp;&nbsp;<a href="Things_fall_apart.php">Things Fall Apart</a></td>
                                                    </tr>
                                                </table>
                                        </div>	
                            
                            	</div>
                          </td>
                          </tr>
                          </table>        
                        </div>		
                       <!--END OF CONTENT LAYER 2-->
          
  </div>
<!--END OF CONTENT HOLDER-->

<!--FOOTER-->
<?php include("footer.php"); ?>
<!--END OF FOOTER-->

</div>
<!--END OF THE BODY HOLDER-->
</body>
</html>