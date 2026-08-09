#include <MD_Parola.h>
#include <MD_MAX72xx.h>
#include <SPI.h>

#define HARDWARE_TYPE MD_MAX72XX::PAROLA_HW
#define MAX_DEVICES 1  // Single 8x8 matrix

#define DATA_PIN  11
#define CS_PIN    10
#define CLK_PIN   13

MD_Parola myDisplay = MD_Parola(HARDWARE_TYPE, DATA_PIN, CLK_PIN, CS_PIN, MAX_DEVICES);

// \x03 is the built-in Heart symbol in the Parola font library!
const char message[] = "I \x03 YOU";

void setup() {
  myDisplay.begin();
  myDisplay.setIntensity(5); // Brightness 0-15

  // Set up smooth scrolling:
  // displayText(text, alignment, speed_ms, pause_ms, effectIn, effectOut)
  myDisplay.displayText(message, PA_CENTER, 80, 0, PA_SCROLL_LEFT, PA_SCROLL_LEFT);
}

void loop() {
  // Animate the text scrolling left
  if (myDisplay.displayAnimate()) {
    myDisplay.displayReset(); // Loop animation when finished
  }
}
