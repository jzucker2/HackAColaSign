#include "Constants.h"

void setup() {
    randomSeed(analogRead(0));

    pinMode(Lights[0], PATTERN_INITIALIZE);
    pinMode(Lights[1], PATTERN_INITIALIZE);
    pinMode(Lights[2], PATTERN_INITIALIZE);
    pinMode(Lights[3], PATTERN_INITIALIZE);
    pinMode(Lights[4], PATTERN_INITIALIZE);
    pinMode(Lights[5], PATTERN_INITIALIZE);
    pinMode(Lights[6], PATTERN_INITIALIZE);
    pinMode(Lights[7], PATTERN_INITIALIZE);
    pinMode(Lights[8], PATTERN_INITIALIZE);
    pinMode(Lights[9], PATTERN_INITIALIZE);
    pinMode(Lights[10], PATTERN_INITIALIZE);
    pinMode(Lights[11], PATTERN_INITIALIZE);
    pinMode(Lights[12], PATTERN_INITIALIZE);
    pinMode(Lights[13], PATTERN_INITIALIZE);
    pinMode(Lights[14], PATTERN_INITIALIZE);
}

// code above the man is ignored by the emulator
// code below it is transpiled into js and run by the emulator

// )'(
// Scenes
// roughly: anything that calls `digitalWrite();` is a scene

void lettersAllOn() {
    delay(none);
    log('lettersAllOn - START');
    digitalWrite(letters[0], PATTERN_ON); delay(none);
    digitalWrite(letters[1], PATTERN_ON); delay(none);
    digitalWrite(letters[2], PATTERN_ON); delay(none);
    digitalWrite(letters[3], PATTERN_ON); delay(none);
    digitalWrite(letters[4], PATTERN_ON); delay(none);
    digitalWrite(letters[5], PATTERN_ON); delay(none);
    digitalWrite(letters[6], PATTERN_ON); delay(none);
    digitalWrite(letters[7], PATTERN_ON); delay(none);
    digitalWrite(letters[8], PATTERN_ON); delay(none);
}

void lettersAllOff() {
    delay(none);
    log('lettersAllOff - START');
    digitalWrite(letters[0], PATTERN_OFF); delay(none);
    digitalWrite(letters[1], PATTERN_OFF); delay(none);
    digitalWrite(letters[2], PATTERN_OFF); delay(none);
    digitalWrite(letters[3], PATTERN_OFF); delay(none);
    digitalWrite(letters[4], PATTERN_OFF); delay(none);
    digitalWrite(letters[5], PATTERN_OFF); delay(none);
    digitalWrite(letters[6], PATTERN_OFF); delay(none);
    digitalWrite(letters[7], PATTERN_OFF); delay(none);
    digitalWrite(letters[8], PATTERN_OFF); delay(none);
}

void backgroundAllOn() {
    delay(none);
    log('backgroundAllOn - START');
    digitalWrite(background[0], PATTERN_ON); delay(none);
    digitalWrite(background[1], PATTERN_ON); delay(none);
    digitalWrite(background[2], PATTERN_ON); delay(none);
    digitalWrite(background[3], PATTERN_ON); delay(none);
    digitalWrite(background[4], PATTERN_ON); delay(none);
    digitalWrite(background[5], PATTERN_ON); delay(none);
}

void backgroundAllOff() {
    delay(none);
    log('backgroundAllOff - START');
    digitalWrite(background[0], PATTERN_OFF); delay(none);
    digitalWrite(background[1], PATTERN_OFF); delay(none);
    digitalWrite(background[2], PATTERN_OFF); delay(none);
    digitalWrite(background[3], PATTERN_OFF); delay(none);
    digitalWrite(background[4], PATTERN_OFF); delay(none);
    digitalWrite(background[5], PATTERN_OFF); delay(none);
}

