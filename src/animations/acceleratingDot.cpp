#include "acceleratingDot.h"

const int num_leds = 60;
const int max_delay = 100;
const int min_delay = 10;

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
  acceleratingDot(leds->Color(212,125,126));
}

AcceleratingDot::AcceleratingDot(Adafruit_NeoPixel* leds_){
  this->leds = leds_;
};