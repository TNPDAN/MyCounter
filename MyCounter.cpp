#include "MyCounter.h"

MyCounter::MyCounter( int btnPin,
               int ledPin,
               int timeSecond,
               bool btnPinActive,
               bool ledPinActive)
{
  this->btnPin = btnPin;
  this->ledPin = ledPin;
  this->btnPinActive = btnPinActive;
  this->ledPinActive = ledPinActive;
    
  pinMode(this->btnPin, INPUT);
  pinMode(this->ledPin, OUTPUT);
}

MyCounter::~MyCounter()
{
  //do nothing
}

void MyCounter::setTimeSecond(int timeSecond)
{
  //Set time to 5 Seconds
  this->timeSecond = timeSecond;
  if(this->timeSecond)
  {
    _NEXT = millis() + 500;
  }
}

void MyCounter::loop()
{
  uint32_t cur = millis();
  if(timeSecond)
  {
    if (cur >= _NEXT) {
      digitalWrite(ledPin, !digitalRead(ledPin));
      _NEXT = cur + 500;
      Serial.println("Time left :");
    } else {
      digitalWrite(ledPin, this->ledPinActive == LOW ? HIGH : LOW);
    }
  }
  
}