void lettersOnLeftToRight() {
    delay(none);
    log('lettersOnLeftToRight - START');
    digitalWrite(letters[0], PATTERN_ON); delay(normal);
    digitalWrite(letters[1], PATTERN_ON); delay(normal);
    digitalWrite(letters[2], PATTERN_ON); delay(normal);
    digitalWrite(letters[3], PATTERN_ON); delay(normal);
    digitalWrite(letters[4], PATTERN_ON); delay(normal);
    digitalWrite(letters[5], PATTERN_ON); delay(normal);
    digitalWrite(letters[6], PATTERN_ON); delay(normal);
    digitalWrite(letters[7], PATTERN_ON); delay(normal);
    digitalWrite(letters[8], PATTERN_ON); delay(normal);
}

void backgroundOnLeftToRight() {
    delay(none);
    log('backgroundOnLeftToRight - START');
    digitalWrite(background[0], PATTERN_ON); delay(minimal);
    digitalWrite(background[1], PATTERN_ON); delay(minimal);
    digitalWrite(background[2], PATTERN_ON); delay(minimal);
    digitalWrite(background[3], PATTERN_ON); delay(minimal);
    digitalWrite(background[4], PATTERN_ON); delay(minimal);
    digitalWrite(background[5], PATTERN_ON); delay(minimal);
}

void backgroundOffRightToLeft() {
    delay(none);
    log('backgroundOffRightToLeft - START');
    digitalWrite(background[5], PATTERN_OFF); delay(minimal);
    digitalWrite(background[4], PATTERN_OFF); delay(minimal);
    digitalWrite(background[3], PATTERN_OFF); delay(minimal);
    digitalWrite(background[2], PATTERN_OFF); delay(minimal);
    digitalWrite(background[1], PATTERN_OFF); delay(minimal);
    digitalWrite(background[0], PATTERN_OFF); delay(minimal);
}

void backgroundOnOutsideIn() {
    delay(none);
    log('backgroundOnOutsideIn - START');
    digitalWrite(background[0], PATTERN_ON); delay(none);
    digitalWrite(background[5], PATTERN_ON); delay(minimal);
    digitalWrite(background[1], PATTERN_ON); delay(none);
    digitalWrite(background[4], PATTERN_ON); delay(minimal);
    digitalWrite(background[2], PATTERN_ON); delay(none);
    digitalWrite(background[3], PATTERN_ON); delay(minimal);
}

void backgroundOffInsideOut() {
    delay(none);
    log('backgroundOffInsideOut - START');
    digitalWrite(background[3], PATTERN_OFF); delay(minimal);
    digitalWrite(background[2], PATTERN_OFF); delay(none);
    digitalWrite(background[4], PATTERN_OFF); delay(minimal);
    digitalWrite(background[1], PATTERN_OFF); delay(none);
    digitalWrite(background[5], PATTERN_OFF); delay(minimal);
    digitalWrite(background[0], PATTERN_OFF); delay(none);
}

void backgroundOffOutsideIn() {
    delay(none);
    log('backgroundOffOutsideIn - START');
    digitalWrite(background[0], PATTERN_OFF); delay(none);
    digitalWrite(background[5], PATTERN_OFF); delay(minimal);
    digitalWrite(background[1], PATTERN_OFF); delay(none);
    digitalWrite(background[4], PATTERN_OFF); delay(minimal);
    digitalWrite(background[2], PATTERN_OFF); delay(none);
    digitalWrite(background[3], PATTERN_OFF); delay(minimal);
}

void backgroundOnInsideOut() {
    delay(none);
    log('backgroundOnInsideOut - START');
    digitalWrite(background[3], PATTERN_ON); delay(minimal);
    digitalWrite(background[2], PATTERN_ON); delay(none);
    digitalWrite(background[4], PATTERN_ON); delay(minimal);
    digitalWrite(background[1], PATTERN_ON); delay(none);
    digitalWrite(background[5], PATTERN_ON); delay(minimal);
    digitalWrite(background[0], PATTERN_ON); delay(none);
}

