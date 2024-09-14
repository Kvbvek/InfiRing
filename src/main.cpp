#include <Arduino.h>
#include "app.h"

App* app = new App();

void setup(){
  // Serial.begin(9600);
  app->init();
}

void loop(){
  app->update();
}