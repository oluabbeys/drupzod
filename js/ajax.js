 $(document).ready(function(){
	$("#newsletter_button").click(function(){
		var valid = '';
		var isr = ' is required.';
		var name = $("#name").val();
		var mail = $("#mail").val();
		var category = $("#select").length;
		//var subject = $("#subject").val();
		//var text = $("#text").val();
		
		if (name.length<1) {
			valid += '<br />Name'+isr;
		}
		if (!mail.match(/^([a-z0-9._-]+@[a-z0-9._-]+\.[a-z]{2,4}$)/i)) {
			valid += '<br />A valid Email'+isr;
		}
		//if (subject.length<1) {
			//valid += '<br />Subject'+isr;
		//}
		//if (text.length<1) {
			//valid += '<br />Text'+isr;
		//}
		if (!isCheckedById("select"))
			{
				valid += '<br / >Category'+isr;
			}
		if (valid!='') {
			$("#response").fadeIn("slow");
			$("#response").html("Error:"+valid);
		}
		
		else {
			var datastr ='mail=' + mail + '&category=' + category + '&name=' + name; //+ '&text=' + text + '&category=' + category;
			$("#response").css("display", "block");
			$("#response").html("Sending message .... ");
			$("#response").fadeIn("slow");
			setTimeout("send('"+datastr+"')",2000);
			document.getElementById('formail').reset();
		}
		return false;
	});
	
	function isCheckedById(select) 
    { 
        var category = $("input[@id="+select+"]:checked").length; 
        if (category == 0) 
        { 
            return false; 
        } 
        else 
        { 
            return true; 
        } 
    } 
});
function send(datastr){
	$.ajax({	
		type: "POST",
		url: "mail.php",
		data: datastr,
		cache: false,
		success: function(html){
		$("#response").fadeIn("slow");
		$("#response").html(html);
		setTimeout('$("#response").fadeOut("slow")',2000);
	}
	});
}

 