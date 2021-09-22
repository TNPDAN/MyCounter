#ifndef _MYCOUNTER_H_
#define _MYCOUNTER_H_

#include <Arduino.h>

#define DEFAULT_ACTIVE LOW


class MyCounter {

  public:
    MyCounter(int btnPin,
              int ledPin,
              int timeSecond = 10,
              bool btnPinActive = DEFAULT_ACTIVE,
              bool ledPinActive = DEFAULT_ACTIVE);

    //destructor
    ~MyCounter();

    //set time Second
    void setTimeSecond(int timeSecond);

    //loop
    void loop();

  private:
     int btnPin;
     int ledPin;
     int timeSecond;
     bool btnPinActive;
     bool ledPinActive;

     uint32_t _NEXT;
    

};

#endif
