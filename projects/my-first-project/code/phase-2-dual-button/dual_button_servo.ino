#include <Servo.h>

Servo myServo;

const int buttonLeft  = 2; // Button for counter-clockwise rotation
const int buttonRight = 4; // Button for clockwise rotation
const int servoPin    = 3; // Servo signal pin

void setup() {
  myServo.attach(servoPin);

  // Enable internal pull-up resistors for both buttons
  pinMode(buttonLeft, INPUT_PULLUP);
  pinMode(buttonRight, INPUT_PULLUP);

  // Set default center position

}

void loop() {
  int leftState  = digitalRead(buttonLeft);
  int rightState = digitalRead(buttonRight);

  if (leftState == LOW) {
    myServo.write(0);    // Rotate fully counter-clockwise
  } 
  else if (rightState == LOW) {
    myServo.write(180);  // Rotate fully clockwise
  } 
  else {
    myServo.write(90);   // Return to center when no buttons are pressed
  }
}
