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
    for (int i = 0; i < sizeof(Lights); i++) {
      digitalWrite(Lights[i], PATTERN_ON);
    }
}
