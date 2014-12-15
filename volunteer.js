// JavaScript Document

 $(document).ready(function(){
	$("#volunteer_button").click(function(){
		var valid = '';
		var isr = ' is required.';
		var name = $("#v_name").val();
		var email = $("#v_email").val();
		var skills = $("#vskills").val();
		var roles = $("#vroles").val();
		var help = $("#vhelp").val();
		
		//validating	
		if (name.length<1) {
			valid += '<br />Name'+isr;
		}
		if (!email.match(/^([a-z0-9._-]+@[a-z0-9._-]+\.[a-z]{2,4}$)/i)) {
			valid += '<br />A valid Email'+isr;
		}
		if (skills.length<1){
			valid += '<br />Skills'+isr;
		}
		if (roles.length<1){
			valid += '<br />Roles'+isr;
		}
		if (help.length<1){
			valid += '<br />Help'+isr;
		}
			
		if (valid!='') {
			$("#response").fadeIn("slow");
			$("#response").html("Please fill the above form:"+valid);
		}
		
		else {
			//var datastr=$('#formail').serialize();
			var datastr ='name=' + name + '&email=' + email + '&skills=' + skills + '&roles=' + roles + '&help=' + help;
			$("#response").css("display", "block");
			$("#response").html("Sending message .... ");
			$("#response").fadeIn("slow");
			setTimeout("send('"+datastr+"')",2000);
			document.getElementById('formail').reset();
		}
		return false;
	});
	
	
});

//ajax call
function send(datastr){
	$.ajax({	
		type: "POST",
		url: "volunteer_ajax.php",
		data: datastr,
		cache: false,
		success: function(html){
		$("#response").fadeIn("slow");
		$("#response").html(html);
		setTimeout('$("#response").fadeOut("slow")',2000);
	}
	});
}

 