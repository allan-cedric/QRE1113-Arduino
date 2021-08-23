#include "QRE1113-Arduino.h"

QRE1113::QRE1113(uint8_t pin)
{
    _pin = pin;
    pinMode(_pin, INPUT);
    QRE1113::setLevelReflectance(STD_REFLECTANCE);
}

uint16_t QRE1113::read()
{
    return (uint16_t)analogRead(_pin);
}

uint8_t QRE1113::isReflecting()
{
    return (QRE1113::read() <= QRE1113::getLevelReflectance());
}

uint16_t QRE1113::getLevelReflectance()
{
    return _levelReflectance;
}

void QRE1113::setLevelReflectance(uint16_t levelReflectance)
{
    _levelReflectance = levelReflectance;
}