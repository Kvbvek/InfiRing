#ifndef ACCELERATINGDOT_H
#define ACCELERATINGDOT_H

#include "interfaces/IAnimation.h"

class AcceleratingDot: public IAnimation{
     public:
         AcceleratingDot(Adafruit_NeoPixel* leds_);
         void display() override;
     private:
         void acceleratingDot(uint32_t color);
         // int currLed;
         // unsigned long currTime;
         const int max_delay = 100;
         const int min_delay = 10;
         const int num_leds = 60;
         int delay_time;
         bool increasing_speed;
         // static void (*ISR_display)();
};

#endif