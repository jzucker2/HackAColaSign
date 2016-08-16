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
      digitalWrite(Lights[i], PATTERN_OFF);
      delay(none);
    }

    for (int i = 0; i < sizeof(letters); i++) {
        digitalWrite(letters[i], PATTERN_ON);
        delay(normal);
    }
    
    for (int i = 0, j = sizeof(background) - 1; i < (sizeof(background) / 2); i++, j--) {
        digitalWrite(background[i], PATTERN_ON);
        delay(none);
        digitalWrite(background[j], PATTERN_ON);
        delay(minimal);
    }

    delay(extended);

    for (int i = (sizeof(background) / 2) - 1, j = i + 1; i >= 0; i--, j++) {
        digitalWrite(background[i], PATTERN_OFF);
        delay(none);
        digitalWrite(background[j], PATTERN_OFF);
        delay(minimal);
    }

    delay(normal);

    for (int i = 0; i < sizeof(letters); i++) {
        digitalWrite(letters[i], PATTERN_OFF);
        delay(none);
    }

    delay(ish);
}
