/*
 Fade

 This example shows how to fade an LED on pin 9
 using the analogWrite() function.

 This example code is in the public domain.
 */

const int greenled = 3;           // the pin that the LED is attached to
const int yellowled = 5;           // the pin that the LED is attached to
const int redled = 6;           // the pin that the LED is attached to
const int switchPin = 2;           // the pin that the LED is attached to
int redBrightness = 0;    // how bright the LED is
int greenBrightness = 0;    // how bright the LED is
int yellowBrightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup() {
  // declare pin 9 to be an output:
    pinMode(greenled, OUTPUT);
    pinMode(yellowled, OUTPUT);
    pinMode(redled, OUTPUT);
    pinMode(switchPin, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
    fadeLED( greenled, getRandomInt(0, 255) );
    fadeLED( redled, getRandomInt(0, 255) );
    fadeLED( yellowled, getRandomInt(0, 255) );
    delay(100);
}

void fadeLED( int pin, int brightness ){
    analogWrite(pin, brightness);
}


int getRandomInt( int min, int max) {
    return abs( random( min, max ) );
}