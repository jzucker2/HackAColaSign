typedef enum {
    HackH = 48,
    HackA = 26,
    HackC = 24,
    HackK = 46,
    MiddleA = 36,
    ColaC = 38,
    ColaO = 28,
    ColaL = 40,
    ColaA = 30,
    RedZero = 44,
    RedOne = 34,
    RedTwo = 50,
    RedThree = 42,
    RedFour = 22,
    RedFive = 32
 } PatternToPin;

static int Lights[16] = {
    HackH,
    HackA,
    HackC,
    HackK,
    MiddleA,
    ColaC,
    ColaO,
    ColaL,
    ColaA,
    RedZero,
    RedOne,
    RedTwo,
    RedThree,
    RedFour,
    RedFive
};

#define PATTERN_OFF HIGH
#define PATTERN_ON LOW
#define PATTERN_INITIALIZE OUTPUT

typedef enum {
    none = 0,
    blinky = 1000,
    minimal = 500,
    normal = 800,
    ish = 2000,
    extended = 4000
} interval;

void setup() {
    for (int i = 0; i < 16; i++) {
        pinMode(Lights[i], PATTERN_INITIALIZE);
    }
}

void loop() {    
    for (int i = 0; i < 16; i++) {
      digitalWrite(Lights[i], PATTERN_OFF);
    }

    // turn letters on, one at a time
    int letters[] = {
        HackH,
        HackA,
        HackC,
        HackK,
        MiddleA,
        ColaC,
        ColaO,
        ColaL,
        ColaA,
    };
    
    for (int i = 0; i < 10; i++) {
        digitalWrite(letters[i], PATTERN_ON);
        delay(normal);
    }

    int background[] = {
        RedZero,
        RedOne,
        RedTwo,
        RedThree,
        RedFour,
        RedFive
    };

    // turn the background on from left to right
    for (int i = 0; i < 6; i++) {
        digitalWrite(background[i], PATTERN_ON);
        delay(minimal);
    }

    delay(extended);

    // turn the background off from right to left
    for (int i = 6 - 1; i >= 0; i--) {
        digitalWrite(background[i], PATTERN_OFF);
        delay(minimal);
    }

        delay(normal);

    // turn the background on from outside in
    for (int i = 0, j = 5; i < 3; i++, j--) {
        digitalWrite(background[i], PATTERN_ON);
        delay(none);
        digitalWrite(background[j], PATTERN_ON);
        delay(minimal);
    }

    delay(extended);

    // turn the background off from inside out
    for (int i = 2, j = 3; i >= 0; i--, j++) {
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
