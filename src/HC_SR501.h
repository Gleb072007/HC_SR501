#ifndef HC_SR501_H
#define HC_SR501_H
#include <Arduino.h>

class HC_SR501 {
    unsigned short pin { 0 };
public:
    HC_SR501(){};
    HC_SR501(unsigned short p):pin(p) { pinMode(pin, INPUT); }
    int getValue() { return analogRead(pin); }
};

#endif