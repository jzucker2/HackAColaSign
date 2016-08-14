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
    minimal = 375,
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
    
    for (int i = 0; i < 6; i++) {
        digitalWrite(background[i], PATTERN_ON);
        delay(minimal);
    }

    delay(extended);

    for (int i = 6 - 1; i >= 0; i--) {
        digitalWrite(background[i], PATTERN_OFF);
        delay(minimal);
    }

        delay(normal);

    for (int i = 0; i < 10; i++) {
        digitalWrite(letters[i], PATTERN_OFF);
    }

    delay(ish);
}
