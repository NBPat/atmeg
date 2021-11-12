// https://www.hackster.io/yeshvanth_muniraj/accessing-i-o-in-atmega328p-arduino-using-assembly-and-c-10e063
// make new tab with <directory>.S 
extern "C" {
  // function prototypes
  void start();
  void forever();
}

void setup() {
  start();
}

void loop() {
  forever();
}
