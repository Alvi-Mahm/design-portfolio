#include <MD_Parola.h>
#include <MD_MAX72xx.h>
#include <SPI.h>

#define HARDWARE_TYPE MD_MAX72XX::PAROLA_HW
#define MAX_DEVICES 1  // Single 8x8 matrix

#define DATA_PIN     11
#define CS_PIN       10
#define CLK_PIN      13
#define BUTTON_1_PIN 2   // Shows "HELLO"
#define BUTTON_2_PIN 3   // Shows "I <3 YOU"

MD_Parola myDisplay = MD_Parola(HARDWARE_TYPE, DATA_PIN, CLK_PIN, CS_PIN, MAX_DEVICES);

const char msgHello[] = "HELLO";
const char msgHeart[] = "I \x03 YOU";

// Pointer to keep track of what is currently displaying
const char* currentMsg = nullptr; 

void setup() {
  // Configure both buttons with internal pull-up resistors
  pinMode(BUTTON_1_PIN, INPUT_PULLUP);
  pinMode(BUTTON_2_PIN, INPUT_PULLUP);

  myDisplay.begin();
  myDisplay.setIntensity(5); // Brightness 0-15
  myDisplay.displayClear();  // Start with a blank screen
}

void loop() {
  // 1. Check Button 1 (Hello)
  if (digitalRead(BUTTON_1_PIN) == LOW) {
    delay(50); // Simple debounce
    // Only reset if it's a new button press to avoid stuttering if held down
    if (currentMsg != msgHello) {
      currentMsg = msgHello;
      myDisplay.displayText(currentMsg, PA_CENTER, 80, 0, PA_SCROLL_LEFT, PA_SCROLL_LEFT);
      myDisplay.displayReset();
    }
  }

  // 2. Check Button 2 (Heart)
  if (digitalRead(BUTTON_2_PIN) == LOW) {
    delay(50); // Simple debounce
    if (currentMsg != msgHeart) {
      currentMsg = msgHeart;
      myDisplay.displayText(currentMsg, PA_CENTER, 80, 0, PA_SCROLL_LEFT, PA_SCROLL_LEFT);
      myDisplay.displayReset();
    }
  }

  // 3. Keep the animation running only if a button has been pressed at least once
  if (currentMsg != nullptr) {
    if (myDisplay.displayAnimate()) {
      myDisplay.displayReset(); // Loop the current animation when finished
    }
  }
}
