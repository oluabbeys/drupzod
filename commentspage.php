 <?php
include('connect2.php');

if(isset($_COOKIE['dlcuseridcookie']))
{
$theprofid = $_COOKIE['dlcuseridcookie'];
$whoid = $_COOKIE['dlcuseridcookie'];
$profileid = $_COOKIE['dlcuseridcookie'];
}


//$thepost = $_POST['postid'];
$thepost = $_GET["postid"];
$thelower = $_GET["lower"];
$theupper = $_GET["upper"];
$thepage = $_GET["Page"];
$thepagetotal = $_GET["totalpage"];

/*echo "<script>alert('$thepost')</script>";*/

$sql_in= mysql_query("SELECT dlccomments.serialid,dlccomments.comment,dlccomments.posterid,dlccomments.postertype,dlccomments.postername,dlccomments.commentid, DATE_FORMAT(dlccomments.dateposted, '%d %b %Y   at %r') as thedate from dlccomments where dlccomments.commentid = " . $thepost . " order by dlccomments.serialid asc limit $thelower,$theupper");

$counttotal = mysql_num_rows($sql_in);

while($r=mysql_fetch_array($sql_in))
{
$msg=stripslashes($r['comment']);
$msgid=$r['serialid'];
$postedby=$r['postername'];
$postedbyid=$r['posterid'];
$postedbytype=$r['postertype'];
$dateposted=$r['thedate'];

if ($postedbyid == $profileid)
									{
									$sclose = 'X';
									}
									else
									{
									$sclose = '';
									}
									

?>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1" />
<title>Update and Delete with Slide Effect.....</title>
<link href="../site-CSS.css" rel="stylesheet" type="text/css">

</head>

<body>

<div style="width:465px; border-bottom: #ffffff 1px solid; padding:0 0 0 0;bgColor='#f1f2f4';" class="bar<?php echo $msgid; ?>" onmouseover="style.backgroundColor='#f1f2f4'; style.Color='#000000';" onmouseout="style.backgroundColor='';">

<table width="465" cellpadding="0" class="txt" bgcolor="#f1f2f4">
                                          <!--DWLayoutTable-->
                                          <tr> 
                                            <td width="56" rowspan="5" align="center" valign="top"> 
											<?php
								
$rquery= mysql_query("select * from dlcmember where id = " . $postedbyid);
$rq=mysql_fetch_array($rquery);

$senderpics=$rq['mypics'];



if ($senderpics != ';' && $senderpics != '' && $senderpics != 'null')
{
?>
                                              <?php
																		
																
									$image = "images/" . $postedbyid . "/$senderpics";
									
									
									$max_width = 36;
									if(!$max_width)
									$max_width = 36;
									
									$max_height = 36;
									if(!$max_height)
									$max_height = 36;
									
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
<div style="padding:6px 0px 6px 5px">
<a href="welcome.php?profileid=<?php echo $postedbyid ?>">
<?php
													
									
									echo "<img src='" . $image . "' width='" . $tn_width . "' height='" . $tn_height .  "' style=''   vspace='' border='0'>";
									//echo $msg_id;
									?>
									</a>
									</div>
									
									<?php
									}
									else
									{
									echo "<img src='../images/maleavartar.gif' width='24'>";
									
									}
									?>
								
                                            </td>
                                            <td width="465" height="24" align="left" valign="middle" class="content"><a href="welcome.php?profileid=<?php echo $postedbyid ?>&profiletype=<?php echo $_COOKIE['usertypecookie'] ?>"><?php echo '<b><font color=#0055aa>' . ucwords($postedby) . '</font></b>'?></a> <?php echo ' <font class=txt2 color=#80869b>wrote on</font> ' . "<font color='#737A8C' class='txt2' style='padding: 4px 0 0 0'>" . $dateposted . "</font>"; ?><br> 
                                            </td>
                                            <td width="24" rowspan="5" align="right" valign="top" class="content"><br>
        <span class="delete_button"><strong>&nbsp;&nbsp;<a href="#" id="<?php echo $msgid; ?>" class="delete_msg"><?php echo $sclose ?></a></strong></span></td>
                                          </tr>
                                         
                                          <tr> 
                                            <td height="19" align="left" valign="top"><?php echo $msg; ?></td>
                                          </tr>
										  <tr> 
                                            <td height="6" valign="top"></td>
                                          </tr>
                                          
                                        </table>


</div>
<?php 

}

 ?>
 <div style="width:454px; height:16px; background:#f1f2f4; padding:2px 0px 0px 11px; border-bottom:#ffffff 1px solid;"><?php echo "Page " . $thepage . " of " . $thepagetotal?></div>
 
</body>
</html>

 

