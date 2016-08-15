#include "Constants.h"

void setup() {
    for (int i = 0; i < sizeof(Lights); i++) {
        pinMode(Lights[i], PATTERN_INITIALIZE);
    }
}

void loop() {    
    for (int i = 0; i < sizeof(Lights); i++) {
      digitalWrite(Lights[i], PATTERN_OFF);
    }

    // turn letters on, one at a time    
    for (int i = 0; i < sizeof(letters); i++) {
        digitalWrite(letters[i], PATTERN_ON);
        delay(normal);
    }

    // turn the background on from left to right
    for (int i = 0; i < sizeof(background); i++) {
        digitalWrite(background[i], PATTERN_ON);
        delay(minimal);
    }

    delay(extended);

    // turn the background off from right to left
    for (int i = sizeof(background) - 1; i >= 0; i--) {
        digitalWrite(background[i], PATTERN_OFF);
        delay(minimal);
    }

    delay(normal);

    // turn the background on from outside in
    for (int i = 0, j = sizeof(background) - 1; i < (sizeof(background) / 2); i++, j--) {
        digitalWrite(background[i], PATTERN_ON);
        delay(none);
        digitalWrite(background[j], PATTERN_ON);
        delay(minimal);
    }

    delay(extended);

    // turn the background off from inside out
    for (int i = (sizeof(background) / 2) - 1, j = sizeof(background); i >= 0; i--, j++) {
        digitalWrite(background[i], PATTERN_OFF);
        delay(none);
        digitalWrite(background[j], PATTERN_OFF);
        delay(minimal);
    }

    delay(normal);

    int repeat = random(5, 10);
    // turn the letters off and on a bit
    for (int x = 0; x < repeat; x++) {
        for (int i = 0; i < 10; i++) {
            digitalWrite(letters[i], PATTERN_OFF);
            delay(none);
        }

        delay(blinky);

        for (int i = 0; i < 10; i++) {
            digitalWrite(letters[i], PATTERN_ON);
            delay(none);
        }

        delay(blinky);
    }

    // and then turn it all off and wait
    for (int i = 0; i < 10; i++) {
        digitalWrite(letters[i], PATTERN_OFF);
        delay(none);
    }

    delay(ish);
}
