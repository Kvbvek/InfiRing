#include "acceleratingDot.h"
#include <TimerOne.h>

void AcceleratingDot::acceleratingDot(uint32_t color){
  int delay_time = max_delay;
  bool increasing_speed = true;

  for(int i = 0; i < num_leds; i++){
    leds->clear();
    leds->setPixelColor(i, color);
    leds->show();
    delay(delay_time);

    if(increasing_speed){
      delay_time -= 2;
      if(delay_time <= min_delay) increasing_speed = false;
    } 
    else{
      delay_time += 2;
      if(delay_time >= max_delay) increasing_speed = true;
    }
  }
}

void AcceleratingDot::display(){
  AcceleratingDot::acceleratingDot(leds->Color(212,125,126));
}

AcceleratingDot::AcceleratingDot(Adafruit_NeoPixel* leds_){
  this->leds = leds_;
  this->delay_time = 50;
  this->increasing_speed = true;
  // this->currLed = 0;
  // this->currTime = 0;
  // this->ISR_display = display;
  // Timer1.initialize(delay_time*1000);
  // Timer1.attachInterrupt(ISR_display);
};
