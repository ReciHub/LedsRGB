/*
  Código exemplo Blink da biblioteca LedsRGB
*/
#include "LedsRGB.h"

// Os valores dos pinos utilizados são 10,11,12

LedRGB meuLed = LedRGB(10, 11, 12);

void setup(){
}

void loop(){
  meuLed.ligarTodos(); //manda todas as portas para HIGH, deixando o led da cor branca
  delay(500);
  meuLed.desligarTodos(); //apaga todos
  delay(500);
}
