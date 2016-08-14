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
 } Map;

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
static int LightCount = 16;

void setup() {
    for (int i = 0; i < LightCount; i++) {
        pinMode(Lights[i], OUTPUT);
    }
}

void loop() {
    for (int i = 0; i < LightCount; i++) {
      digitalWrite(i, HIGH);
    }
}
