#ifndef ACCELERATINGDOT_H
#define ACCELERATINGDOT_H

#include "interfaces/IAnimation.h"

class AcceleratingDot: public IAnimation{
     public:
        AcceleratingDot(Adafruit_NeoPixel* leds_);
        void display() override;
     private:
        void acceleratingDot(uint32_t color);
};

#endif