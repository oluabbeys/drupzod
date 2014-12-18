<?php
ini_set('display_errors', 'off');

function myTruncate($string, $limit, $break=".", $pad=".....") { 
// return with no change if string is shorter than $limit 
if(strlen($string) <= $limit) return $string; 
// is $break present between $limit and the end of the string? 
if(false !== ($breakpoint = strpos($string, $break, $limit))) { if($breakpoint < strlen($string) - 1) { $string = substr($string, 0, $breakpoint) . $pad; } } return $string; }

function getmicrotime()
{
    list($usec, $sec) = explode(" ", microtime());
    return ((float)$usec + (float)$sec);
}
//$connection_string = dirname(__FILE__) . "/connectionstring.php";
//require_once($connection_string);
//mysql_select_db("test") or die ( 'Unable to select database.' );
include("scripts/config.php");
$RESULTS_LIMIT= 20;
if(isset($_GET['search_term']) && isset($_GET['search_button']))
{
      $search_term = $_GET['search_term'];
    if(!isset($first_pos))
    {
        $first_pos = "0";
    }
    $start_search = getmicrotime();
    $sql_query = mysql_query("SELECT * FROM articles WHERE MATCH(title,category) AGAINST('$search_term') ORDER BY 'title', 'category'");
//many mathces (too many matches cause returning of 0 results)
    if($results = mysql_num_rows($sql_query) != 0)
            {
                $sql =  "SELECT * FROM articles WHERE MATCH(title,category) AGAINST('$search_term')  ORDER BY 'title', 'category' LIMIT $first_pos, $RESULTS_LIMIT";
                  $sql_result_query = mysql_query($sql);  
            }
    else
            {
                  $sql = "SELECT * FROM articles WHERE (title LIKE '%".mysql_real_escape_string($search_term)."%' OR category LIKE '%".$search_term."%')  ORDER BY 'title', 'category'";
                  $sql_query = mysql_query($sql);
                  $results = mysql_num_rows($sql_query);
                  $sql_result_query = mysql_query("SELECT * FROM articles WHERE (title LIKE '%".$search_term."%' OR category LIKE '%".$search_term."%')  ORDER BY 'title', 'category' LIMIT $first_pos, $RESULTS_LIMIT ");
            }
    $stop_search = getmicrotime();
    $time_search = ($stop_search - $start_search);
}





?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>ZODML | Discover Nigeria | Search Result for Discover Nigeria Articles</title>
<link href="../css/styles.css" type="text/css" rel="stylesheet" media="screen" />
<link href="../css/menu6.css" type="text/css" rel="stylesheet" media="screen" />
<link href="../css/bottom.css" type="text/css" rel="stylesheet" media="screen"/>
<link href="../css/pagination.css" type="text/css" rel="stylesheet" media="screen" />
<link href="../images/favicon.ico" rel="shortcut icon" />
<!--<script type="text/javascript" src="http://ajax.googleapis.com/ajax/libs/jquery/1.4.2/jquery.min.js"></script>
<script type="text/javascript" src=" https://ajax.googleapis.com/ajax/libs/jquery/1.6/jquery.js"></script>-->
<script type='text/javascript' src="../js/pixreg1.js"></script>
<script type='text/javascript' src="../js/pixreg2.js"></script>
<script type='text/javascript' src='../js/jquery.hoverIntent.minified.js'></script>
<script type='text/javascript' src='../js/jquery.dcmegamenu.1.2.js'></script>
<script type="text/javascript" src="../js/jquery.pikachoose.js"></script>
<script type="text/javascript" src="../js/search.js"></script>
<script type="text/javascript" src="../js/contact.js"></script>
<script type="text/javascript">
$(document).ready(function($){
	$('#mega-menu-tut').dcMegaMenu({
		rowItems: '3',
		speed: 'fast'
	});
});
</script>

<script type="text/javascript">
$(function(){
	$("input:radio[name='search']").click(function(){	
		var criteria=$("input:radio[name='search']:checked").val();
		if(criteria=="Other")
		$("#select_box").enable();
	});
});

</script>
<!--GOOGLE TRACK CODE-->
<script type="text/javascript">

  var _gaq = _gaq || [];
  _gaq.push(['_setAccount', 'UA-33455239-1']);
  _gaq.push(['_trackPageview']);

  (function() {
    var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
    ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
    var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
  })();

</script>
<!--END OF GOOGLE TRACK CODE-->
</head>

<body>
<!--BODY HOLDER-->
<div id="body_hold">
<!--HEADER-->
                <div id="header">
                <div id="subheader">
               <br />
                	<?php include("search_bar.php"); ?>
                </div>	
                </div>
