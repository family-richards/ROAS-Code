#include "ROASArdLib.h"

ROASArdLib roaslib = ROASArdLib;

ROASSetupInfo() {
const String ROASVersion = "MOST_RECENT_ROAS_VERSION";

int PinsToUseNum[14] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
const char PinsToUseMode[14] = {OUTPUT, OUTPUT, OUTPUT, INPUT, OUTPUT, INPUT, OUTPUT, INPUT, OUTPUT, INPUT, OUTPUT, INPUT, INPUT, OUTPUT};

}

void setup() {
roaslib.begin(roaslib);
roaslib.beginsetup();
for (int i = 0; i < 14; i++) {
pinMode(PinsToUseNum[i], PinsToUseMode[i]);
}
roaslib.endsetup();
}

void loop() {
roaslib.beginloop();
roaslib.loopsetup();
roaslib.endloop();
}
