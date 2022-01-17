#include <Arduino.h>
#include "HC_SR501.h"
#include "Timer.h"

#define HC_PIN A0
#define HC_DELAY 1000

HC_SR501 hc(HC_PIN);
Timer timer(HC_DELAY);

void setup() {
  Serial.begin(115200);
}

void loop() {
  if(timer.getTimer()){
    Serial.println(hc.getValue());
    timer.setTimer();
  }
}