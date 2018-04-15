#ifndef LedsRGB
#define LedsRGB

#include "Arduino.h"

class LedRGB{
    public:
          LedRGB(int p1, int p2, int p3);
          void ligarTodos();
          void desligarTodos();
    private:
          int pino1;
          int pino2;
          int pino3;
  };


#endif
