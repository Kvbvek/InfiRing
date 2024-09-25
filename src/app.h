#ifndef APP_H
#define APP_H

#include <Adafruit_NeoPixel.h>
#include "interfaces/IAnimation.h"


class App{
    public:
        App();
        void init();
        void update();
    private:
        Adafruit_NeoPixel* leds;
        IAnimation* animation;
};

#endif