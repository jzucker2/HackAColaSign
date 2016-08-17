#include "Constants.h"

void setup() {
    for (int i = 0; i < sizeof(Lights); i++) {
        pinMode(Lights[i], PATTERN_INITIALIZE);
    }
}

// code above the man is ignored by the emulator
// code below it is transpiled into js and run by the emulator

// )'(
// Scenes
// roughly: anything that calls `digitalWrite()` is a scene

void loop() {
    for (int i = 0; i < sizeof(background); i++) {
      digitalWrite(background[i], PATTERN_ON);
    }
    for (int i = 0; i < sizeof(letters); i++) {
      digitalWrite(Lights[i], PATTERN_ON);
      delay(250);
      digitalWrite(Lights[i], PATTERN_OFF);
      delay(250);
    }
    for(int j=0; j< 3; j++) {

      for (int i = 0; i < sizeof(letters); i++) {
        digitalWrite(Lights[i], PATTERN_ON);
      }
      delay(250);
      for (int i = 0; i < sizeof(letters); i++) {
        digitalWrite(Lights[i], PATTERN_OFF);
      }
      delay(250);

    }
    delay(250);
}