void allOff() {
    delay(none);
    digitalWrite(Lights[0], PATTERN_OFF); delay(none);
    digitalWrite(Lights[1], PATTERN_OFF); delay(none);
    digitalWrite(Lights[2], PATTERN_OFF); delay(none);
    digitalWrite(Lights[3], PATTERN_OFF); delay(none);
    digitalWrite(Lights[4], PATTERN_OFF); delay(none);
    digitalWrite(Lights[5], PATTERN_OFF); delay(none);
    digitalWrite(Lights[6], PATTERN_OFF); delay(none);
    digitalWrite(Lights[7], PATTERN_OFF); delay(none);
    digitalWrite(Lights[8], PATTERN_OFF); delay(none);
    digitalWrite(Lights[9], PATTERN_OFF); delay(none);
    digitalWrite(Lights[10], PATTERN_OFF); delay(none);
    digitalWrite(Lights[11], PATTERN_OFF); delay(none);
    digitalWrite(Lights[12], PATTERN_OFF); delay(none);
    digitalWrite(Lights[13], PATTERN_OFF); delay(none);
    digitalWrite(Lights[14], PATTERN_OFF); delay(none);
}

void allOn() {
    delay(none);
    digitalWrite(Lights[0], PATTERN_ON); delay(none);
    digitalWrite(Lights[1], PATTERN_ON); delay(none);
    digitalWrite(Lights[2], PATTERN_ON); delay(none);
    digitalWrite(Lights[3], PATTERN_ON); delay(none);
    digitalWrite(Lights[4], PATTERN_ON); delay(none);
    digitalWrite(Lights[5], PATTERN_ON); delay(none);
    digitalWrite(Lights[6], PATTERN_ON); delay(none);
    digitalWrite(Lights[7], PATTERN_ON); delay(none);
    digitalWrite(Lights[8], PATTERN_ON); delay(none);
    digitalWrite(Lights[9], PATTERN_ON); delay(none);
    digitalWrite(Lights[10], PATTERN_ON); delay(none);
    digitalWrite(Lights[11], PATTERN_ON); delay(none);
    digitalWrite(Lights[12], PATTERN_ON); delay(none);
    digitalWrite(Lights[13], PATTERN_ON); delay(none);
    digitalWrite(Lights[14], PATTERN_ON); delay(none);
}

// Patterns
// roughly: anything that calls functions that call digitalWrite() is a pattern

void classicBackground() {
    backgroundOnLeftToRight();
    delay(extended);
    backgroundOffRightToLeft();
    delay(normal);
}

void _outsideInOnInsideOutOffBackground(int times, int endingWithLightsOn, int repeatCount) {
    backgroundOnOutsideIn();
    delay(ish);

    if (repeatCount > 0 || !endingWithLightsOn) {
        backgroundOffInsideOut();
        delay(ish);

        if (repeatCount > 0) {
          _outsideInOnInsideOutOffBackground(times, endingWithLightsOn, repeatCount - 1);
        }
    }
}

void outsideInOnInsideOutOffBackground(int times, int endingWithLightsOn) {
  _outsideInOnInsideOutOffBackground(times, endingWithLightsOn, times);
}

void _insideOutOnOutsideInOffBackground(int times, int endingWithLightsOn, int repeatCount) {
    backgroundOnInsideOut();
    delay(ish);

    if (repeatCount > 0 || !endingWithLightsOn) {
        backgroundOffOutsideIn();
        delay(ish);

        if (repeatCount > 0) {
          _insideOutOnOutsideInOffBackground(times, endingWithLightsOn, repeatCount - 1);
        }
    }
}

void insideOutOnOutsideInOffBackground(int times, int endingWithLightsOn) {
    for (int count = 0; count < times; count++) {
        backgroundOnInsideOut();
        delay(ish);
        if (count + 1 != times || !endingWithLightsOn) {
            backgroundOffOutsideIn();
        }
    }
}

