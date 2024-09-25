#include "rotatingWave.h"

const int num_leds = 60;
const int wave_length = 15;  // Długość fali
const int delay_ms = 25;
int offset = 0;

void RotatingWave::rotatingWave() {
    leds->clear();
    for(int i = 0; i < num_leds; i++){
      int brightness = 128 + 127 * sin(2 * PI * (i + offset) / wave_length);  // Wzór sinusoidalny dla fali
      leds->setPixelColor(i, brightness, 255 - brightness, 255 - brightness);
    }
    leds->show();
    delay(delay_ms);
    offset = (offset + 1) % num_leds;
}

void RotatingWave::display(){
  rotatingWave();
}

RotatingWave::RotatingWave(Adafruit_NeoPixel* leds_){
  this->leds = leds_;
};