// -- Classe que molda o comportamento do sensor QRE1113 --
// -- Plataforma: Arduino --
// -- Autor: Allan Cedric --

#ifndef __QRE1113_ARDUINO_H__
#define __QRE1113_ARDUINO_H__

// --- Bibliotecas ---
#include <Arduino.h>

#define STD_REFLECTANCE 200

// --- Classe QRE1113 ---
class QRE1113
{
private:
    uint8_t _pin;               // Pino do sensor
    uint16_t _ReflectanceLevel; // Nível de refletância

public:
    // Construtor
    QRE1113(uint8_t pin);

    // Retorna o valor analógico lido pelo sensor
    uint16_t read();

    // Verifica se uma superfície está refletindo, se baseia no atributo _ReflectanceLevel
    uint8_t isReflecting();

    // Retorna o nível de refletância atual
    uint16_t getReflectanceLevel();

    // Seta um nível de refletância
    void setReflectanceLevel(uint16_t ReflectanceLevel);
};

#endif