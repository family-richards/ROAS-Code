#include "ROASArdLib.h"
#include "Arduino.h"

int RoboPins[11];

String IfRunning = "No";

_ROASClass::ROASBegin() {
  IfRunning = "Yes";
}
