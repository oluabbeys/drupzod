// JavaScript Document

 $(document).ready(function(){
	$("#join_button").click(function(){
		var valid = '';
		var isr = ' is required.';
		var name = $("#name").val();
		var lname = $("#lname").val();
		var dob = $("#dob").val();
		var address1 = $("#address1").val();
		var occupation = $ ("#occupation").val();
		var address2 = $("#address2").val();
		var mail = $("#mail").val();
		var mob = $("#mob").val();
		var apply = $("#apply").val();
		var hear = $("#hear").val();
		var nameofp = $("#nameofp").val();
		var addressofp = $("#addressofp").val();
		var mailofp = $("#mailofp").val();
		var mobofp = $("#mobofp").val();
		var accept = $("#accept").val($('input:checkbox:checked').map(function() { return $(this).val(); }).get().join(','));
		
		
		//validating	
		if (name.length<1) {
			valid += '<br />First Name'+isr;
		}
		if (lname.length<1){
			valid += '<br />Last Name'+isr;
		}
		if (dob.length<1) {
			valid += '<br />Date of birth'+isr;
		}
		if (address1.length<1) {
			valid += '<br />Home Address'+isr;
		}
		if(occupation.length<1) {
			valid += '<br/> Occupation'+isr;
		}
		if (address2.length<1) {
			valid += '<br />Postal Address'+isr;
		}
		if (!mail.match(/^([a-z0-9._-]+@[a-z0-9._-]+\.[a-z]{2,4}$)/i)) {
			valid += '<br />A valid Email'+isr;
		}
		if (mob.length<1) {
			valid += '<br />Mobile Phone'+isr;
		}
		if (apply.length<1){
			valid += '<br />Select Membership'+isr;
		}
		if (hear.lenght<1) {
			valid += '<br/> Select How'+isr;
		}
		if (!accept.attr('checked')){
			valid += '<br />Accepting the Library rules' + isr;
		}
		//if (!isCheckedById("us"))
//			{
//				valid += '<br / >Category'+isr;
//			}
			
		if (valid!='') {
			$("#response").fadeIn("slow");
			$("#response").html("Please fill the above form:"+valid);
		}
		
		else {
			//var datastr=$('#formail').serialize();
			var datastr ='name=' + name + '&lname=' + lname + '&dob=' + dob + '&address1=' + address1 + '&occupation=' + occupation +'&address2=' + address2 + '&mail=' + mail + '&mob=' + mob + '&apply=' + apply + '&hear=' + hear +'&nameofp=' + nameofp + '&addressofp=' + addressofp + '&mailofp=' + mailofp + '&mobofp=' + mobofp + '&accept=' + accept; //+ '&text=' + text + '&category=' + category;
			$("#response").css("display", "block");
			$("#response").html("Sending message .... ");
			$("#response").fadeIn("slow");
			setTimeout("send('"+datastr+"')",2000);
			document.getElementById('formail').reset();
		}
		return false;
	});
	
	//picking the values for the checkbox
	//function isCheckedById(id) 
//    { 
//        var category = $("input[@id="+id+"]:checked").val();
//        if (category == 0) 
//        { 
//            return false; 
//        } 
//        else 
//        { 
//            return true; 
//        } 
//    } 
	
	    //function isCheckedById(id)  {
//			
//          return $('#' + id).is(':checked');
//    } 
});

//ajax call
function send(datastr){
	$.ajax({	
		type: "POST",
		url: "join.php",
		data: datastr,
		cache: false,
		success: function(html){
		$("#response").fadeIn("slow");
		$("#response").html(html);
		setTimeout('$("#response").fadeOut("slow")',2000);
	}
	});
}

 