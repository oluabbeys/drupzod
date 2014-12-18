// JavaScript Document

$ (document).ready(function(){
	$("#volunteer_button2").click(function(){
		var valid = '';
		var isr = ' is required.';
		var name2 = $("#i_name2").val();
		var email2 = $("#i_email2").val();
		var school2 = $("#i_school2").val();
		var course2 = $("#i_course2").val();
		var helping2 = $("#ihelp2").val();
		
		//validating	
		if (name2.length<1) {
			valid += '<br />Name'+isr;
		}
		if (!email2.match(/^([a-z0-9._-]+@[a-z0-9._-]+\.[a-z]{2,4}$)/i)) {
			valid += '<br />A valid Email'+isr;
		}
		if (school2.length<1){
			valid += '<br />School'+isr;
		}
		if (course2.length<1){
			valid += '<br />Course'+isr;
		}
		if (helping2.length<1){
			valid += '<br />Help'+isr;
		}
			
		if (valid!='') {
			$("#response2").fadeIn("slow");
			$("#response2").html("Please fill the above form:"+valid);
		}
		
		else {
			//var datastr=$('#formail').serialize();
			var datastr ='email2=' + email2 + '&name2=' + name2 + '&school2=' + school2 + '&course2=' + course2 + '&helping2=' + helping2;
			$("#response2").css("display", "block");
			$("#response2").html("Sending message .... ");
			$("#response2").fadeIn("slow");
			setTimeout("send('"+datastr+"')",2000);
			document.getElementById('formail2').reset();
		}
		return false;
	});
	
	
});

//ajax call
function send(datastr){
	$.ajax({	
		type: "POST",
		url: "volunteer_ajax2.php",
		data: datastr,
		cache: false,
		success: function(html){
		$("#response2").fadeIn("slow");
		$("#response2").html(html);
		setTimeout('$("#response2").fadeOut("slow")',2000);
	}
	});
}

 