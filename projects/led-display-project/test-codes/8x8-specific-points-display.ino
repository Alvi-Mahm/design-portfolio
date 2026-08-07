#include <MD_MAX72xx.h>
#include <SPI.h>

#define HARDWARE_TYPE MD_MAX72XX::PAROLA_HW
#define MAX_DEVICES 1 // Setting to 1 for a single 8x8 matrix

#define DATA_PIN  11
#define CS_PIN    10
#define CLK_PIN   13

MD_MAX72XX mx = MD_MAX72XX(HARDWARE_TYPE, DATA_PIN, CLK_PIN, CS_PIN, MAX_DEVICES);

void setup() {
  mx.begin();
  mx.control(MD_MAX72XX::INTENSITY, 5); // Brightness (0-15)
  mx.clear();

  // Light up the 4 corners
  mx.setPoint(0, 0, true); // Top-left
  mx.setPoint(0, 7, true); // Top-right
  mx.setPoint(7, 0, true); // Bottom-left
  mx.setPoint(7, 7, true); // Bottom-right

  // Light up the center 4 LEDs
  mx.setPoint(3, 3, true);
  mx.setPoint(3, 4, true);
  mx.setPoint(4, 3, true);
  mx.setPoint(4, 4, true);
}

void loop() {
  // Static pattern; nothing needed in loop
}
