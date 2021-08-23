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
    uint16_t _levelReflectance; // Nível de refletância

public:
    // Construtor
    QRE1113(uint8_t pin);

    // Retorna o valor analógico lido pelo sensor
    uint16_t read();

    // Verifica se uma superfície está refletindo, se baseia no atributo _levelReflectance
    uint8_t isReflecting();

    // Retorna o nível de refletância atual
    uint16_t getLevelReflectance();

    // Seta um nível de refletância
    void setLevelReflectance(uint16_t levelReflectance);
};

#endif