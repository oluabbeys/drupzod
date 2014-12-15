// JavaScript Document
var messageDelay = 2000;  // How long to display status messages (in milliseconds)
 
// Init the form once the document is ready
$( init );


// Initialize the form

function init() {

  // Hide the form initially.
  // Make submitForm() the form's submit handler.
  // Position the form so it sits in the centre of the browser window.
  $('#contactForm2').hide().submit( submitForm ).addClass( 'positioned' );

  // When the "Send us an email" link is clicked:
  // 1. Fade the content out
  // 2. Display the form
  // 3. Move focus to the first field
  // 4. Prevent the link being followed

  $('a[href="#contactForm2"]').click( function() {
    $('#content2').fadeTo( 'slow', .2 );
    $('#contactForm2').fadeIn( 'slow', function() {
      $('#senderName2').focus();
    } )

    return false;
  } );
  
  // When the "Cancel" button is clicked, close the form
  $('#cancel2').click( function() { 
    $('#contactForm2').fadeOut();
    $('#content2').fadeTo( 'slow', 1 );
  } );  

  // When the "Escape" key is pressed, close the form
  $('#contactForm2').keydown( function( event ) {
    if ( event.which == 27 ) {
      $('#contactForm2').fadeOut();
      $('#content2').fadeTo( 'slow', 1 );
    }
  } );

}


// Submit the form via Ajax

function submitForm() {
  var contactForm = $(this);

  // Are all the fields filled in?

  if ( !$('#senderName2').val() || !$('#senderEmail2').val() || !$('#message2').val() ) {

    // No; display a warning message and return to the form
    $('#incompleteMessage2').fadeIn().delay(messageDelay).fadeOut();
    contactForm.fadeOut().delay(messageDelay).fadeIn();

  } else {

    // Yes; submit the form to the PHP script via Ajax

    $('#sendingMessage2').fadeIn();
    contactForm.fadeOut();

    $.ajax( {
      url: contactForm.attr( 'action' ) + "?ajax=true",
      type: contactForm.attr( 'method' ),
      data: contactForm.serialize(),
      success: submitFinished
    } );
  }

  // Prevent the default form submission occurring
  return false;
}


// Handle the Ajax response

function submitFinished( response ) {
  response = $.trim( response );
  $('#sendingMessage2').fadeOut();

  if ( response == "success" ) {

    // Form submitted successfully:
    // 1. Display the success message
    // 2. Clear the form fields
    // 3. Fade the content back in

    $('#successMessage2').fadeIn().delay(messageDelay).fadeOut();
    $('#senderName2').val( "" );
    $('#senderEmail2').val( "" );
    $('#message2').val( "" );

    $('#content2').delay(messageDelay+80).fadeTo( 'slow', 1 );

  } else {

    // Form submission failed: Display the failure message,
    // then redisplay the form
    $('#failureMessage2').fadeIn().delay(messageDelay).fadeOut();
    $('#contactForm2').delay(messageDelay+80).fadeIn();
  }
}
