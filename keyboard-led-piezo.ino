
var five = require("johnny-five");
var keypress = require("keypress");
var board = new five.Board();

board.on("ready", function() {
	
  // assign an LED from pin 11
	var led = new five.Led(11);	
  // original brightness accumulator
	var newBrightness = 255;

  // fires on key down from keyboard
  function keypressDown(ch, key) {

    // if a key exists
    if (key) {
      // pressing the up arrow
      if (key.name === "up") {
        // increase brightness by 20
        newBrightness += 20;
      }
      // pressing the down arrow
      if (key.name === "down") {
        // reduce  brightness by 20
       	newBrightness -= 20; 
      }

      // if brightness is less than the minimum, default to minimum
      if (newBrightness <0 ) newBrightness = 0;
      // if brightness is greater than the maximum, default to maximum
      if (newBrightness >255 ) newBrightness = 255;

      // assign new brightness to LED, transition for 250 milliseconds
      led.fade(newBrightness, 250);
    }
  }

  // keyboard accept standard in data
	keypress(process.stdin);
  // event listener
  process.stdin.on("keypress", keypressDown);
  // default brightness of LED
  led.brightness( 255 );

});
This looks like a JavaScript file. Click this bar to format it.No 1