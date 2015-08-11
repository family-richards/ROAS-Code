#ifdef ROASARDLIB_h
#define ROASARDLIB_h

#include "Arduino.h"

class _ROASClass
{
  void ROASBegin();
  void beginsetup();
  void endsetup();
  void beginloop();
  void loopsetup();
  void endloop();
  extern _ROASClass ROASArdLib;
  extern _ROASClass ROASLib;
}
#endif