<!--END OF HEADER-->

<!--MENU-->
			<div id="menu_ba">
            	<?php include("menu.php"); ?>
            </div>
<!--END OF MENU-->
<!--CONTENT-->
<div id="content_holder">
<div id="search_holder">

<?PHP
if($results != 0)
{
?>  
   <!-- Displaying of the results -->
<table width="509" border="0" cellspacing="15">
  <tr>
    <td width="407" style="font-size:14px;">Results for <?PHP echo "<i><b><font color=#000000>".$search_term."</font></b></i> "; ?></td>
    </tr>
    <tr>
    <td align="left">Set <b>
      <?PHP echo ($first_pos+1)." - ";
      if(($RESULTS_LIMIT + $first_pos) < $results) echo ($RESULTS_LIMIT + $first_pos);
      else echo $results ; ?>
    </b>
      out of <b><?PHP echo $results; ?></b>
      for(<b><?PHP echo sprintf("%01.2f", $time_search); ?></b>)
      seconds </td>
  </tr>
  <tr>
    <form action="search.php" method="GET">
      <td> <input name="search_term" type="text" value="<?PHP echo $search_term; ?>" size="40" id="search_article_input">
        <input name="search_button" type="submit" value="Search" id="search_button2"> </td>
    </form>
  </tr>
  </table>
  <table cellspacing="15">
  <?PHP  
    while($row = mysql_fetch_array($sql_result_query))
    {
    ?>
      <tr>
        <td style="font-size:14px;"><strong><?PHP echo $row['searchtitle']; ?></strong></td>
        </tr>
        <tr>
        <td style="line-height:20px;"><?php echo myTruncate($row['intro'], 1000); ?></td>
      </tr>
  <?PHP
    }
    ?> 
</table>
<?PHP
}
//if nothing is found then displays a form and a message that there are nor results for the specified term
elseif($sql_query)
{
?>
<table width="508" border="0" cellspacing="10">
    <tr>
        <td width="446">No results for   <?PHP echo "<i><b><font color=#000000>".$search_term."</font></b></i> "; ?></td>
    </tr>
    <tr>
        <form action="" method="GET">
        <td colspan="2">
            <input name="search_term" type="text" value="<?PHP echo $search_term; ?>" id="search_article_input">
            <input name="search_button" type="submit" value="Search" id="search_button2">
        </td>
        </form>
    </tr>
</table>
<?PHP
}
?>
<table width="508" border="0" cellspacing="0" cellpadding="0">
      <?php
      if (!isset($_GET['search_term'])) { ?>
    <tr>
        <form action="" method="GET">
        <td width="356" colspan="2">
            <input name="search_term" type="text" value="<?PHP echo $search_term; ?>" id="search_article_input">
            <input name="search_button" type="submit" value="Search" id="search_button2">
        </td>
        </form>
    </tr>
    <?php
      }
      ?>
  <tr>
    <td align="right">
<?PHP
//displaying the number of pages where the results are sittuated
//if($first_pos > 0)
//{
//  $back=$first_pos-$RESULTS_LIMIT;
//  if($back < 0)
//  {
//    $back = 0;
//  }
//  echo "<a href='search.php?search_term=".stripslashes($search_term)."&first_pos=$back' ></a>";
//}
//if($results>$RESULTS_LIMIT)
//{
//  $sites=intval($results/$RESULTS_LIMIT);
//  if($results%$RESULTS_LIMIT)
//  {
//    $sites++;
//  }
//}
//for ($i=1;$i<=$sites;$i++)
//{
//  $fwd=($i-1)*$RESULTS_LIMIT;
//  if($fwd == $first_pos)
//  {
//      echo "<a href='search.php?search_term=".stripslashes($search_term)."&first_pos=$fwd '><b>$i</b></a> | ";
//  }
//  else
//  {
//      echo "<a href='search.php?search_term=".stripslashes($search_term)."&first_pos=$fwd '>$i</a> | ";  
//  }
//}
//if(isset($first_pos) && $first_pos < $results-$RESULTS_LIMIT)
//{
//  $fwd=$first_pos+$RESULTS_LIMIT;
//  echo "<a href='search.php?search_term=".stripslashes($search_term)."&first_pos=$fwd ' > >></a>";
//  $fwd=$results-$RESULTS_LIMIT;
//}
?>
    </td>
  </tr>
</table>
</div>
</div>
<!--end of body content-->

<!--FOOTER-->
<?php include("footer.php"); ?>
<!--END OF FOOTER-->

</div>
<!--END OF THE BODY HOLDER-->

<form id="contactForm" action="../processForm.php" method="post">

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
</body>
</html>