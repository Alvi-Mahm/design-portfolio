#include <MD_Parola.h>
#include <MD_MAX72xx.h>
#include <SPI.h>

#define HARDWARE_TYPE MD_MAX72XX::PAROLA_HW
#define MAX_DEVICES 1  // Single 8x8 matrix

#define DATA_PIN   11
#define CS_PIN     10
#define CLK_PIN    13
#define BUTTON_PIN 2   // Connect button between Pin 2 and GND

MD_Parola myDisplay = MD_Parola(HARDWARE_TYPE, DATA_PIN, CLK_PIN, CS_PIN, MAX_DEVICES);

// \x03 is the built-in Heart symbol in the Parola font library!
const char message[] = "HELLO";

bool isStarted = false; // Tracks if the button has been pressed

void setup() {
  // Configure button with internal pull-up resistor (HIGH when open, LOW when pressed)
  pinMode(BUTTON_PIN, INPUT_PULLUP);

  myDisplay.begin();
  myDisplay.setIntensity(5); // Brightness 0-15

  // Set up smooth scrolling:
  // displayText(text, alignment, speed_ms, pause_ms, effectIn, effectOut)
  myDisplay.displayText(message, PA_CENTER, 80, 0, PA_SCROLL_LEFT, PA_SCROLL_LEFT);
}

void loop() {
  // 1. Wait for button press to start
  if (!isStarted) {
    if (digitalRead(BUTTON_PIN) == LOW) { // Button pressed
      delay(50);                          // Simple debounce delay
      isStarted = true;                   // Lock in started state
    }
    return; // Don't run animation yet
  }

  // 2. Animate the text scrolling left after button press
  if (myDisplay.displayAnimate()) {
    myDisplay.displayReset(); // Loop animation when finished
  }
}
