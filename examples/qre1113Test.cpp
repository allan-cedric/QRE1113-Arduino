#include <QRE1113-Arduino.h>

QRE1113 sensor(A0);

void setup()
{
    Serial.begin(9600);
    sensor.setReflectanceLevel(400);
}

void loop()
{
    if(sensor.isReflecting())
        Serial.println("reflected");
    else
        Serial.println("NOT reflected");
    delay(200);
}
