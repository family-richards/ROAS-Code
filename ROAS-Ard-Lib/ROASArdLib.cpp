#include "ROASArdLib.h"
#include "Arduino.h"

int RoboPins[11];

String IfRunning = "No";
String IfDidSetup = "No";
String IfInLoop = "No"

_ROASClass::ROASBegin() {
  IfRunning = "Yes";
}

_ROASClass::beginsetup() {
  IfDidSetup = "No";
}

_ROASClass::endsetup() {
  IfDidSetup = "Yes";
}

_ROASClass::beginloop() {
  IfInLoop = "FirstCommand";
}

_ROASClass::loopsetup() {
  IfInLoop = "SecondCommand";
}
