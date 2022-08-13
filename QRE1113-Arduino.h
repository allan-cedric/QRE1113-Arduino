// -- QRE1113 Sensor Class --
// -- Plataform: Arduino --
// -- Author: Allan Cedric --

#ifndef __QRE1113_ARDUINO_H__
#define __QRE1113_ARDUINO_H__

// --- Libraries ---
#include <Arduino.h>

// --- Macros ---
#define STD_REFLECTANCE 200

// --- QRE1113 Class ---
class QRE1113
{
private:
    uint8_t _pin;               // Sensor pin
    uint16_t _ReflectanceLevel; // Reflectance level

public:
    /*!
        @brief  Constructor

        @param  pin Sensor pin
    */
    QRE1113(uint8_t pin);

    /*!
        @brief  Read sensor

        @return Analogic value
    */
    uint16_t read();

    /*!
        @brief  Check if a surface is reflecting based on a threshhold

        @return 1 if the surface is reflecting, otherwise 0
    */
    uint8_t isReflecting();

    /*!
        @brief  Current reflectance level

        @return Analogic value
    */
    uint16_t getReflectanceLevel();

    /*!
        @brief  Set a new reflectance level

        @param  ReflectanceLevel    Desired reflectance level
    */
    void setReflectanceLevel(uint16_t ReflectanceLevel);
};

#endif