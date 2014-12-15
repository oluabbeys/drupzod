<?php

include('connect2.php');

if(isset($_POST['content']))

{

$content=htmlspecialchars(trim(addslashes($_POST['content'])),1);

$theid=$_POST['theid'];

$thename=$_POST['thename'];



if(isset($_COOKIE['dlcuseridcookie']) )

{

$bywho=$_COOKIE['dlcuseridcookie'];

$byname=$_COOKIE['dlcfullnamecookie'];

$usertypecookie = 1;

}



$sessid=$_COOKIE['thesessid'];



$dt1=date('Y-m-d'); 

$dt2=date('Y-m-d H:i:s');



mysql_query("insert into dlcupdates(message,postedby,postedbyid,sessid,postedtoid,postedto,postedbytype) values ('$content','$byname','$bywho','$sessid','$theid','$thename','$usertypecookie')");

$sql_in= mysql_query("SELECT dlcupdates.*, DATE_FORMAT(dlcupdates.dateposted, '%d %b %Y') as thedate from dlcupdates order by ms_id desc");

$r=mysql_fetch_array($sql_in);

$msg=stripslashes($r['message']);

$msg_id=$r['ms_id'];

$postedby=$r['postedby'];

$postedbyid=$r['postedbyid'];

$postedbytype=$r['postedbytype'];

$dateposted=$r['thedate'];



//setcookie("msgcookie1", $msg_id);

//setcookie("msgcookie2", $msg_id);







									if ($postedbyid == $bywho)

									{

									$sclose = 'X';

									}

									else

									{

									$sclose = '';

									}

									



}

else

{



echo "<script>alert('failure');</script>";

}

?>



<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html>

<head>

<meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1" />

<title>Update and Delete with Slide Effect.....</title>

<link href="css/site-CSS.css" rel="stylesheet" type="text/css">



<script type="text/javascript">



$(function() {



$(".post_button").click(function() 

{





var element = $(this);

var Id = element.attr("id");



var boxval = $("#comment"+Id).val();

var dataString = 'content='+ boxval + '&theid=' + Id;



   

   // var boxval = $("#comment").val();

	

	

    //var dataString = 'content='+ boxval;

	

	if(boxval=='')

	{

	alert("Please Enter Some Text");

	

	}

	else

	{

	

$.ajax({

		type: "POST",

  url: "insertajax.php",

   data: dataString,

  cache: false,

  success: function(html){

 

   document.getElementById('comment'+Id).value='';

   

$("#loadplace"+Id).append(html);

$("#comments"+Id).height() + 40;



 

	

  }

 });

}

return false;

	});





$('.delete_msg').live("click",function() 

{

var ID = $(this).attr("id");

 var dataString = 'msgid='+ ID;

 

if(confirm("Sure you want to delete this update? There is NO undo!"))

{



$.ajax({

type: "POST",

 url: "wall/delete_comment.php",

  data: dataString,

 cache: false,

 success: function(html){

 $(".bar"+ID).slideUp('slow', function() {$(this).remove();});

 }

});



}



return false;

});









});





</script>





<style type="text/css">

/*body

{

font-family:Tahoma, Arial, Helvetica, sans-serif;

font-size:11px;

}
*/
.comment_box

{

background-color:;  padding-top:3px ;BORDER: #cfd6e0 1px solid;font-size:12px; font-family:verdana;

}



.comment_button

{



BACKGROUND-COLOR: #3967A3;

	BORDER:none;

	

	COLOR: #ffffff;

	FONT-FAMILY: tahoma;

	FONT-weight: bold;

	FONT-SIZE: 11px;

	cursor: hand;

	overflow:hidden;

	overflow-y: hidden;

	overflow-x: hidden; 

}



.post_button

{



BACKGROUND-COLOR: #3967A3;

	BORDER-BOTTOM: #3967A3 1px solid;

	BORDER-LEFT: #3967A3 1px solid;

	BORDER-RIGHT: #3967A3 1px solid;

	BORDER-TOP: #3967A3 1px solid;

	COLOR: #ffffff;

	FONT-FAMILY: tahoma;

	FONT-weight: bold;

	FONT-SIZE: 11px;

	cursor: hand;

}





