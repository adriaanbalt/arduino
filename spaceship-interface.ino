const int redLed = 5
const int yellowLed = 4
const int greenLed = 3

const int switchPin = 2;

void setup() {
    pinMode(redLed, OUTPUT); 
    pinMode(yellowLed, OUTPUT);
    pinMode(greenLed, OUTPUT);
    pinMode(switchPin, INPUT);
}

void loop() {
  
    int switchState;
    
    switchState = digitalRead( switchPin );

    if (switchState == LOW) {
        digitalWrite(greenLed, HIGH); 
        digitalWrite(yellowLed, LOW); 
        digitalWrite(redLed, LOW); 
    } else {
        digitalWrite(greenLed, LOW);
        digitalWrite(yellowLed, LOW);
        digitalWrite(redLed, HIGH);
        delay(250); 
        digitalWrite(yellowLed. HIGH);
        digitalWrite(redLed, LOW);
        delay(250); 
    }
}