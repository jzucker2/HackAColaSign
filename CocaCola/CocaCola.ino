#include "Constants.h"

void setup() {
    for (int i = 0; i < sizeof(Lights); i++) {
        pinMode(Lights[i], PATTERN_INITIALIZE);
    }
}

// )'(

void lettersAllOn() {
    for (int i = 0; i < 10; i++) {
        digitalWrite(letters[i], PATTERN_ON);
        delay(none);
    }
}

void lettersAllOff() {
    for (int i = 0; i < 10; i++) {
        digitalWrite(letters[i], PATTERN_OFF);
        delay(none);
    }
}

void lettersOnLeftToRight() {
    for (int i = 0; i < sizeof(letters); i++) {
        digitalWrite(letters[i], PATTERN_ON);
        delay(normal);
    }
}

void backgroundOnLeftToRight() {
    // turn the background on from left to right
    for (int i = 0; i < sizeof(background); i++) {
        digitalWrite(background[i], PATTERN_ON);
        delay(minimal);
    }
}

void backgroundOffRightToLeft() {
    for (int i = sizeof(background) - 1; i >= 0; i--) {
        digitalWrite(background[i], PATTERN_OFF);
        delay(minimal);
    }
}

void backgroundOnOutsideIn() {
    for (int i = 0, j = sizeof(background) - 1; i < (sizeof(background) / 2); i++, j--) {
        digitalWrite(background[i], PATTERN_ON);
        delay(none);
        digitalWrite(background[j], PATTERN_ON);
        delay(minimal);
    }
}

void backgroundOffInsideOut() {
    for (int i = (sizeof(background) / 2) - 1, j = sizeof(background); i >= 0; i--, j++) {
        digitalWrite(background[i], PATTERN_OFF);
        delay(none);
        digitalWrite(background[j], PATTERN_OFF);
        delay(minimal);
    }
}

void loop() {
    lettersAllOff();

    lettersOnLeftToRight();

    backgroundOnLeftToRight();
    delay(extended);

    backgroundOffRightToLeft();
    delay(normal);

    backgroundOnOutsideIn();
    delay(extended);

    backgroundOffInsideOut();
    delay(normal);

    int repeat = random(5, 10);
    // turn the letters off and on a bit
    for (int x = 0; x < repeat; x++) {
        lettersAllOff();
        delay(blinky);

        lettersAllOn();
        delay(blinky);
    }

    // and then turn it all off and wait
    for (int i = 0; i < 10; i++) {
        digitalWrite(letters[i], PATTERN_OFF);
        delay(none);
    }

    delay(ish);
}

