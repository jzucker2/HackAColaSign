/*
  Debug

  This pattern:
  1. turns everything on the sign on
  2. turns one item off a second
  3. after everything is off, repeating forever, turning a letter on for a second, and back off
 */

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

static int everything[16] = {
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
static int count = 16;

// the setup function runs once when you press reset or power the board
void setup() {
    for (int i = 0; i < count; i++) {
        pinMode(everything[i], OUTPUT);
    }
}

// the loop function runs over and over again forever
void loop() {
    for (int i = 0; i < 16; i++) {
      digitalWrite(i, HIGH);
    }

    for (int i = 0; i < 16; i++) {
      digitalWrite(everything[i], LOW);
      delay(1000);
      digitalWrite(everything[i], HIGH);
      delay(1000);
    }
}
