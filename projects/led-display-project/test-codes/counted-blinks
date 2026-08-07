/*
 * Project: Counted Blinks
 * Description: Blinks an LED connected to Pin 2 exactly 5 times,
 * pauses for 2 seconds, and then repeats the cycle.
 */

void setup() {
  // Configure digital pin 2 as an output to drive the LED
  pinMode(2, OUTPUT); 
}

void loop() {
  // Loop 5 times (i goes from 0 up to 4)
  for (int i = 0; i < 5; i++) {
    digitalWrite(2, HIGH); // Turn the LED ON
    delay(200);            // Wait 200 milliseconds (0.2 seconds)
    
    digitalWrite(2, LOW);  // Turn the LED OFF
    delay(200);            // Wait 200 milliseconds
  }
  
  // Pause for 2 seconds before repeating the loop
  delay(2000); 
}