a

	{

	text-decoration:none;

	color:#e0e3e9;

	}

	a:hover

	{

	text-decoration:;

	color:#d02b55;

	}

	*{margin:0;padding:0;}

	

	

	ol.timeline

	{

	list-style:none;

	}

	ol.timeline li

	{ 

	display:none;

	position:relative;

	padding:0px; 

	background-color:; 

	width:502px;

	border-bottom:1px solid #e0e3e9;

	border-top:1px solid #ffffff;

	}

	ol.timeline li:first-child

	{

	position:relative;

	padding:0px;

	border-bottom:1px solid #e0e3e9;

	border-top:1px solid #ffffff;

	}

	

	.delete_button

	{

	float:right; 

	margin-right:5px; 

	width:20px; 

	height:20px;

	

	}

	

	.feed_link

	{

	font-style:font-family:Georgia; font-size:11px;padding:10px; float:left; width:350px;

	}

	.feed_a

	{

	color:#0000CC; text-decoration:underline;

	}

	.delete_update

	{

	font-weight:bold;

	

	}

	

	

	

	.fb-comment-holder{

	width :;

	margin-left:0px;

}

.fb-maincomment-holder{

	width : 550px;

	margin-left:0px;

}

#comment-holder{

    background-color:

    border-bottom:;

    margin-top: 1px;

    padding: 0px 0px;

	overflow : auto;

	overflow:hidden;

	overflow-y: hidden;

	overflow-x: hidden; 

	height:auto; 

	min-height:30px;

}



#maincomment-holder{

    background-color:

    border-bottom:;

    margin-top: 2px;

    padding: 0px 0px;

	overflow : auto;

	overflow:hidden;

	overflow-y: hidden;

	overflow-x: hidden; 

	height:auto; 

	min-height:30px;

}



.reply-holder{

    background-color: #EDEFF4;

    border-bottom: 1px solid #E5EAF1;

    margin-top: 2px;

    padding: 5px 0px 5px 5px;

	display:none;

	overflow:auto;

}

.delete{

	background:url("images/delete.png") no-repeat left top;

	width:15px;

	height:15px;

	float:right;

	visibility : hidden;

	cursor : pointer;

}

.delete-hover{

	background:url("images/delete.png") no-repeat left -30px;

	width:15px;

	height:15px;

	float:right;

	cursor : pointer;

}

.comment-text{

    background-color: #EDEFF4;

    padding: 0px 4px;

    text-align:left;

    color: #333333;

    direction: ltr;

    font-family: "lucida grande",tahoma,verdana,arial,sans-serif;

    font-size: 11px;

    text-align: left;

    float:right;

    width:88%;

    /*    Hack for breking long lines   */

    white-space: -moz-pre-wrap; /* Mozilla, since 1999 */

    white-space: -pre-wrap; /* Opera 4-6 */

    white-space: -o-pre-wrap; /* Opera 7 */

    word-wrap : break-word; /* Internet Explorer 5.5+ */

}

#show-more{

	background-color: #EDEFF4;

	padding : 5px 25px;

	background-image : url("images/comments.gif");

	background-position : 2px 5px;

	background-repeat : no-repeat;

}

.ajax-loading{

	padding : 0px 16px;

	background-image : url("images/ajax-loader.gif");

	background-repeat : no-repeat;

	visibility : hidden;

}

.comment-text #text{

	width:95%;

}

#text a{

	color: #3B5998;

	font-weight : bold;

	text-decoration : none;

}

#text a:hover{

	text-decoration : underline;

}

.ago{

	width:88%;

	clear:left;

	color: #808080;

    font-family: "lucida grande",tahoma,verdana,arial,sans-serif;

    font-size: 11px;

	display : block;



}





#maincomment-holder textarea{

	height: 26px;

	width : 100%;

	border : 1px solid #BDC7D8;

    font-family: "lucida grande",tahoma,verdana,arial,sans-serif;

    font-size: 12px;

    padding: 3px;

	overflow:hidden;

	overflow-y: hidden;

	overflow-x: hidden; 

}

