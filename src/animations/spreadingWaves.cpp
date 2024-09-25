#include "spreadingWaves.h"

const int num_leds = 60;
const int delay_ms = 20;
const int wave_interval = 10;  // Odstęp między falami

void SpreadingWaves::spreadingWaves() {
    int center = num_leds / 2;  // Środek pierścienia
    for(int wave_position = 0; wave_position < num_leds; wave_position++){
        leds->clear();
        for(int i = 0; i < num_leds; i++){
            int distance = abs(i - center);
            if(distance % wave_interval == wave_position % wave_interval){
                leds->setPixelColor(i, 0, 0, 255);  // Niebieskie fale
            }
        }
        leds->show();
        delay(delay_ms);
    }
}

void SpreadingWaves::display(){
  spreadingWaves();
}

SpreadingWaves::SpreadingWaves(Adafruit_NeoPixel* leds_){
  this->leds = leds_;
};