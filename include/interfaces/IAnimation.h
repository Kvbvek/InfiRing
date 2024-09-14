#ifndef IANIMATION_H
#define IANIMATION_H

#include <Adafruit_NeoPixel.h>

// @brief Abstract class for all Led animations, contains one loop of animation, so launch() should be placed in seperate loop
class IAnimation{
    public:
        virtual void display() = 0;
        virtual ~IAnimation(){};
    protected:
        Adafruit_NeoPixel* leds;
};

#endif