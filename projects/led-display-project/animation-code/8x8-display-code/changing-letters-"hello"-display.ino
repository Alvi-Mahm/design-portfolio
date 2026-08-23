/*
 * Project: 8x8 LED Matrix - Animated Text
 * Description: Flashes the individual letters of "HELLO" sequentially 
 * with brief pauses between characters to display a clear scrolling effect.
 */

#include <MD_MAX72xx.h>
#include <SPI.h>

#define HARDWARE_TYPE MD_MAX72XX::PAROLA_HW
#define MAX_DEVICES 1  // Single 8x8 matrix

#define DATA_PIN  11
#define CS_PIN    10
#define CLK_PIN   13

MD_MAX72XX mx = MD_MAX72XX(HARDWARE_TYPE, DATA_PIN, CLK_PIN, CS_PIN, MAX_DEVICES);

// 8x8 Bitmaps for 'H', 'E', 'L', 'O' (1 = ON, 0 = OFF)
const byte LETTER_H[8] = {
  B01000010,
  B01000010,
  B01000010,
  B01111110,
  B01000010,
  B01000010,
  B01000010,
  B00000000
};

const byte LETTER_E[8] = {
  B01111110,
  B01000000,
  B01000000,
  B01111100,
  B01000000,
  B01000000,
  B01111110,
  B00000000
};

const byte LETTER_L[8] = {
  B01000000,
  B01000000,
  B01000000,
  B01000000,
  B01000000,
  B01000000,
  B01111110,
  B00000000
};

const byte LETTER_O[8] = {
  B00111100,
  B01000010,
  B01000010,
  B01000010,
  B01000010,
  B01000010,
  B00111100,
  B00000000
};

// Helper function to load an 8x8 array onto device index 0
void showLetter(const byte letter[]) {
  mx.clear();
  for (int row = 0; row < 8; row++) {
    mx.setRow(0, row, letter[row]);
  }
}

void setup() {
  mx.begin();
  mx.control(MD_MAX72XX::INTENSITY, 5); // Brightness (0-15)
  mx.clear();
}

void loop() {
  showLetter(LETTER_H);
  delay(600); // Display 'H' for 600ms

  mx.clear();
  delay(100); //Brief pause between letters

  showLetter(LETTER_E);
  delay(600); // Display 'E'

  mx.clear();
  delay(100); //Brief pause between letters

  showLetter(LETTER_L);
  delay(600); // Display 1st 'L'

  mx.clear();
  delay(100); //Brief pause between letters

  showLetter(LETTER_L);
  delay(600); // Display 2nd 'L'

  mx.clear();
  delay(100); //Brief pause between letters

  showLetter(LETTER_O);
  delay(600); // Display 'O'

  mx.clear();
  delay(100); //Brief pause between letters

  mx.clear();
  delay(1000); // Brief pause before starting over
}
