#include <Servo.h>

Servo myServo;

const int buttonPin = 2; // Button connected to Digital Pin 2
const int servoPin  = 3; // Servo signal connected to Digital Pin 3

void setup() {
  myServo.attach(servoPin);
  
  // Enable internal pull-up resistor
  pinMode(buttonPin, INPUT_PULLUP);
  
  // Starting position when released
  myServo.write(90);
}

void loop() {
  int buttonState = digitalRead(buttonPin);
  
  if (buttonState == LOW) {
    myServo.write(180); // Move to 180 degrees when pressed
  } else {
    myServo.write(90);  // Return to 90 degrees when released
  }
}
