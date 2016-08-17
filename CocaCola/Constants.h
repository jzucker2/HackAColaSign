// you can pass one of these enum values into `digitalWrite();` as a pin, instead of having to know the raw pin value
// eg: `pinMode(HackH, PATTERN_INITIALIZE); digitalWrite(HackH, PATTERN_ON);` will turn the letter `H` on
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

// since you can't enumerate over an enum in C, enumerate over this instead, using `sizeof(Lights);` to know how many lights there are
//    eg:
//    for (int i = 0; i < sizeof(Lights); i++) {
//        pinMode(Lights[i], PATTERN_INITIALIZE);
//        digitalWrite(Lights[i], PATTERN_ON);
//    }
//    will turn on everything at once
static int Lights[] = {
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

// see above, but, enumerate over this to go through the letters on the sign from left to right
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

// also see above, but, enumerate over this to go through the background pieces of the sign from left to right
int background[] = {
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

// shared delay intervals, in milliseconds. these values are fairly arbitrary, and you don't have to use them, but, it's probably good to be consistent.
//    eg:
//    for (int i = 0; i < sizeof(Lights); i++) {
//        pinMode(Lights[i], PATTERN_INITIALIZE);
//        digitalWrite(Lights[i], PATTERN_ON);
//        delay(normal);
//    }
//    will turn on everything, with a delay of 0.8 seconds between each piece turning on
typedef enum {
    none = 0,
    minimal = 500,
    normal = 800,
    blinky = 1000,
    ish = 2000,
    extended = 4000
} interval;

// defined for the emulator, doesn't do anything when run otherwise
#define log(x, ...)

