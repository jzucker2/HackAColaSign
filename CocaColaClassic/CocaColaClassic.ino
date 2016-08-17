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
// roughly: anything that calls `digitalWrite();` is a scene

void loop() {    
    for (int i = 0; i < sizeof(Lights); i++) {
      digitalWrite(Lights[i], PATTERN_OFF);
    }
    
    for (int i = 0; i < sizeof(letters); i++) {
        digitalWrite(letters[i], PATTERN_ON);
        delay(normal);
    }
    
    for (int i = 0; i < sizeof(background); i++) {
        digitalWrite(background[i], PATTERN_ON);
        delay(minimal);
    }

    delay(extended);

    for (int i = sizeof(background) - 1; i >= 0; i--) {
        digitalWrite(background[i], PATTERN_OFF);
        delay(minimal);
    }

        delay(normal);

    for (int i = 0; i < sizeof(letters); i++) {
        digitalWrite(letters[i], PATTERN_OFF);
    }

    delay(ish);
}
