// -- Classe que molda o comportamento do sensor QRE1113 --
// -- Plataforma: Arduino --
// -- Autor: Allan Cedric --

#ifndef __QRE1113_ARDUINO_H__
#define __QRE1113_ARDUINO_H__

// --- Bibliotecas ---
#include <Arduino.h>

// --- Macros ---
#define STD_REFLECTANCE 200

// --- Classe QRE1113 ---
class QRE1113
{
private:
    uint8_t _pin;               // Pino do sensor
    uint16_t _ReflectanceLevel; // Nível de refletância

public:
    /*!
        @brief  Construtor

        @param  pin Pino do sensor
    */
    QRE1113(uint8_t pin);

    /*!
        @brief  Realiza a leitura analógica do sensor

        @return Valor analógico
    */
    uint16_t read();

    /*!
        @brief  Verifica se o sensor está acusando alguma reflexão

        @return 1 se a superfície está refletindo, senão 0
    */
    uint8_t isReflecting();

    /*!
        @brief  Retorna o nível de refletância atual

        @return Nível de refletância atual
    */
    uint16_t getReflectanceLevel();

    /*!
        @brief  Seta um novo nível de refletância

        @param  ReflectanceLevel    Nível de refletância
    */
    void setReflectanceLevel(uint16_t ReflectanceLevel);
};

#endif