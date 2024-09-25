#include "app.h"
#include "interfaces/IAnimation.h"
#include "animations/animations.h"

#include "animations/test.h"

#define LED_PIN    5
#define LED_COUNT 60

#ifdef __AVR__
 #include <avr/power.h> // Required for 16 MHz Adafruit Trinket
#endif

App::App(){
    leds = new Adafruit_NeoPixel(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);
    // Argument 3 = Pixel type flags, add together as needed:
    //   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
    //   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
    //   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
    //   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
    //   NEO_RGBW    Pixels are wired for RGBW bitstream (NeoPixel RGBW products)
}


void App::init(){
    leds->begin();
    leds->clear();         
    leds->show();
    leds->setBrightness(255);  //(max = 255)
    this->animation = nullptr;
}

void App::update(){
    animation = new AcceleratingDot(leds);
    animation->display();
}