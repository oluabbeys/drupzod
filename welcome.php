<?php
session_start();
ini_set('display_errors','off');
if (!isset($_COOKIE['dlcusernamecookie']) && !isset($_COOKIE['dlcpassword2cookie']))
{
header("Location: community.php");
} 

if ($_COOKIE['dlcuseridcookie'] != $_GET['_zodml'])
{
header("Location: welcome.php?_zodml=" . $_COOKIE['dlcuseridcookie']);
} 

	


$filename = 'images_com/' . $_GET['_zodml']; 

if (file_exists($filename)) 
{ 
  
} 
else 
{ 
   mkdir( 'images/' . $_GET['_zodml'] ); 
   //header("Location: home.php");
} 

if(isset($_GET['_zodml']))
{
$profileid = $_GET['_zodml'];
}


include('connect2.php');

$query = mysql_query("SELECT * FROM dlcmember where id = '$profileid'");

$rows = mysql_fetch_array($query);

$profilename = $rows['firstname'] . ' ' . $rows['lastname'];

$personid = $rows['id'];



$result = mysql_query("select * from dlcupdates order by ms_id desc limit 0,1");

$row = mysql_fetch_array($result);
$ms_id = $row['ms_id'];

$msgcount =  mysql_num_rows($result);

setcookie("dlcmsgcookie1", $ms_id);
setcookie("dlcmsgcookie2", $ms_id);
setcookie("dlccookie", '1');


?>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Zaccheus Onumba Dibiaezue Memorial Libraries|e-library in Nigeria|Library services|Digital Learning Community</title>
<link href="css/styles.css" type="text/css" rel="stylesheet" media="screen" />
<link href="css/menu3.css" type="text/css" rel="stylesheet" media="screen" />
<link href="css/bottom.css" type="text/css" rel="stylesheet" media="screen"/>
<link href="css/comment.css" type="text/css" rel="stylesheet" media="screen"/>
<link href="css/site-CSS.css" rel="stylesheet" type="text/css">
<script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jquery/1.4.2/jquery.min.js"></script>
<script type="text/javascript" src=" https://ajax.googleapis.com/ajax/libs/jquery/1.6/jquery.js"></script>
<script type='text/javascript' src='js/jquery.hoverIntent.minified.js'></script>
<script type='text/javascript' src='js/jquery.dcmegamenu.1.2.js'></script>
<!--<script type="text/javascript" src="js/pack.js"></script>-->
<script type="text/javascript" src="js/search.js"></script>
<script type="text/javascript">
$(document).ready(function($){
	$('#mega-menu-tut').dcMegaMenu({
		rowItems: '3',
		speed: 'fast'
	});  
});
</script>
<!-- Piwik -->
<script type="text/javascript">
var pkBaseURL = (("https:" == document.location.protocol) ? "https://zodml.org/piwik/" : "http://zodml.org/piwik/");
document.write(unescape("%3Cscript src='" + pkBaseURL + "piwik.js' type='text/javascript'%3E%3C/script%3E"));
</script><script type="text/javascript">
try {
var piwikTracker = Piwik.getTracker(pkBaseURL + "piwik.php", 1);
piwikTracker.trackPageView();
piwikTracker.enableLinkTracking();
} catch( err ) {}
</script><noscript><p><img src="http://zodml.org/piwik/piwik.php?idsite=1" style="border:0" alt="" /></p></noscript>
<!-- End Piwik Tracking Code -->
<script type="text/javascript">
$(function(){
	$("input:radio[name='search']").click(function(){	
		var criteria=$("input:radio[name='search']:checked").val();
		if(criteria=="Other")
		$("#select_box").enable();
	});
});

</script>

