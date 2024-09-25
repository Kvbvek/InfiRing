#ifndef SPREADINGWAVES_H
#define SPREADINGWAVES_H

#include "interfaces/IAnimation.h"

class SpreadingWaves: public IAnimation{
     public:
        SpreadingWaves(Adafruit_NeoPixel* leds_);
        void display() override;
     private:
        void spreadingWaves();
};

#endif