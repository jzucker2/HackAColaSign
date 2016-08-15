#include "Constants.h"

void setup() {
    for (int i = 0; i < sizeof(Lights); i++) {
        pinMode(Lights[i], OUTPUT);
    }
}

void loop() {
    for (int i = 0; i < sizeof(Lights); i++) {
      digitalWrite(i, PATTERN_ON);
    }
}
