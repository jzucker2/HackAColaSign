typedef enum {     // pos: x, y
    HackH = 48,    //  Lh: 2, 1
    HackA = 26,    //  La: 0, 3
    HackC = 24,    //  Lc: 3, 0
    HackK = 46,    //  Lk: 2, 2
    MiddleA = 36,  //  -a: 2, 1
    ColaC = 38,    //  Rc: 1, 1
    ColaO = 28,    //  Ro: 0, 1
    ColaL = 40,    //  Rl: 0, 1
    ColaA = 30,    //  Ra: 0, 0
    RedZero = 44,  //  B0: 3, 2
    RedOne = 34,   //  B1: 3, 1
    RedTwo = 50,   //  B2: 0, 2
    RedThree = 42, //  B3: 4, 2
    RedFour = 22,  //  B4: 4, 0
    RedFive = 32   //  B5: 4, 1
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
