#ifndef ROTATINGWAVE_H
#define ROTATINGWAVE_H

#include "interfaces/IAnimation.h"

class RotatingWave: public IAnimation{
     public:
        RotatingWave(Adafruit_NeoPixel* leds_);
        void display() override;
     private:
        void rotatingWave();
};

#endif