void _insideOutOutsideInBackground(int repeatCount) {
    if (random(0, 2) == 0) {
        outsideInOnInsideOutOffBackground(random(1, 4), true);
        delay(minimal);

        insideOutOnOutsideInOffBackground(random(1, 4), false);
        delay(minimal);
    } else {
        insideOutOnOutsideInOffBackground(random(1, 4), true);
        delay(minimal);

        outsideInOnInsideOutOffBackground(random(1, 4), false);
        delay(minimal);
    }

    if (repeatCount > 0) {
        _insideOutOutsideInBackground(repeatCount - 1);
    }
}

void insideOutOutsideInBackground() {
  _insideOutOutsideInBackground(random(3, 8));
}

void racingOnLeftToRightBackground() {
    digitalWrite(background[0], PATTERN_ON); delay(minimal);
    digitalWrite(background[0], PATTERN_OFF); delay(none);
    digitalWrite(background[1], PATTERN_ON); delay(minimal);
    digitalWrite(background[1], PATTERN_OFF); delay(none);
    digitalWrite(background[2], PATTERN_ON); delay(minimal);
    digitalWrite(background[2], PATTERN_OFF); delay(none);
    digitalWrite(background[3], PATTERN_ON); delay(minimal);
    digitalWrite(background[3], PATTERN_OFF); delay(none);
    digitalWrite(background[4], PATTERN_ON); delay(minimal);
    digitalWrite(background[4], PATTERN_OFF); delay(none);
    digitalWrite(background[5], PATTERN_ON); delay(minimal);
    digitalWrite(background[0], PATTERN_ON); delay(minimal);
    digitalWrite(background[0], PATTERN_OFF); delay(none);
    digitalWrite(background[1], PATTERN_ON); delay(minimal);
    digitalWrite(background[1], PATTERN_OFF); delay(none);
    digitalWrite(background[2], PATTERN_ON); delay(minimal);
    digitalWrite(background[2], PATTERN_OFF); delay(none);
    digitalWrite(background[3], PATTERN_ON); delay(minimal);
    digitalWrite(background[3], PATTERN_OFF); delay(none);
    digitalWrite(background[4], PATTERN_ON); delay(minimal);
    digitalWrite(background[0], PATTERN_ON); delay(minimal);
    digitalWrite(background[0], PATTERN_OFF); delay(none);
    digitalWrite(background[1], PATTERN_ON); delay(minimal);
    digitalWrite(background[1], PATTERN_OFF); delay(none);
    digitalWrite(background[2], PATTERN_ON); delay(minimal);
    digitalWrite(background[2], PATTERN_OFF); delay(none);
    digitalWrite(background[3], PATTERN_ON); delay(minimal);
    digitalWrite(background[0], PATTERN_ON); delay(minimal);
    digitalWrite(background[0], PATTERN_OFF); delay(none);
    digitalWrite(background[1], PATTERN_ON); delay(minimal);
    digitalWrite(background[1], PATTERN_OFF); delay(none);
    digitalWrite(background[2], PATTERN_ON); delay(minimal);
    digitalWrite(background[0], PATTERN_ON); delay(minimal);
    digitalWrite(background[0], PATTERN_OFF); delay(none);
    digitalWrite(background[1], PATTERN_ON); delay(minimal);
    digitalWrite(background[0], PATTERN_ON); delay(minimal);
}

void _blinkBackgroundPairLeftToRight(int repeatCount) {
    digitalWrite(background[0], PATTERN_ON); delay(none);
    digitalWrite(background[3], PATTERN_ON); delay(minimal);
    digitalWrite(background[0], PATTERN_OFF); delay(none);
    digitalWrite(background[3], PATTERN_OFF); delay(none);

    digitalWrite(background[1], PATTERN_ON); delay(none);
    digitalWrite(background[4], PATTERN_ON); delay(minimal);
    digitalWrite(background[1], PATTERN_OFF); delay(none);
    digitalWrite(background[4], PATTERN_OFF); delay(none);

    digitalWrite(background[2], PATTERN_ON); delay(none);
    digitalWrite(background[5], PATTERN_ON); delay(minimal);
    digitalWrite(background[2], PATTERN_OFF); delay(none);
    digitalWrite(background[5], PATTERN_OFF); delay(none);

    if (repeatCount > 0) {
        _blinkBackgroundPairLeftToRight(repeatCount - 1);
    }
}

