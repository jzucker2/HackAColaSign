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

typedef enum {
    none = 0,
    blinky = 1000,
    minimal = 500,
    normal = 800,
    ish = 2000,
    extended = 4000
} interval;

#define log(x, ...)
