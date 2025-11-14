#include "Arduino_LED_Matrix.h"

ArduinoLEDMatrix matrix;

const uint32_t liamFrames[][3] = {
  {0b000000001110, 0b010010001010, 0b011111101110}, // L
  {0b111111101111, 0b100100101001, 0b111111101111}, // I
  {0b011111101110, 0b010010001010, 0b011111101110}, // A
  {0b111111101111, 0b100100101001, 0b111111101111}  // M
};

void setup() {
  Serial.begin(115200);
  matrix.begin();
}

void loop() {
  for (int f = 0; f < 4; f++) {
    matrix.loadFrame(liamFrames[f]);
    delay(500); // pause 0.5 seconds between letters
  }
}
