#include "Constants.h"

void setup() {
    for (int i = 0; i < sizeof(Lights); i++) {
        pinMode(Lights[i], OUTPUT);
    }
}

void loop() {
    for (int i = 0; i < sizeof(Lights); i++) {
      digitalWrite(i, HIGH);
    }

    for (int i = 0; i < sizeof(Lights); i++) {
      digitalWrite(Lights[i], LOW);
      delay(1000);
      digitalWrite(Lights[i], HIGH);
      delay(1000);
    }
}