void blinkBackgroundPairLeftToRight() {
    _blinkBackgroundPairLeftToRight(random(5, 10));
}

void blinkLetters(int times) {
    lettersAllOff();
    delay(blinky);

    lettersAllOn();
    delay(blinky);

    if (times > 0) {
        blinkLetters(times - 1);
    }
}

void blinkBackground(int times) {
    backgroundAllOff();
    delay(blinky);

    backgroundAllOn();
    delay(blinky);

    delay(normal);

    if (times > 0) {
        blinkBackground(times - 1);
    }
}

//void blinkAllOnRandom() {
//    int state[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
//
//    int on = 0;
//
//    while (on != sizeof(state)) {
//        int value = random(0, sizeof(state));
//        if (state[value]) {
//            continue;
//        }
//
//        state[value] = 1;
//        int pin = Lights[value];
//        digitalWrite(pin, PATTERN_ON);
//        on++;
//
//        delay(minimal);
//    }
//}
//
//void blinkBackgroundOnRandom() {
//    int state[] = { 0, 0, 0, 0, 0, 0 };
//
//    for (int i = 0; i < sizeof(state); i++) {
//        state[i] = 0;
//    }
//
//    int on = 0;
//
//    while (on != sizeof(state)) {
//        int value = random(0, sizeof(state));
//        if (state[value]) {
//            continue;
//        }
//
//        state[value] = 1;
//        int pin = background[value];
//        digitalWrite(pin, PATTERN_ON);
//        on++;
//
//        delay(minimal);
//    }
//}
//
//void blinkLettersOnRandom() {
//    // from: int state[] = [ 0, 0, 0, 0, 0, 0, 0, 0, 0 ];   
//    int state[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
//
//    for (int i = 0; i < sizeof(state); i++) {
//        state[i] = 0;
//    }
//
//    int on = 0;
//
//    while (on != sizeof(state)) {
//        int value = random(0, sizeof(state));
//        if (state[value]) {
//            continue;
//        }
//
//        state[value] = 1;
//        int pin = letters[value];
//        digitalWrite(pin, PATTERN_ON);
//        on++;
//
//        delay(minimal);
//    }
//}

void flickerPattern(int flickerLetters, int flickerBackground, int repeatCount) {
    allOn();

    int max = 0;
    if (flickerLetters == 1) {
        max += 12;
    }
    if (flickerBackground == 1) {
        max += 8;
    }
    int pin = 0;

    if (repeatCount % random(1, max / 3) == 0) {
        if (flickerLetters == 1 && flickerBackground == 1) {
            pin = random(0, 2) == 0 ? letters[random(0, sizeof(letters))] : background[random(0, sizeof(background))];
        } else if (flickerBackground == 1) {
            pin = background[random(0, sizeof(background))];
        } else {
            pin = letters[random(0, sizeof(letters))];
        }
    }

    digitalWrite(pin, PATTERN_OFF);
    delay(random(minimal / 2, minimal));
    digitalWrite(pin, PATTERN_ON);
    delay(ish);

    if (repeatCount > 0) {
        flickerPattern(flickerLetters, flickerBackground, repeatCount - 1);
    }
}

// Randomness

void runClassic() {
    lettersOnLeftToRight();
    classicBackground();
}

void _runTracer() {
  
}

