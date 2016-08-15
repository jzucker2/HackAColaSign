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
    for (int i = 0; i < sizeof(letters); i++) {
        digitalWrite(letters[i], PATTERN_ON);
        delay(none);
    }
}

void lettersAllOff() {
    for (int i = 0; i < sizeof(letters); i++) {
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
    lettersAllOff();

    lettersOnLeftToRight();
    classicBackground();
    delay(normal);

    outsideInOnInsideOutOffBackground();
    delay(normal);

    blinkLetters(random(5, 10));

    lettersAllOff();

    delay(ish);
}

