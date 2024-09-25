#include "test.h"

// const int num_leds = 60;
// const int min_speed = 5;
// const int max_speed = 120;
// const float speed_change_rate = 0.02;  // Szybkość zmiany prędkości

// int position = 0;
// int direction = 1;
// float speed = (min_speed + max_speed) / 2;
// float speed_offset = 0;

// void Test::pulsating_galaxy() {

//     leds->clear();
//     leds->setPixelColor(position, 0, 0, 255);  // Niebieski punkt
//     leds->show();
//     delay(int(speed));

//     // Zmiana prędkości w sposób płynny
//     speed = (sin(speed_offset * PI) + 1) * (max_speed - min_speed) / 2 + min_speed;
//     speed_offset += speed_change_rate;
//     if (speed_offset >= 2.0) speed_offset -= 2.0;

//     position = (position + direction + num_leds) % num_leds;
// }
const int num_leds = 60;
const int delay_ms = 30;

    int hue = 0;
void Test::pulsating_galaxy() {


     


    for (int i = 0; i < num_leds; i++) {
      int current_hue = (hue + i * 65536 / num_leds) & 65535;  // Kolory przesunięte o `hue`
      uint32_t color = leds->ColorHSV(current_hue, 255, 255);  // Ustawienie pełnego nasycenia i jasności
      leds->setPixelColor(i, color);
    }

    leds->show();
    delay(delay_ms);
    hue += 256;  // Powolne przesuwanie koloru
}

void Test::display(){
  pulsating_galaxy();
}

Test::Test(Adafruit_NeoPixel* leds_){
  this->leds = leds_;
};