void runTracer() {
    digitalWrite(background[0], PATTERN_ON); delay(none);
    digitalWrite(background[1], PATTERN_ON); delay(none);
    digitalWrite(background[2], PATTERN_ON); delay(none);
    digitalWrite(background[3], PATTERN_ON); delay(none);
    digitalWrite(background[4], PATTERN_ON); delay(none);
    digitalWrite(background[5], PATTERN_ON); delay(none);

    digitalWrite(letters[0], PATTERN_ON); delay(250); digitalWrite(letters[0], PATTERN_OFF); delay(250);
    digitalWrite(letters[1], PATTERN_ON); delay(250); digitalWrite(letters[1], PATTERN_OFF); delay(250);
    digitalWrite(letters[2], PATTERN_ON); delay(250); digitalWrite(letters[2], PATTERN_OFF); delay(250); 
    digitalWrite(letters[3], PATTERN_ON); delay(250); digitalWrite(letters[3], PATTERN_OFF); delay(250);
    digitalWrite(letters[4], PATTERN_ON); delay(250); digitalWrite(letters[4], PATTERN_OFF); delay(250);
    digitalWrite(letters[5], PATTERN_ON); delay(250); digitalWrite(letters[5], PATTERN_OFF); delay(250);
    digitalWrite(letters[6], PATTERN_ON); delay(250); digitalWrite(letters[6], PATTERN_OFF); delay(250);
    digitalWrite(letters[7], PATTERN_ON); delay(250); digitalWrite(letters[7], PATTERN_OFF); delay(250);
    digitalWrite(letters[8], PATTERN_ON); delay(250); digitalWrite(letters[8], PATTERN_OFF); delay(250);
    
    digitalWrite(Lights[0], PATTERN_ON); delay(none); 
    digitalWrite(Lights[1], PATTERN_ON); delay(none); 
    digitalWrite(Lights[2], PATTERN_ON); delay(none); 
    digitalWrite(Lights[3], PATTERN_ON); delay(none); 
    digitalWrite(Lights[4], PATTERN_ON); delay(none); 
    digitalWrite(Lights[5], PATTERN_ON); delay(none); 
    digitalWrite(Lights[6], PATTERN_ON); delay(none); 
    digitalWrite(Lights[7], PATTERN_ON); delay(none); 
    digitalWrite(Lights[8], PATTERN_ON); delay(none); 
    delay(250);
    digitalWrite(Lights[0], PATTERN_OFF); delay(none); 
    digitalWrite(Lights[1], PATTERN_OFF); delay(none); 
    digitalWrite(Lights[2], PATTERN_OFF); delay(none); 
    digitalWrite(Lights[3], PATTERN_OFF); delay(none); 
    digitalWrite(Lights[4], PATTERN_OFF); delay(none); 
    digitalWrite(Lights[5], PATTERN_OFF); delay(none); 
    digitalWrite(Lights[6], PATTERN_OFF); delay(none); 
    digitalWrite(Lights[7], PATTERN_OFF); delay(none); 
    digitalWrite(Lights[8], PATTERN_OFF); delay(none); 
    delay(250);
    digitalWrite(Lights[0], PATTERN_ON); delay(none); 
    digitalWrite(Lights[1], PATTERN_ON); delay(none); 
    digitalWrite(Lights[2], PATTERN_ON); delay(none); 
    digitalWrite(Lights[3], PATTERN_ON); delay(none); 
    digitalWrite(Lights[4], PATTERN_ON); delay(none); 
    digitalWrite(Lights[5], PATTERN_ON); delay(none); 
    digitalWrite(Lights[6], PATTERN_ON); delay(none); 
    digitalWrite(Lights[7], PATTERN_ON); delay(none); 
    digitalWrite(Lights[8], PATTERN_ON); delay(none); 
    delay(250);
    digitalWrite(Lights[0], PATTERN_OFF); delay(none); 
    digitalWrite(Lights[1], PATTERN_OFF); delay(none); 
    digitalWrite(Lights[2], PATTERN_OFF); delay(none); 
    digitalWrite(Lights[3], PATTERN_OFF); delay(none); 
    digitalWrite(Lights[4], PATTERN_OFF); delay(none); 
    digitalWrite(Lights[5], PATTERN_OFF); delay(none); 
    digitalWrite(Lights[6], PATTERN_OFF); delay(none); 
    digitalWrite(Lights[7], PATTERN_OFF); delay(none); 
    digitalWrite(Lights[8], PATTERN_OFF); delay(none); 
    delay(250);
    digitalWrite(Lights[0], PATTERN_ON); delay(none); 
    digitalWrite(Lights[1], PATTERN_ON); delay(none); 
    digitalWrite(Lights[2], PATTERN_ON); delay(none); 
    digitalWrite(Lights[3], PATTERN_ON); delay(none); 
    digitalWrite(Lights[4], PATTERN_ON); delay(none); 
    digitalWrite(Lights[5], PATTERN_ON); delay(none); 
    digitalWrite(Lights[6], PATTERN_ON); delay(none); 
    digitalWrite(Lights[7], PATTERN_ON); delay(none); 
    digitalWrite(Lights[8], PATTERN_ON); delay(none); 
    delay(250);
    digitalWrite(Lights[0], PATTERN_OFF); delay(none); 
    digitalWrite(Lights[1], PATTERN_OFF); delay(none); 
    digitalWrite(Lights[2], PATTERN_OFF); delay(none); 
    digitalWrite(Lights[3], PATTERN_OFF); delay(none); 
    digitalWrite(Lights[4], PATTERN_OFF); delay(none); 
    digitalWrite(Lights[5], PATTERN_OFF); delay(none); 
    digitalWrite(Lights[6], PATTERN_OFF); delay(none); 
    digitalWrite(Lights[7], PATTERN_OFF); delay(none); 
    digitalWrite(Lights[8], PATTERN_OFF); delay(none); 
    delay(250);
    delay(250);
}

