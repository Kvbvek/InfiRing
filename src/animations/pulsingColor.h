#ifndef PULSINGCOLOR_H
#define PULSINGCOLOR_H

#include "interfaces/IAnimation.h"

class PulsingColor: public IAnimation{
     public:
        PulsingColor(Adafruit_NeoPixel* leds_);
        void display() override;
     private:
        void pulsingColor(uint32_t color, Adafruit_NeoPixel* leds_);
};

#endif