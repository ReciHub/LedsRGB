#include "LedsRGB.h"

LedRGB::LedRGB(int p1, int p2, int p3){
    pinMode(p1, OUTPUT);
    pinMode(p2, OUTPUT);
    pinMode(p3, OUTPUT);

    pino1 = p1;
    pino2 = p2;
    pino3 = p3;
}

void LedRGB::ligarTodos(){
    digitalWrite(pino1, HIGH);
    digitalWrite(pino2, HIGH);
    digitalWrite(pino3, HIGH);
}


void LedRGB::desligarTodos(){
  digitalWrite(pino1, LOW);
  digitalWrite(pino2, LOW);
  digitalWrite(pino3, LOW);
}
