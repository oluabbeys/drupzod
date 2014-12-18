// JavaScript Document

 $(document).ready(function(){
	$("#add_button2").click(function(){
		var valid = '';
		var isr = ' is required.';
		var one = $("#one").val();
		var two = $("#two").val();
		var three = $("#three").val();
		var four = $("#four").val();
		var five = $("#five").val();
		var six = $("#six").val();
	    //var picture1 = $("#add_pix1").val();
       
		
		//validating	
		if (one.length<1) {
			valid += '<br />Name'+isr;
		}
		if (!two.match(/^([a-z0-9._-]+@[a-z0-9._-]+\.[a-z]{2,4}$)/i)) {
			valid += '<br />A valid Email'+isr;
		}
		if (three.length<1){
			valid += '<br />Title for the article'+isr;
		}
		if (four.length<1 ){
			valid += '<br />A category must be selected'+isr;
		}
		if (five.length<1){
			valid += '<br />Content'+isr;
		}
		if (six.length<1){
			valid += '<br />Source of article'+isr
		}
		
			
		if (valid!='') {
			$("#responsepaste").fadeIn("slow");
			$("#responsepaste").html("Please fill the form:"+valid);
		}
		
		else {
			//var datastr=$('#copy').serialize();
			var datastr2 ='one=' + one + '&two=' + two + '&three=' + three + '&four=' + four + '&five=' + five + '&six=' + six; 
			$("#responsepaste").css("display", "block");
			$("#responsepaste").html("Sending message .... ");
			$("#responsepaste").fadeIn("slow");
			setTimeout("send2('"+datastr2+"')",2000);
			document.getElementById('copy').reset();
		}
		return false;
	});
	
	
});

//ajax call
function send2(datastr2){
	$.ajax({	
		type: "POST",
		url: "copy.php",
		data: datastr2,
		cache: false,
		success: function(html){
		$("#responsepaste").fadeIn("slow");
		$("#responsepaste").html(html);
		setTimeout('$("#responsepaste").fadeOut("slow")',5000);
	}
	});
}

 