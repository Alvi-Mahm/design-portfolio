#include <MD_MAX72xx.h>
#include <SPI.h>

#define HARDWARE_TYPE MD_MAX72XX::PAROLA_HW
#define MAX_DEVICES 1

#define DATA_PIN  11
#define CS_PIN    10
#define CLK_PIN   13

MD_MAX72XX mx = MD_MAX72XX(HARDWARE_TYPE, DATA_PIN, CLK_PIN, CS_PIN, MAX_DEVICES);

// 8x8 Heart Pattern (1 = LED ON, 0 = LED OFF)
const byte HEART[8] = {
  B00000000,
  B01100110,
  B11111111,
  B11111111,
  B01111110,
  B00111100,
  B00011000,
  B00000000
};

void drawPattern(const byte pattern[]) {
  mx.clear();
  for (int row = 0; row < 8; row++) {
    mx.setRow(0, row, pattern[row]);
  }
}

void setup() {
  mx.begin();
  mx.control(MD_MAX72XX::INTENSITY, 5);
  
  drawPattern(HEART);
}

void loop() {
}