#maincomment-holder input[type=text]{

	border : 1px solid #BDC7D8;

	font-family: "lucida grande",tahoma,verdana,arial,sans-serif;

	font-size: 12px;

	padding-left : 2px;

	margin-bottom : 4px;

}





#comment-holder textarea{

	height: 26px;

	width : 100%;

	float : right;

	border : 1px solid #BDC7D8;

    font-family: "lucida grande",tahoma,verdana,arial,sans-serif;

    font-size: 12px;

    padding: 3px;

	overflow:hidden;

	overflow-y: hidden;

	overflow-x: hidden; 

}

#comment-holder input[type=text]{

	border : 1px solid #BDC7D8;

	font-family: "lucida grande",tahoma,verdana,arial,sans-serif;

	font-size: 12px;

	padding-left : 2px;

	margin-bottom : 4px;

}

.error{

	background : #FFCCCC;

}

#comment-holder span{

	margin-right:1px;

	margin-left:-2px;

}

#fb-button{

    background-color: #5B74A8;

	border-width : 1px;

    border-color: #1A356E;

    color: white;

    cursor: pointer;

    display: inline-block;

    font-size: 11px;

    font-weight: bold;

    margin: 0;

	height : 20px;

	width : 69px;

    outline: medium none;

    white-space: nowrap;

}

#submit-button{

	display : none;

	margin-left : 82%;

	padding-top:7px;

}

.lightText{

	color : #9B9B9B;

}

#link-text{

	font-size: 11px;

	font-family: 'Lucida Grande',Tahoma,Verdana,Arial,sans-serif;

	cursor : pointer;

	color : #3B5998;

}

#link-text:hover{

	text-decoration : underline;

}

	

</style>



</head>



<body>



<div style="width:558px; border-bottom: #e0e3e9 1px solid; padding:0px 0px 0px 0px 0px" class="bar<?php echo $msg_id; ?>" onmouseover="" onmouseout="style.backgroundColor='';">

<table width="558" cellpadding="0" class="txt">

                                          <!--DWLayoutTable-->

                                          <tr> 

                                            <td width="60" rowspan="6" align="left" valign="top"> 

											<?php

								if($postedbytype == 2)

								{			  

											 

$squery= mysql_query("select * from directorycopy where serialid = " . $postedbyid);

$sq=mysql_fetch_array($squery);



$senderpics=$sq['logo'];

}

else

{

$rquery= mysql_query("select * from dlcmember where id = " . $postedbyid);

$rq=mysql_fetch_array($rquery);



$senderpics=$rq['mypics'];

}





if ($senderpics != ';' && $senderpics != '' && $senderpics != 'null')

