#include "MyCounter.h"

#define PIN_BUTTON 0
#define PIN_LED    16

MyCounter counter(PIN_BUTTON,PIN_LED);

void setup() {

  //serial setup
  Serial.begin(115200);

  //change counter time to five seconds
  counter.setTimeSecond(5);
  
}

void loop() {

  //counter event handler
  counter.loop();
}
