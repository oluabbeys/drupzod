<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Untitled Document</title>
<link type="text/css" rel="stylesheet" href="css/jquery.autocomplete.css" media="screen" />
<script type="text/javascript" src="js/javascript/jquery.js"></script>
<script type="text/javascript" src="js/javascript/jquery.autocomplete.js"></script>
<script>
<!--

/*
Auto Refresh Page with Time script
By JavaScript Kit (javascriptkit.com)
Over 200+ free scripts here!
*/

//enter refresh time in "minutes:seconds" Minutes should range from 0 to inifinity. Seconds should range from 0 to 59
var limit="0:30"

if (document.images){
var parselimit=limit.split(":")
parselimit=parselimit[0]*60+parselimit[1]*1
}
function beginrefresh(){
if (!document.images)
return
if (parselimit==1)
window.location.reload()
else{ 
parselimit-=1
curmin=Math.floor(parselimit/60)
cursec=parselimit%60
if (curmin!=0)
curtime=curmin+" minutes and "+cursec+" seconds left until page refresh!"
else
curtime=cursec+" seconds left until page refresh!"
window.status=curtime
setTimeout("beginrefresh()",1000)
}
}

window.onload=beginrefresh
//-->
</script>

</head>

<body>
Thank you for using the DLC community.

<form>
<form id="newsletter-signup" action="?action=signup" method="post">
                      <table cellspacing="20">
                      <tr>
                      <td><label>Email</label></td>
                      <td><input type="text" name="email_signup" id="comment_form_input3"  /></td>
                      </tr>
                      <tr>
                      <td><label>Password</label></td>
                      <td><input type="password" name="password_signup" id="comment_form_input3"  /></td>
                      </tr>
                      <tr>
                      <td><label>Confirm Password</label></td>
                      <td><input type="password" name="confpwd_signup" id="comment_form_input3"  /></td>
                      </tr>
                      <tr>
                      <td><label>First name</label></td>
                      <td><input type="text" name="fname_signup" id="comment_form_input3"  /></td>
                      </tr>
                      <tr>
                      <td><label>Last name</label></td>
                      <td><input type="text" name="lname_signup" id="comment_form_input3"  /></td>
                      </tr>
                      <tr>
                      <td><label>Gender</label></td>
                      <td><select id="select_box3" name="gender_signup"><option selected="selected">Select</option><option>Male</option><option>Female</option></select></td>
                      </tr>
                      <tr>
                      <td><label>Name of school</label></td>
                      <td><input type="text" name="nameofschool_signup" id="comment_form_input5" class="ac_input"/></td>
                      </tr>
                      <tr>
                      <td><label>Mobile Number</label></td>
                      <td><input type="text" name="mobnum_signup" id="comment_form_input3"  /></td>
                      </tr>
                      <tr>
                      <td><label>State/City</label></td>
                      <td><input type="text" name="state_signup" id="comment_form_input3"  /></td>
                      </tr>
                      <tr>
                      <td colspan="2" align="center"><input type="submit" name="submit_signup" id="search_button3" value="Sign up" /></td>
                      <td></td>
                      </tr>
                      </table>  
                      </form>

<script type="text/javascript">
  function findValue(li) {
  	if( li == null ) return alert("No match!");

  	// if coming from an AJAX call, let's use the CityId as the value
  	if( !!li.extra ) var sValue = li.extra[0];

  	// otherwise, let's just display the value in the text box
  	else var sValue = li.selectValue;

  	//alert("The value you selected was: " + sValue);
  }

  function selectItem(li) {
    	findValue(li);
  }

  function formatItem(row) {
    	return row[0]; //+ " (" + row[1] + ")";
  }

  function lookupAjax(){
  	var oSuggest = $("#comment_form_input5")[0].autocompleter;
    oSuggest.findValue();
  	return false;
  }
  //function lookupLocal(){
    	//var oSuggest = $("#CityLocal")[0].autocompleter;
    	//oSuggest.findValue();
    	//return false;
  //}
    $("#comment_form_input5").autocomplete(
      "schools.php",  
      {
  			delay:10,
  			minChars:2,
  			matchSubset:1,
  			matchContains:1,
  			cacheLength:10,
  			onItemSelect:selectItem,
  			onFindValue:findValue,
  			formatItem:formatItem,
  			autoFill:true
  		}
    );
  
</script>
</body>
</html>