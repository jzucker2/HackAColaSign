#include "Constants.h"

void setup() {
    randomSeed(analogRead(0));

    for (int i = 0; i < sizeof(Lights); i++) {
        pinMode(Lights[i], PATTERN_INITIALIZE);
    }
}

// code above the man is ignored by the emulator
// code below it is transpiled into js and run by the emulator

// )'(
// Scenes

void lettersAllOn() {
    log('lettersAllOn - START');
    for (int i = 0; i < sizeof(letters); i++) {
        log('lettersAllOn ', i);
        digitalWrite(letters[i], PATTERN_ON);
        delay(none);
    }
}

void lettersAllOff() {
    log('lettersAllOff - START');
    for (int i = 0; i < sizeof(letters); i++) {
        log('lettersAllOff i: ', i);
        digitalWrite(letters[i], PATTERN_OFF);
        delay(none);
    }
}

void lettersOnLeftToRight() {
    log('lettersOnLeftToRight - START');
    for (int i = 0; i < sizeof(letters); i++) {
        log('lettersOnLeftToRight i: ', i);
        digitalWrite(letters[i], PATTERN_ON);
        delay(normal);
    }
}

void backgroundOnLeftToRight() {
    // turn the background on from left to right
    log('backgroundOnLeftToRight - START');
    for (int i = 0; i < sizeof(background); i++) {
        log('backgroundOnLeftToRight i: ', i);
        digitalWrite(background[i], PATTERN_ON);
        delay(minimal);
    }
}

void backgroundOffRightToLeft() {
    log('backgroundOffRightToLeft - START');
    for (int i = sizeof(background) - 1; i >= 0; i--) {
        digitalWrite(background[i], PATTERN_OFF);
        delay(minimal);
    }
}

void backgroundOnOutsideIn() {
    log('backgroundOnOutsideIn - START');
    for (int i = 0, j = sizeof(background) - 1; i < (sizeof(background) / 2); i++, j--) {
        log('backgroundOnOutsideIn i: ', i);
        digitalWrite(background[i], PATTERN_ON);
        delay(none);
        log('backgroundOnOutsideIn j: ', j);
        digitalWrite(background[j], PATTERN_ON);
        delay(minimal);
    }
}

void backgroundOffInsideOut() {
    log('backgroundOffInsideOut - START');
    for (int i = (sizeof(background) / 2) - 1, j = sizeof(background); i >= 0; i--, j++) {
        log('backgroundOffInsideOut i: ', i);
        digitalWrite(background[i], PATTERN_OFF);
        delay(none);
        log('backgroundOffInsideOut j: ', j);
        digitalWrite(background[j], PATTERN_OFF);
        delay(minimal);
    }
}

void allOff() {
    for (int i = 0; i < sizeof(letters); i++) {
        digitalWrite(background[i], PATTERN_OFF);
        delay(none);
    }
}

void allOn() {
    for (int i = 0; i < sizeof(letters); i++) {
        digitalWrite(background[i], PATTERN_ON);
        delay(none);
    }
}

// Patterns

void classicBackground() {
    backgroundOnLeftToRight();
    delay(extended);
    backgroundOffRightToLeft();
}

void outsideInOnInsideOutOffBackground() {
    backgroundOnOutsideIn();
    delay(extended);
    backgroundOffInsideOut();
}

void blinkLetters(int times) {
    for (int x = 0; x < times; x++) {
        lettersAllOff();
        delay(blinky);

        lettersAllOn();
        delay(blinky);
    }
}

// Arduino loop

void loop() {
    allOff();

    lettersOnLeftToRight();
    classicBackground();
    delay(normal);

    outsideInOnInsideOutOffBackground();
    delay(normal);

    blinkLetters(random(5, 10));

    lettersAllOff();

    delay(ish);
}