{

?>

                                              <?php

																		

													

									$image = "images/" . $postedbyid . "/$senderpics";

									

									

									$max_width = 50;

									if(!$max_width)

									$max_width = 50;

									

									$max_height = 50;

									if(!$max_height)

									$max_height = 50;

									

									$size = GetImageSize($image);

									$width = $size[0];

									$height = $size[1];

									

									$x_ratio = $max_width / $width;

									$y_ratio = $max_height / $height;

									

									//if ( ($width <= $max_width) && ($height <= $max_height) )

									//{

									$tn_width = $max_width;

									$tn_height = ($height/$width) * $max_width;

 									?>

									

									 <div style="padding:12px 0px 10px 0px"> 

                                                <a href="<?php echo $golink ?>?_zodml=<?php echo $postedbyid ?>&profiletype=<?php echo $gotype ?>">

									<?php											

									

									echo "<img src='" . $image . "' width='" . $tn_width . "' height='" . $tn_height .  "' style=''   vspace='' border='0'>";

									//echo "<img src='images/news/$row[newspicture]'>";

									}

									else

									{

									echo "<img src='images/maleavartar.gif'>";

									

									}

									?>

                                             </a> </div>

											</td>

                                            <td width="460" height="24" align="left" valign="bottom" class="content">

											<?php

											

											$thepostedtoname = $thename;

											$thepointer = "posted";

											$thepointer2 = "<font class='txt' color='#0055aa'><b>'s</b></font> wall";

											

											?>

											

											<a href="welcome.php?_zodml=<?php echo $bywho ?>&profiletype=<?php echo $gotype ?>"><?php echo '<b><font color=#0055aa>'.$postedby. '</font></b>'; ?></a><?php echo " <font class='txt2' color='#737A8C'>" . $thepointer . "</font> " ?>

                                            </td>

                                            <td width="24" rowspan="6" align="right" valign="top" class="content"><br><span class="delete_button">&nbsp;&nbsp;<a href="#" id="<?php echo $msg_id; ?>" class="delete_update"><?php echo $sclose ?></a></span></td>

                                          </tr>

                                         

                                          <tr> 

                                            <td width="460" height="19" align="left" valign="top">

											<div style="width:460px">

											<?php echo $msg; ?>

											</div>

											</td>

                                          </tr>

                                          <tr> 

                                            <td height="27" valign="middle"><table width="100%"><tr><td align="left">

                                              <?php 

											

											/*$theday = $dateposted,'d';

											$themonth = $dateposted,'m';

											$theyear = $dateposted,'Y';

											$pdate = mktime('','','',$theday,$themonth,$theyear);

											$nowtime = time();

											$difftime = ($nowtime - $pdate) ;

											

											if($difftime < 60)

											{

											$showtime = floor($difftime) . ' seconds ago';

											}

											if($difftime > 59 && $difftime < 3600)

											{

											$showtime = floor($difftime / 60) . ' minutes ago';

											}

											if($difftime > 3599 && $difftime < 86400)

											{

											$showtime = floor($difftime / 3600) . ' hours ago';

											}

											if($difftime > 86399 && $difftime < 604800)

											{

											$showtime = floor($difftime / 86400) . ' day(s) ago';

											}

											if($difftime > 604799 && $difftime < 2592000)

											{

											$showtime = floor($difftime / 604800) . ' month ago';

											}

											if($difftime > 2591999 && $difftime < 31536000)

											{

											$showtime = floor($difftime / 2592000) . ' month(s) ago';

											}

											if($difftime > 31535999 )

											{

											$showtime = floor($difftime / 31536000) . ' year ago';

											}*/

											

											echo "<font color='#737A8C' class='txt2' style='padding: 4px 0 0 0'>Posted :  $r[thedate]</font>"

											

											 ?>

											 

											 <?php

											 $sqlin= mysql_query("SELECT * from dlccomments where commentid = " . $msg_id);

											 $resnum = mysql_num_rows($sqlin);

											 $row=mysql_fetch_array($sqlin);

											 $msgid=$row['serialid'];

											 

											 if ($resnum <= 0)

											{

											$butdisp = 'display:none';

											$commentdisp = 'Post Comment' . "(".$resnum.")";

											}

											else

											{

											$butdisp = 'display:none';

											$commentdisp = 'View All Comments' . "(".$resnum.")" ;

											}



											 ?>

											 </td>

                                                  <td width="150" align="right"> 

                                                    <font color='#0055aa' class='txt2' style='padding: 4px 0 0 0'> 

                                                    &nbsp;&nbsp;&nbsp;&nbsp;<a href="javascript:;" onmousedown="slidedown('comments<?php echo $msg_id; ?>');"  onClick="javascript: if(<?php echo $resnum; ?> > 0) { Ajax('loadplaces<?php echo $msg_id; ?>','allmessages.php?postid=<?php echo $msg_id; ?>');}" class="Navbox7f"><?php echo $commentdisp ?></a></font> 

                                                  </td>

                                                </tr></table></td>

                                          </tr>

										 

                                            <td height="6" style="border-bottom: #ffffff 6px solid">															

											

																<?php 

								

								$sqlin= mysql_query("SELECT dlccomments.serialid,dlccomments.comment,dlccomments.posterid,dlccomments.postertype,dlccomments.postername,dlccomments.commentid, DATE_FORMAT(dlccomments.dateposted, '%d %b %Y   at %r') as thedate from dlccomments where dlccomments.commentid = " . $msg_id . " order by dlccomments.serialid desc limit 0,1");

								



$resnum = mysql_num_rows($sqlin);



								if ($resnum <= 0)

								{

								$butdisp = 'display:none';

								}

								else

								{

								$butdisp = '';

								}

								

