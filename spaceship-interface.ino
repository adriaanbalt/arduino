/*
 Random Brightness for LEDs
 */

const int greenled = 3;         // the pin that the LED is attached to
const int yellowled = 5;        // the pin that the LED is attached to
const int redled = 6;           // the pin that the LED is attached to
const int switchPin = 2;        // the pin that the SWITCH is attached to

// the setup routine runs once when you press reset:
void setup() {
    // declare pin 9 to be an output:
    pinMode(greenled, OUTPUT);
    pinMode(yellowled, OUTPUT);
    pinMode(redled, OUTPUT);
    pinMode(switchPin, INPUT); // still to hook up
}

// use helper functions to 
void loop() {
    // adjust brightness for green led
    brightnessLED( greenled, getRandomInt(0, 255) );
    // adjust brightness for red led
    brightnessLED( redled, getRandomInt(0, 255) );
    // adjust brightness for yellow led
    brightnessLED( yellowled, getRandomInt(0, 255) );
    delay(100);
}

// update a designated LED to a specific brightness
void brightnessLED( int pin, int brightness ){
    analogWrite(pin, brightness);
}

// return the absolute value of a number between a max and min
int getRandomInt( int min, int max) {
    return abs( random( min, max ) );
}