void runLetterPattern() {
    // if new patterns are added, add a new case statement, and bump up the max random value by one
    switch (random(0, 2)) {
    case 0: { lettersOnLeftToRight(); break; }
    case 1: { blinkLetters(random(5, 10)); break; }
//    case 2: {  blinkLettersOnRandom(); break; }
    default: { break; }
    }
}

void runBackgroundPattern() {
    switch (random(0, 4)) {
    case 0: { classicBackground(); break; }
    case 1: { insideOutOutsideInBackground(); break; }
    case 2: { racingOnLeftToRightBackground(); break; }
    case 3: { blinkBackground(random(5, 10)); backgroundAllOn(); break; }
//    case 4: { blinkBackgroundOnRandom(); break; }
    }
}

// Arduino loop

void loop() {
    allOff();

    int blinkMin = 1;
    int blinkMax = 0;
    int possibility = random(0, 100);

    if (possibility > 95) { // rare things, only happen 5% of the time
//        switch (random(0, 2)) {
//        case 0:
            flickerPattern(random(0, 2), random(0, 2), random(3, 5));
            blinkMin = 0;
//            break;
//        case 1:
//            blinkAllOnRandom();
//            blinkMax = 3;
//            break;
//        }
    } else if (possibility > 70) { // less rare things, happen 25% of the time
        if (random(0, 200) == 0) {
            runBackgroundPattern();
            runLetterPattern();
        } else {
            blinkMax = 5;

            runLetterPattern();

            for (int i = 0; i < random(1, 5); i++) {
                runBackgroundPattern();

                if (random(0, 10) == 0) {
                    blinkLetters(random(1, blinkMax));
                }
            }
        }
    } else if (possibility > 20) { // the classic coca-cola sign pattern, happen 50% of the time
        runClassic();

        blinkMax = 3;
    } else { // tracer, happens 20% of the time
        runTracer();

        blinkMax = 1;
    }

    blinkLetters(random(blinkMin, blinkMax));

    lettersAllOff();

    delay(ish);
}