<script type="text/javascript" src="jquery-1.3.1.min.js"></script>
<script type="text/javascript" src="jquery.history.js"></script>

	<script type="text/javascript" src="tw-sack.js"></script>

    <script type="text/javascript">	

        var enableCache = false;
        var jsCache = new Array();
        var AjaxObjects = new Array();

        function ShowContent(divId,ajaxIndex,url)
        {
	        document.getElementById(divId).innerHTML = AjaxObjects[ajaxIndex].response;
	        if(enableCache){
		        jsCache[url] = 	AjaxObjects[ajaxIndex].response;
	        }
	        AjaxObjects[ajaxIndex] = false;
        }

        function Ajax(divId,url)
        {
	        if(enableCache && jsCache[url]){
		        document.getElementById(divId).innerHTML = jsCache[url];
		        return;
	        }	
	        var ajaxIndex = AjaxObjects.length;
	        document.getElementById(divId).innerHTML = '<img src=../images/movewait.gif width=16 height=16 hspace=10 vspace=10 />';
	        AjaxObjects[ajaxIndex] = new sack();
	        AjaxObjects[ajaxIndex].requestFile = url;
	        AjaxObjects[ajaxIndex].onCompletion = function(){ ShowContent(divId,ajaxIndex,url); };
	        AjaxObjects[ajaxIndex].runAJAX();
        }
    
    </script>



  
<script type="text/javascript">

function IsValid()
{
var str=document.getElementById('contenta').value
len= 60
for(i=1; i<len; i++)
{
if (str.charAt(i)==" ")
	{return true}
}
alert("Please you cannot post on the wall without a space in your content. It appears to be spam")
return false
}

