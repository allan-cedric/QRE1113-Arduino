// -- Implementação da classe QRE1113 --
// -- Plataforma: Arduino --
// -- Autor: Allan Cedric --

#include "QRE1113-Arduino.h"

QRE1113::QRE1113(uint8_t pin)
{
    _pin = pin;
    pinMode(_pin, INPUT);                          // Seta o pino do sensor como INPUT
    QRE1113::setReflectanceLevel(STD_REFLECTANCE); // Seta um nível de refletância padrão
}

uint16_t QRE1113::read()
{
    return (uint16_t)analogRead(_pin);
}

uint8_t QRE1113::isReflecting()
{
    return (QRE1113::read() <= QRE1113::getReflectanceLevel());
}

uint16_t QRE1113::getReflectanceLevel()
{
    return _ReflectanceLevel;
}

void QRE1113::setReflectanceLevel(uint16_t ReflectanceLevel)
{
    _ReflectanceLevel = ReflectanceLevel;
}