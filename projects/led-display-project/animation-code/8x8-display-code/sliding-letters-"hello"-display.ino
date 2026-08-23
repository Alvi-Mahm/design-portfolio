/*
 * Project: 8x8 LED Matrix - Scrolling Text
 * Description: Uses the MD_Parola library to smoothly scroll the word "HELLO" 
 * from right to left across a single 8x8 MAX7219 matrix, looping continuously.
 */

#include <MD_Parola.h>
#include <MD_MAX72xx.h>
#include <SPI.h>

#define HARDWARE_TYPE MD_MAX72XX::PAROLA_HW
#define MAX_DEVICES 1  // Single 8x8 matrix

#define DATA_PIN  11
#define CS_PIN    10
#define CLK_PIN   13

MD_Parola myDisplay = MD_Parola(HARDWARE_TYPE, DATA_PIN, CLK_PIN, CS_PIN, MAX_DEVICES);

void setup() {
  myDisplay.begin();
  myDisplay.setIntensity(5); // Brightness 0-15

  // displayText(text, alignment, speed_ms, pause_ms, effectIn, effectOut)
  // PA_SCROLL_LEFT slides text from right to left smoothly through the frame
  myDisplay.displayText("HELLO", PA_LEFT, 80, 0, PA_SCROLL_LEFT, PA_SCROLL_LEFT);
}

void loop() {
  // Animate the scrolling text
  if (myDisplay.displayAnimate()) {
    myDisplay.displayReset(); // Reset loop when string finishes scrolling off-screen
  }
}