$row=mysql_fetch_array($sqlin);

$msg=trim(stripslashes($row['comment']));

$msgid=$row['serialid'];

$postedby=$row['postername'];

$postedbyid=$row['posterid'];

$postertype=$row['postertype'];

$dateposted=$row['thedate'];

$commentid=$row['commentid'];







									if ($postedbyid == $bywho)

									{

									$sclose = 'X';

									}

									else

									{

									$sclose = '';

									}





								?>

																

								<div id="loadplaces<?php echo $msg_id; ?>" class="bar<?php echo $msg_id; ?>" align="left">

								<?php if ($resnum > 0)

									{ ?>

					<table width="100%" cellpadding="0" class="txt" bgcolor="#f1f2f4" style="border-top: #ffffff 1px solid">

                                          <!--DWLayoutTable-->

                                          <tr> 

                                            

              <td width="64" rowspan="5" align="center" valign="top"> 

                <?php

								

$rquery= mysql_query("select * from dlcmember where id = " . $postedbyid);

$rq=mysql_fetch_array($rquery);



$senderpics=$rq['mypics'];







if ($senderpics != ';' || $senderpics != '' || $senderpics != 'null')

{

?>

                <?php

																		

															

									$image = "images/" . $postedbyid . "/$senderpics";

									

									

									$max_width = 40;

									if(!$max_width)

									$max_width = 40;

									

									$max_height = 40;

									if(!$max_height)

									$max_height = 40;

									

									$size = GetImageSize($image);

									$width = $size[0];

									$height = $size[1];

									

									$x_ratio = $max_width / $width;

									$y_ratio = $max_height / $height;

									

									//if ( ($width <= $max_width) && ($height <= $max_height) )

									//{

									$tn_width = $max_width;

									$tn_height = ($height/$width) * $max_width;



													

									

									echo "<img src='" . $image . "' width='" . $tn_width . "' height='" . $tn_height .  "' style='padding:6px 0px 6px 0px'   vspace='6' border='0'>";

									//echo $msg_id;

									}

									else

									{

									echo "<img src='images/maleavartar.gif' width='40'>";

									

									}

									?>

              </td>

                                            <td width="402" height="24" align="left" valign="middle" class="content"><?php echo '<b><font color=#0055aa>'.$postedby. '</font></b>' . ' <font class=txt2 color=#80869b>wrote on</font> ' . "<font color='#737A8C' class='txt2' style='padding: 4px 0 0 0'>" . $dateposted . "</font>"; ?><br> 

                                            </td>

                                            <td width="24" rowspan="5" align="right" valign="top" class="content"><br>

                                                      <span class="delete_button">&nbsp;&nbsp;<a href="#" id="<?php echo $msgid; ?>" class="delete_msg"><strong><?php echo $sclose ?></strong></a></span></td>

                                          </tr>

                                         

                                          <tr> 

                                            <td height="19" align="left" valign="top"><?php echo $msg; ?></td>

                                          </tr>

										  <tr> 

                                            <td height="6" valign="top"></td>

                                          </tr>

                                          

                                        </table>

										<?php } ?>

								</div>

							

								<div  id="loadplace<?php echo $msg_id; ?>" >

											

											</div>



							

								<div id="flashco<?php echo $msg_id; ?>" align="left"></div>

								

								

								<div id="comments<?php echo $msg_id; ?>" style="<?php echo $butdisp ?>;overflow:hidden; height:50px;">

								 <div class="fb-comment-holder">

								<div id="comment-holder">

										<form  method="post" name="form" action="">					       

   <table width="100%" bgcolor="#f1f2f4"><tr>

                                                         

                                                          <td height="40"><textarea name="textcontent" id="comment<?php echo $msg_id; ?>" style="width:397px; height:24px"></textarea></td><td><input type="submit" name="submit" class="post_button" id="<?php echo $msg_id; ?>" value="Post" style="width:40px;height:24px;"></td>

            

            

                

         <td><input type="hidden" name="uid" id="uid" value="1"/>

      </td></tr></table>

       	</form>

												</div>

												</div>

												</div>

											

											</td>

                                          </tr>

                                        </table>

</div>





</body>

</html>