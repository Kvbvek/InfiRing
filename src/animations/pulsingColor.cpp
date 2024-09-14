#include "pulsingColor.h"

const int num_leds = 60;
const int delay_ms = 25;
int brightness = 0;
bool increasing = true;

void PulsingColor::pulsingColor(uint32_t color, Adafruit_NeoPixel* leds_){ //todo poprawic to itp
    for(int i = 0; i < num_leds; i++){
        leds_->setPixelColor(i, color);
    }
    leds_->setBrightness(brightness);  //setup brightness
    leds_->show();
    delay(delay_ms);

    // increase or decrease brightness
    if(increasing){
      brightness += 5;
      if(brightness >= 255) increasing = false;
    } 
    else{
      brightness -= 5;
      if(brightness <= 0) increasing = true;
    }
}

void PulsingColor::display(){
  pulsingColor(leds->Color(200,25,25),leds);
}

PulsingColor::PulsingColor(Adafruit_NeoPixel* leds_){
  this->leds = leds_;
};