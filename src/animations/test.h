#ifndef TEST_H
#define TEST_H

#include "interfaces/IAnimation.h"

class Test: public IAnimation{
     public:
        Test(Adafruit_NeoPixel* leds_);
        void display() override;
     private:
        void pulsating_galaxy();
};

#endif