$(function() {

$(".comment_button").click(function() 
{


var element = $(this);
   
    var boxval = $("#contenta").val();
	var boxval2 = $("#hideid").val();
	var boxval3 = $("#hidename").val();
	
    var dataString = 'content='+ boxval + '&theid='+ boxval2 + '&thename='+ boxval3  ;
	
	if(boxval=='')
	{
	alert("Please Enter Post");
	
	}
	else
	{
	
	if(!IsValid())
{
return false
}
	
	//$("#staynow").height() - 30;
	$("#staynow").slideUp();
	//$("#leavenow").height() + 30;
	$("#leavenow").slideDown();
		
	$("#flash").show();
	$("#flash").fadeIn(400);//.html('<img src="ajax-loader.gif" align="absmiddle">&nbsp;<span class="loading">Loading Update...</span>');
$.ajax({
		type: "POST",
  url: "update_data.php",
   data: dataString,
  cache: false,
  success: function(html){

  $("ol#update").prepend(html);
  $("ol#update li:first").slideDown("slow");
   document.getElementById('contenta').value='';
       
  $("#flash").hide();
  
  //$("#staynow").height() + 30;
	$("#staynow").slideDown();
	//$("#leavenow").height() - 30;
	$("#leavenow").slideUp();
	
  }
 });
}
return false;
	});


$('.delete_update').live("click",function() 
{
var ID = $(this).attr("id");
 var dataString = 'msg_id='+ ID;
 
if(confirm("Are you sure you want to delete this update? There is NO undo!"))
{

$.ajax({
type: "POST",
 url: "delete_data.php",
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
	alert("Please Enter Comment");
	
	}
	else
	{
	
	//$("#staynow").height() - 30;
	$("#staynow2").slideUp();
	//$("#leavenow").height() + 30;
	$("#leavenow2").slideDown();
	
$.ajax({
		type: "POST",
  url: "insertajax.php",
   data: dataString,
  cache: false,
  success: function(html){
 
   document.getElementById('comment'+Id).value='';
   
$("#loadplace"+Id).append(html);
$("#comments"+Id).height() + 40;
$('#commentcountid'+Id).load('countmessages.php?postid='+Id);
 
	
	//$("#staynow").height() - 30;
	$("#staynow2").slideDown();
	//$("#leavenow").height() + 30;
	$("#leavenow2").slideUp();
	
  }
 });
}
return false;
	});


$('.delete_msg').live("click",function() 
{
var ID = $(this).attr("id");
 var dataString = 'msgid='+ ID;
 
if(confirm("Are you sure you want to delete this comment? There is NO undo!"))
{

$.ajax({
type: "POST",
 url: "delete_comment.php",
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
<!--I dont need these scripts-->
<script type="text/javascript">

$(function() {

$(".post_button3").click(function() 
{


var element = $(this);
var ID = element.attr("id");

var dataString = 'theid=' + ID;

//var boxval = $("#comment"+Id).val();
//var dataString = 'content='+ boxval + '&theid=' + Id;

   
   // var boxval = $("#comment").val();
	
	
    //var dataString = 'content='+ boxval;
	if(confirm("Are you sure you want to Stay with this Business?"))
{

		
$.ajax({
		type: "POST",
  url: "staynow.php",
   data: dataString,
  cache: false,
  success: function(html){
  $("#staynow").height() - 30;
	$("#staynow").slideUp();
	$("#leavenow").height() + 30;
	$("#leavenow").slideDown();
	
  }
 });
}
return false;
	});

$(".post_button2").click(function() 
{


var element = $(this);
var ID = element.attr("id");

var dataString = 'theid=' + ID;

//var boxval = $("#comment"+Id).val();
//var dataString = 'content='+ boxval + '&theid=' + Id;

   
   // var boxval = $("#comment").val();
	
	
    //var dataString = 'content='+ boxval;
	if(confirm("Are you sure you want to Leave Us. You don't want to receive our updates anymore?"))
{

		
$.ajax({
		type: "POST",
  url: "leavenow.php",
   data: dataString,
  cache: false,
  success: function(html){
  $("#staynow").height() + 30;
	$("#staynow").slideDown();
	$("#leavenow").height() - 30;
	$("#leavenow").slideUp();
	
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
}*/
.comment_box
{
background-color:;  padding-top:3px ;BORDER: #cfd6e0 1px solid;font-size:12px; font-family:verdana;
}

.comment_button{
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
	background:url("../images/delete.png") no-repeat left top;
	width:15px;
	height:15px;
	float:right;
	visibility : hidden;
	cursor : pointer;
}
.delete-hover{
	background:url("../images/delete.png") no-repeat left -30px;
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
	background-image : url("../images/comments.gif");
	background-position : 2px 5px;
	background-repeat : no-repeat;
}
.ajax-loading{
	padding : 0px 16px;
	background-image : url("../images/ajax-loader.gif");
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

.show_face
{
	BACKGROUND-COLOR: #0055aa;
	BORDER-BOTTOM: #ffffff 1px solid;
	BORDER-LEFT: #ffffff 1px solid;
	BORDER-RIGHT: #ffffff 1px solid;
	BORDER-TOP: #ffffff 1px solid;
	COLOR: #ffffff;
	FONT-FAMILY: Tahoma;
	FONT-weight:;
	FONT-SIZE: 14px;
	cursor: hand;
}	
	
</style>

<SCRIPT>

ref = setInterval("newdlcupdates()", 7000)


   function newdlcupdates() 
   {

function getCookie(fname)
{
var i,x,y,ARRcookies=document.cookie.split(";");
for (i=0;i<ARRcookies.length;i++)
{
  x=ARRcookies[i].substr(0,ARRcookies[i].indexOf("="));
  y=ARRcookies[i].substr(ARRcookies[i].indexOf("=")+1);
  x=x.replace(/^\s+|\s+$/g,"");
  if (x==fname)
    {
    return unescape(y);
    }
  }
}


var tst1 = getCookie("dlcmsgcookie1") ;
var tst2 = getCookie("dlcmsgcookie2") ;
var tst4 = getCookie("dlccookie") ;

var tst3 = tst2 - tst1;

//alert("<?php echo 'cookie 1  = ' . $_COOKIE['dlcmsgcookie1'] .'cookie 2  = ' . $_COOKIE['dlcmsgcookie2'] ?>");

if (tst2 > tst1 )
{

$('#updFlashing').html(" New Posts " + "<input type='submit'  value='" + tst3 + "' id='" + tst4 + "' name='submit' class='show_face' style='padding: 2px 4px 2px 4px'/>");

/*var elementa = $(this);
   
   
	$("#flash").show();
	$("#flash").fadeIn(400);
$.ajax({
		
  url: "update_data3.php",

  cache: false,
  success: function(html)
  { 
  $("ol#update").prepend(html);
  $("ol#update li:first").slideDown("slow");
     
  //$("#flash").hide();
  
  document.cookie="dlcmsgcookie1=" + getCookie("dlcmsgcookie2");
	
  }
 });*/





}

}

</script>

<script>

function dlcupdatesFade()
{

$('#flashgordon').fadeOut('slow').load('update_data3.php').fadeIn("fast");
$('#updFlashing').fadeOut('slow').html("<font color='#ffffff'>No New Posts</font>").fadeIn("fast");

}


</script>

<SCRIPT>

reft = setInterval("showUpdatee()", 5000)


   function showUpdatee() 
   {
    
		//$('#hiddenflash').load('update.php');
		
		var elementa = $(this);
   
   
	$("#hiddenflash").show();
	$.ajax({
		
  url: "update.php",

  cache: false,
  success: function(html){
 	
  }
 });



}


</SCRIPT>



<script>

/*function getSum()
{

mydate = new Date()

var hour        = mydate.getHours();
var minute      = mydate.getMinutes();
var second      = mydate.getSeconds();
var monthnumber = mydate.getMonth();
var monthday    = mydate.getDate();
var year        = mydate.getYear();

var thesum = (monthday * monthnumber * year) + hour + minute + second;

document.cookie="thesessid=" + thesum;

//alert(thesum);*/

}

</script>

<script>


$(function() {

$(".show_face").click(function() 
{


var elementa = $(this);
var Id = elementa.attr("id");

var dataString = 'theid=' + Id;
   
   
	$("#flash").show();
	$("#flash").fadeIn(400).html('<img src="ajax-loader.gif" align="absmiddle">&nbsp;<span class="loading">Loading Update...</span>');
$.ajax({
		
  url: "update_data3.php",
  data: dataString,
  cache: false,
  success: function(html){
 
  $("ol#update").prepend(html);
  $("ol#update li:first").slideDown("slow");
     
  $("#flash").hide();
  
  document.cookie="dlcmsgcookie1=" + getCookie("dlcmsgcookie2");
	
  }
 });
}
return false;
	});



</script>

<script>
<!-- 
function LoadOnce() 
{ 
window.location.reload(); 
//alert("reloaded");
} 
//-->
</script>
<script language="JavaScript" src="motionpack.js"></script>

<script>

/*
Submit Once form validation- 
© Dynamic Drive (www.dynamicdrive.com)
For full source code, usage terms, and 100's more DHTML scripts, visit http://dynamicdrive.com
*/

function submitonce(theform){
//if IE 4+ or NS 6+
if (document.all||document.getElementById){
//screen thru every element in the form, and hunt down "submit" and "reset"
for (i=0;i<theform.length;i++){
var tempobj=theform.elements[i]
if(tempobj.type.toLowerCase()=="submit"||tempobj.type.toLowerCase()=="reset")
//disable em
tempobj.disabled=true
}
}
}
</script>  


<script type="text/javascript">
	javascript:window.history.forward(1);
    window.history.forward(1);
    function noBack() { window.history.forward(1); }
	//window.history.forward()
</script>
</head>

<body onload="noBack();" onpageshow="if (event.persisted) noBack();" onunload="">
<!--BODY HOLDER-->
<div id="body_hold">
			<!--HEADER-->
                 <div id="header">
                <div id="subheader">
                <p>&nbsp;</p>
                <p>&nbsp;</p>
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
			<div id="menu_ba2">
            	<?php include("menu.php");?>
            </div>
<!--END OF MENU-->

<!--CONTENT-->
<div id="content_holder">
	<!--COMMENT HOLD-->
	<div id="coment_hold">
    <table>
    	<tr>
        <td valign="top">
    <!--COMMENT HOLD LEFT-->
    	<div id="comment_left">
        	<!--<table cellspacing="0" align="center">
            <tr>
            	 <td width="100" height="100" align="center" valign="top" id="pix_dp">-->
                 <div id="pix_dp_hold">
                 <div id="pix_dp">
							  <?php
						//include_once('connect.php');	
				$query2 = mysql_query("select * from dlcmember where id = " . $profileid);
				$rq = mysql_fetch_array($query2);
				$senderpics = $rq['mypics'];

				if ($senderpics != ';' && $senderpics != '' && $senderpics != 'null')
				{
								?>
                                <?php
												
									$image = "images/" . $profileid . "/$senderpics";
																		
									$max_width = 100;
									if(!$max_width)
									$max_width = 100;
									
									$max_height = 100;
									if(!$max_height)
									$max_height = 100;
									
									$size = GetImageSize($image);
									$width = $size[0];
									$height = $size[1];
									
									$x_ratio = $max_width / $width;
									$y_ratio = $max_height / $height;
									
									//if ( ($width <= $max_width) && ($height <= $max_height) )
									//{
									$tn_width = $max_width;
									$tn_height = ($height/$width) * $max_width;

												
									
									echo "<img src='" . $image . "' width='" . $tn_width . "' height='" . $tn_height .  "' style=''   vspace='' border='0'>";
									
									}
									else
									{
									echo "<a href='upload_image.php?_zodml=$profileid'>Add Your Profile Picture</a>";
									
									}
									?>
                               </div>
                               </div>
							  
							  <!--</td>
                              </tr>
                              </table>-->
                              <div style="width:150px; height:20px; margin-left:0px; padding:5px; font-size:12px; line-height:20px; letter-spacing:2px; font-weight:900; ">
                              <span style="color:#EC9F00;"><?php echo $profilename ?></span>
                              </div>
                              <div style="width:150px; height:20px; margin-left:0px; padding:5px; font-size:11px; ">
	                              <div style="width:23px; height:auto; float:left;"><img src="images/upload.png" width="24" height="24" /></div><div id="links"><a href="upload_image.php?profileid=<?php echo $_GET['_zodml'] ?>">Upload picture</a></div>
                              </div>
                              <div style="width:150px; height:20px; margin-left:0px; padding:5px; font-size:11px; margin-top:5px; ">
                              		 <div style="width:23px; height:auto; float:left;"><img src="images/Create_Syudy_Log.png" width="24" height="24" /></div><div id="links"><a href="create_study_log.php?profileid=<?php echo $_GET['_zodml'] ?>">Create Study Log</a></div>
                              </div>
                              <div style="width:150px; height:20px; margin-left:0px; padding:5px; font-size:11px; margin-top:5px; ">
                              		 <div style="width:23px; height:auto; float:left;"><img src="images/Update_Study_Log.png" width="24" height="24" /></div><div id="links"><a href="view_study_log.php?profileid=<?php echo $_GET['_zodml'] ?>">View Study Log</a></div>
                              </div>
                              <div style="width:150px; height:20px; margin-left:0px; padding:5px; font-size:11px; margin-top:5px; ">
                              <div style="width:23px; height:auto; float:left;"><img src="images/logout.png" width="20" height="22" /></div><div id="links"><a href="logout_process.php?profileid=<?php echo $_GET['_zodml'] ?>" >Sign out</a></div>
                              
              </div>
        </div>
        <!--END OF COMMENT HOLD LEFT-->
        </td>
        <td valign="top">
        <!--COMMENT HOLD RIGHT-->
        <div id="comment_right">
        	<table>
            	<tr> 
                              <td width="635" height="560" align="left" valign="top"> 
                                <div align="center"> 
                                  <table cellpadding="0" cellspacing="0" width="640">
                                    <tr> 
                                      <td> <div align="left" style="width:650px;"> 
                                          <form  method="post" name="form1" action="" onSubmit="submitonce(this)">
                                            <table cellpadding="0" cellspacing="0" width="558" bgcolor="#f1f2f4">
                                              <!--DWLayoutTable-->
                                              <tr align="center" valign="middle"> 
                                                <td height="51" colspan="5" bgcolor="#f1f2f4"> 
                                                  <div style="padding: 8px 0px 3px 0px"> 
                                                    <textarea name="contenta" id="contenta" class="comment_box" onKeyUp="displayunicode(event);"   onkeypress="displayunicode(event);" onFocus="style.backgroundColor='#fdffde';" onBlur="javascript: style.backgroundColor='#ffffff' ; if(this.value.length=='0'){this.cols=87;this.rows=2;}" style="width:540px; height:40px; overflow-y:no;padding:4px 0px 4px 0px" wrap="hard"></textarea>
                                                  </div></td>
                                              </tr>
                                              <tr bgcolor="#f1f2f4"> 
                                                <td width="5" height="26">&nbsp;</td>
                                                <td width="179" valign="top"> 
                                                 <div id="staynow" style="height:40px; width:50px; margin-left:80px;">
												  <input type="submit"  value="Submit Post"  id="v" name="submit" class="comment_button" style="width:100px; height:26px; background-color:#3967A3; -moz-border-radius:0px; box-shadow:0px 0px 0px 0px; position:none;"/ > 
												  </div>
												  <div id="leavenow" style="display:none; height:26px; width:100px;">
												  <input type="submit"  value="Wait..."  id="v" name="submit" class="txtac" style="width:100px; height:26px"/ disabled> 
												  </div>
                                                  <input name="hideid" type="hidden" id="hideid" value="<?php echo $profileid ?>" /> 
                                                  <input name="hidename" type="hidden" id="hidename" value="<?php echo $profilename ?>" /> 
                                                </td>
                                                <td width="208" align="right" valign="middle" class="txtac"><div id="updFlashing" style="padding:0px 7px 0px 0px"></div></td>
                                                <td width="139" align="right" valign="middle" class="txtac">&nbsp;&nbsp;&nbsp;<font color="#000000">Post 
                                                  on Wall</font></td>
                                                <td width="16">&nbsp;</td>
                                              </tr>
                                              <tr bgcolor="#f1f2f4"> 
                                                <td height="10" valign="top"></td>
                                                <td valign="top"></td>
                                                <td valign="top"></td>
                                                <td valign="top"></td>
                                                <td valign="top"></td>
                                              </tr>
                                            </table>
                                          </form>
                                        </div>
                                        <div id="hiddenflash"></div>
                                        <div style="height:7px"></div>
                                        <div style="width:558px" id="flash" align="left"></div>
                                        <ol id="update" class="timeline">
                                        </ol>
                                        <div id="old_dlcupdates"> </div>
                                        <div style="width:650px" id="flashgordon" align="left"> 
                                          <?php
											
//if(isset($_POST['content']))
//{
//$content=$_POST['content'];

//$myid = $_GET['profileid'];

//$query= mysql_query("select c.ms_id, c.message, c.postedby, c.postedbyid, c.postedto, c.postedtoid, DATE_FORMAT(c.dateposted, '%b %d %Y - %r') as thedate, d.serialid, d.mypics from dlcupdates c inner join members d on c.postedbyid = d.serialid where ! exists (select b.updateid, b.memberid from deleteddlcupdates b  where c.ms_id = b.updateid and " . $_COOKIE['useridcookie'] . " = b.memberid) and exists (select e.myownid,e.friendid from myfriends e where e.myownid = '$theprofid' or e.friendid =  '$theprofid') order by c.dateposted desc limit 0,50");

										$query = mysql_query("select dlcupdates.*, DATE_FORMAT(dateposted, '%b %d %Y - %r') as thedate from dlcupdates order by dateposted desc limit 0,50");

//$query= mysql_query("select * from dlcupdates order by dateposted desc");

//$r=mysql_fetch_array($sql_in);
//$result = mysql_query($query);
										$count =  mysql_num_rows($query);

//echo $count;

										while($r = mysql_fetch_array($query))
										{
										$msg = stripslashes($r['message']);
										$msg_id = $r['ms_id'];
										$postedby = $r['postedby'];
										$postedbyid = $r['postedbyid'];
										$postedto = $r['postedto'];
										$postedtoid = $r['postedtoid'];
										$postedbytype = $r['postedbytype'];
										$dateposted = $r['thedate'];


//}
 //echo $_COOKIE['mypiccookie'] . "  Folder is  " . $postedbyid
 
 
									if ($postedbyid == $whoid)
									{
									$sclose = 'X';
									}
									else
									{
									$sclose = '';
									}
								
									

?>
                                          <div style="width:558px; border-bottom: #e0e3e9 1px solid" class="bar<?php echo $msg_id; ?>" onMouseOver="" onMouseOut="style.backgroundColor='';"> 
                                            <table width="558" cellpadding="0" class="txt">
                                              <!--DWLayoutTable-->
                                              <tr> 
                                                <td height="8" colspan="3"></td>
                                              </tr>
                                              <tr> 
                                                <td width="60" rowspan="6" valign="top"> 
                                                  <?php
							
									$rquery= mysql_query("select * from dlcmember where id = " . $postedbyid);
									$rq=mysql_fetch_array($rquery);
									$senderpics=$rq['mypics'];



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
                                                  <div style="padding:6px 0px 10px 0px"> 
                                                    <!--<a href="profile.php?profileid=<?php //echo $postedbyid ?>"> -->
                                                    <?php				
									
									echo "<img src='" . $image . "' width='" . $tn_width . "' height='" . $tn_height .  "' style=''   vspace='' border='0'>";
									
									}
									else
									{
									echo "<img src='images/maleavartar.gif'>";
									
									}
									?>
                                                    </a> </div></td>
                                                <td width="460" height="24" align="left" valign="middle" class="content"> 
                                                  <?php
											
											$thepostedtoname = $r['postedto'];
											$thepointer = "posted";
											$thepointer2 = "<font class='txt' color='#0055aa'><b>'s</b></font> wall";
											
											?>
                                                  <?php echo '<b><font color=#0055aa>'. ucwords($postedby) . '</font></b>'; ?><?php echo " <font class='txt2' color='#737A8C'>" . $thepointer . "</font> " ?><br> 
                                                </td>
                                                <td width="24" rowspan="6" align="right" valign="top" class="content"><br> 
                                                  <span class="delete_button">&nbsp;&nbsp;<a href="javascript:;" id="<?php echo $msg_id; ?>" class="delete_update"><?php echo $sclose ?></a></span> 
                                                </td>
                                              </tr>
                                              <tr> 
                                                <td height="19" align="left" valign="top"><?php echo $msg; ?></td>
                                              </tr>
                                              <tr> 
                                                <td height="27" valign="middle"><div style="height:16px;"> 
                                                    <table width="100%">
                                                      <tr> 
                                                        <td align="left" valign="top"> 
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
											
											echo "<font color='#737A8C' class='txt2' style='padding: 4px 0px 0px 0px'>Posted :  $r[thedate]</font>"
											
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
											
											if ($resnum > 2)
											{
											$dispit = 'display:block';
											}

											 ?>
                                                        </td>
                                                        <td width="150" align="right" valign="top"> 
                                                          <font color='#0055aa' class='txt2' style='padding: 4px 0px 0px 0px'> 
                                                          &nbsp;&nbsp;&nbsp;&nbsp;<a href="javascript:;" onMouseDown="slidedown('comments<?php echo $msg_id; ?>');"  onClick="javascript: if(<?php echo $resnum; ?> > 0) { Ajax('loadplaces<?php echo $msg_id; ?>','allmessages.php?postid=<?php echo $msg_id; ?>');Ajax('minimizeid<?php echo $msg_id; ?>','minimizemessages.php?postid=<?php echo $msg_id; ?>');}" class="Navbox7f"><?php echo $commentdisp ?></a></font> 
                                                        </td>
                                                      </tr>
                                                    </table>
                                                  </div></td>
                                              </tr>
                                              <td style="border-bottom: #ffffff 6px solid">	
                                                <?php 
								
								$sqlins= mysql_query("SELECT dlccomments.serialid,dlccomments.comment,dlccomments.posterid,dlccomments.postertype,dlccomments.postername,dlccomments.commentid, DATE_FORMAT(dlccomments.dateposted, '%d %b %Y   at %r') as thedate, dlcupdates.ms_id as dlcupdatesno from dlccomments inner join dlcupdates on dlccomments.commentid = dlcupdates.ms_id where dlccomments.commentid = " . $msg_id . " order by dlccomments.serialid asc limit 0,1");
								

$resnums = mysql_num_rows($sqlins);

								if ($resnums <= 0)
								{
								$butdisp = 'display:none';
								}
								else
								{
								$butdisp = '';
								}
								
								$row=mysql_fetch_array($sqlins);
								$msg=trim(stripslashes($row['comment']));
								$msgid=$row['serialid'];
								$postedby=$row['postername'];
								$postedbyid=$row['posterid'];
								$postertype=$row['postertype'];
								$dateposted=$row['thedate'];
								$commentid=$row['commentid'];



									if ($postedbyid == $whoid)
									{
									$sclose = 'X';
									}
									else
									{
									$sclose = '';
									}								
									

									
								?>
                                                <div id="loadplaces<?php echo $msg_id; ?>" align="left"> 
                                                  <?php if ($resnums > 0)
									{ ?>
                                                  <table width="100%" cellpadding="0" class="txt" bgcolor="#f1f2f4" style="border-top: #ffffff 1px solid">
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
                                                          <a href="welcome.php?_zodml=<?php echo $postedbyid ?>&profiletype=<?php echo $postedbytype ?>"> 
                                                          <?php
													
									
									echo "<img src='" . $image . "' width='" . $tn_width . "' height='" . $tn_height .  "' style=''   vspace='' border='0'>";
									//echo $msg_id;
									}
									else
									{
									echo "<img src='images/maleavartar.gif' width='24'>";
									
									}
									?>
                                                          </a> </div></td>
                                                      <td width="402" height="24" align="left" valign="middle" class="content"><a href="welcome.php?_zodml=<?php echo $postedbyid ?>&profiletype=<?php echo $postedbytype ?>"><?php echo '<b><font color=#0055aa>'. ucwords($postedby) . '</font></b>'?></a> 
                                                        <?php echo ' <font class=txt2 color=#80869b>wrote on</font> ' . "<font color='#737A8C' class='txt2' style='padding: 4px 0 0 0'>" . $dateposted . "</font>"; ?><br> 
                                                      </td>
                                                      <td width="24" rowspan="5" align="right" valign="top" class="content"><br> 
                                                        <span class="delete_button">&nbsp;&nbsp;<a href="javascript:;" id="<?php echo $msgid; ?>" class="delete_msg"><strong><?php echo $sclose ?></strong></a></span></td>
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
                                                <div style="width:400;"> 
                                                  <div id="minimizeid<?php echo $msg_id; ?>" style="background.color:#f1f2f4; padding:0px 0px 0px 0px;"></div>
                                                  <div id="navid" style="background.color:#f1f2f4; padding:0px 0px 0px 14px"></div>
                                                </div>
                                                <?php 
								if (!isset($_COOKIE['useridcookie']) && !isset($_COOKIE['bizuseridcookie']))
								{
								$disp = 'disabled';
								$disptext = 'You cannot post a comment. Please Login';
								}
								else
								{
								$disp = '';
								$disptext = '';
								}
								
								 ?>
                                                <div id="comments<?php echo $msg_id; ?>" style="<?php echo $butdisp ?>;overflow:hidden; height:60px;"> 
                                                  <div class="fb-comment-holder"> 
                                                    <div id="comment-holder"> 
                                                      <form  method="post" name="form" action="">
                                                        <table width="100%" bgcolor="#f1f2f4">
                                                          <tr> 
                                                            <td height="40" align="left"><textarea name="textcontent" id="comment<?php echo $msg_id; ?>" style="width:397px;height:24px"></textarea></td>
                                                            <td valign="top">
															 <div id="staynow2" style="height:40px; width:40px; margin-left:15px; margin-bottom:10px;">
												  <input type="submit" name="submit" class="post_button" id="<?php echo $msg_id; ?>" value="&nbsp;Post&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;" style="width:40px;height:30px; box-shadow:0px 0px 0px 0px; -moz-border-radius:0px;  background-color:#3967A3; margin-top:10px;">
												  </div>
												  <div id="leavenow2" style="display:none; height:26px; width:40px;">
												  <input type="submit"  value="Wait..."  id="v" name="submit" class="smalltxt5" style="width:40px; height:24px"/ disabled> 
												  </div>
															</td>
                                                            <td><input type="hidden" name="uid" id="uid" value="1"/> 
                                                            </td>
                                                          </tr>
                                                        </table>
                                                      </form>
                                                    </div>
                                                  </div>
                                                </div></td>
                                              </tr>
                                            </table>
                                          </div>
                                          <?php } ?>
                                        </div></td>
                                    </tr>
                                  </table>
                                </div>
                                <script type="text/javascript">
$(function() {


$(".delbutton").click(function(){

//Save the link in a variable called element
var element = $(this);

//Find the id of the link that was clicked
var del_id = element.attr("id");

//Built a url to send
var info = 'id=' + del_id;
 if(confirm("Sure you want to delete this update? There is NO undo!"))
		  {

 $.ajax({
   type: "GET",
   url: "delete.php",
   data: info,
   success: function(){
   
   }
 });
         $(this).parents(".record").animate({ backgroundColor: "#fbc7c7" }, "fast")
		.animate({ opacity: "hide" }, "slow");

 }

return false;

});

});
</script></td>
                              <td width="5">&nbsp;</td>
                            </tr>
            
            
            </table>	
                
        </div>
        <!--END OF COMMENT HOLD RIGHT-->
    	</td>
        </tr>
        </table>
    </div>
    <!--END OF COMMENT HOLD-->
</div>
<!--END OF CONTENT-->

<!--FOOTER-->
<div id="footer22">

<table align="center">
<tr>
<td align="center">Privacy Policy | Disclaimer | Careers | Contact Us</td>
</tr>
<tr>
<td align="center">Copyright© ZODML 2012 All Rights Reserved</td>
</tr>
</table>
</div>
<!--END OF FOOTER-->

</div>
<!--END OF THE BODY HOLDER-->