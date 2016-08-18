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
// roughly: anything that calls `digitalWrite();` is a scene

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

void backgroundAllOn() {
    log('backgroundAllOn - START');
    for (int i = 0; i < sizeof(background); i++) {
        log('backgroundAllOn ', i);
        digitalWrite(background[i], PATTERN_ON);
        delay(none);
    }
}

void backgroundAllOff() {
    log('backgroundAllOff - START');
    for (int i = 0; i < sizeof(background); i++) {
        log('backgroundAllOff i: ', i);
        digitalWrite(background[i], PATTERN_OFF);
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
    for (int i = (sizeof(background) / 2) - 1, j = i + 1; i >= 0; i--, j++) {
        log('backgroundOffInsideOut i: ', i);
        digitalWrite(background[i], PATTERN_OFF);
        delay(none);
        log('backgroundOffInsideOut j: ', j);
        digitalWrite(background[j], PATTERN_OFF);
        delay(minimal);
    }
}

void backgroundOffOutsideIn() {
    log('backgroundOffOutsideIn - START');
    for (int i = 0, j = sizeof(background) - 1; i < (sizeof(background) / 2); i++, j--) {
        log('backgroundOffOutsideIn i: ', i);
        digitalWrite(background[i], PATTERN_OFF);
        delay(none);
        log('backgroundOffOutsideIn j: ', j);
        digitalWrite(background[j], PATTERN_OFF);
        delay(minimal);
    }
}

void backgroundOnInsideOut() {
    log('backgroundOnInsideOut - START');
    for (int i = (sizeof(background) / 2) - 1, j = i + 1; i >= 0; i--, j++) {
        log('backgroundOnInsideOut i: ', i);
        digitalWrite(background[i], PATTERN_ON);
        delay(none);
        log('backgroundOnInsideOut j: ', j);
        digitalWrite(background[j], PATTERN_ON);
        delay(minimal);
    }
}

void allOff() {
    for (int i = 0; i < sizeof(Lights); i++) {
        digitalWrite(Lights[i], PATTERN_OFF);
        delay(none);
    }
}

void allOn() {
    for (int i = 0; i < sizeof(Lights); i++) {
        digitalWrite(Lights[i], PATTERN_ON);
        delay(none);
    }
}

// Patterns
// roughly: anything that calls functions that call digitalWrite() is a pattern

void classicBackground() {
    backgroundOnLeftToRight();
    delay(extended);
    backgroundOffRightToLeft();
    delay(normal);
}

void outsideInOnInsideOutOffBackground(int times, int endingWithLightsOn) {
	for (int count = 0; count < times; count++) {
      backgroundOnOutsideIn();
      delay(ish);
		if (count + 1 != times || !endingWithLightsOn) {
			backgroundOffInsideOut();
	        delay(ish);
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

void insideOutOutsideInBackground() {
	for (int i = 0; random(3, 8); i++) {
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
	}
}

void racingOnLeftToRightBackground() {
	for (int x = 0; x < sizeof(background); x++) {
		for (int y = 0; y < sizeof(background) - x - 1; y++) {
			digitalWrite(background[y], PATTERN_ON);
			delay(minimal);
			digitalWrite(background[y], PATTERN_OFF);
		}

		digitalWrite(background[sizeof(background) - x - 1], PATTERN_ON);
		delay(minimal);
	}
}

void blinkBackgroundPairLeftToRight() {
	int half = sizeof(background) / 2;

	for (int count = 0; count < random(5, 10); count++) {
		for (int x = 0; x < half; x++) {
			digitalWrite(background[x], PATTERN_ON);
			digitalWrite(background[x + half], PATTERN_ON);
			delay(minimal);

			digitalWrite(background[x], PATTERN_OFF);
			digitalWrite(background[x + half], PATTERN_OFF);
		}
	}
}

void blinkLetters(int times) {
    for (int x = 0; x < times; x++) {
        lettersAllOff();
        delay(blinky);

        lettersAllOn();
        delay(blinky);
    }
}

void blinkBackground(int times) {
	for (int x = 0; x < times; x++) {
	    backgroundAllOff();
	    delay(blinky);

	    backgroundAllOn();
	    delay(blinky);
	}

	delay(normal);
}

void flickerPattern() {
	allOn();

	for (int i = 0; i < random(5, 10); i++) {
		int pin = random(0, 2) == 0 ? letters[random(0, sizeof(letters))] : background[random(0, sizeof(background))];
		
		digitalWrite(pin, PATTERN_OFF);
		delay(random(minimal / 10, minimal / 2));
		digitalWrite(pinMode, PATTERN_ON);
		delay(ish);
	}
}

// Randomness

void runClassic() {
    lettersOnLeftToRight();
    classicBackground();
}

void runTracer() {
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

void runLetterPattern() {
	// if new patterns are added, add a new case statement, and bump up the max random value by one
	switch (random(0, 2)) {
	case 0: { lettersOnLeftToRight(); break; }
	case 1: { blinkLetters(random(5, 10)); break; }
	default: { break; }
	}
}

void runBackgroundPattern() {
	switch(random(0, 4)) {
	case 0: { classicBackground(); break; }
	case 1: { insideOutOutsideInBackground(); break; }
	case 2: { racingOnLeftToRightBackground(); break; }
	case 3: { blinkBackground(random(5, 10)); backgroundAllOn(); break; }
	}
}

// Arduino loop

void loop() {
    allOff();

	int blinkMin = 1;
	int blinkMax = 0;
	int possibility = random(0, 100);
    if (possibility < 20) {
		runTracer();

		blinkMax = 1;
    } else if (possibility < 70) {
        runClassic();

        blinkMax = 3;
	} else if (possibility < 95) {
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
	} else {
		flickerPattern();
		blinkMin = 0;
	}

   	blinkLetters(random(blinkMin, blinkMax));

   	lettersAllOff();

    delay(ish);
}

