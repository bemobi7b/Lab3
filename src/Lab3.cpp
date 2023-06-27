/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/Rich/CTD2023/Lab3/src/Lab3.ino"
void setup();
void loop();
#line 1 "c:/Users/Rich/CTD2023/Lab3/src/Lab3.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
uint16_t red;
uint16_t blue;
uint16_t green;
uint16_t i = 0;
void setup()
{
    pinMode(D2, OUTPUT);
    pinMode(D3, OUTPUT);
    pinMode(D4, OUTPUT);
}
void loop()
{
    red = 0;
    blue = 0;
    green = 0;
    analogWrite(D2, blue);
    analogWrite(D3, red);
    analogWrite(D4, green);
    for (i = 0; i < 255; i = i + 2)
    {
        red = i;
        analogWrite(D3, red);
        delay(20);
    }
    for (i = 0; i < 255; i = i + 2)
    {
        green = i;
        analogWrite(D4, green);
        delay(20);
    }
    for (i = 0; i < 255; i = i + 2)
    {
        blue = i;
        analogWrite(D2, blue);
        delay(20);
    }
    delay(500);
    for (i = 0; i < 255; i = i - 2)
    {
        red = i;
        analogWrite(D3, red);
        delay(20);
    }
    for (i = 0; i < 255; i = i - 2)
    {
        green = i;
        analogWrite(D4, green);
        delay(20);
    }
    for (i = 0; i < 255; i = i + 2)
    {
        blue = i;
        analogWrite(D2, blue);
        delay(20);
    }
    delay(500);
    for (i = 0; i < 255; i = i + 2)
    {
        red = i;
        analogWrite(D3, red);
        delay(20);
    }
    for (i = 0; i < 255; i = i - 2)
    {
        green = i;
        analogWrite(D4, green);
        delay(20);
    }
    for (i = 0; i < 255; i = i + 2)
    {
        blue = i;
        analogWrite(D2, blue);
        delay(20);
    }
    delay(500);
    for (i = 0; i < 255; i = i - 2)
    {
        red = i;
        analogWrite(D3, red);
        delay(20);
    }
    for (i = 0; i < 255; i = i - 2)
    {
        green = i;
        analogWrite(D4, green);
        delay(20);
    }
    for (i = 0; i < 255; i = i - 2)
    {
        blue = i;
        analogWrite(D2, blue);
        delay(20);
    }
    delay(500);
    for (i = 0; i < 255; i = i - 2)
    {
        red = i;
        analogWrite(D3, red);
        delay(20);
    }
    for (i = 0; i < 255; i = i - 2)
    {
        green = i;
        analogWrite(D4, green);
        delay(20);
    }
    for (i = 0; i < 255; i = i - 2)
    {
        blue = i;
        analogWrite(D2, blue);
        delay(20);
    }
}
// delay(500);
// blue = rand() % 256;
// red = rand() % 256;
// green = rand() % 256;
// analogWrite(D2, blue);
// analogWrite(D3, red);
// analogWrite(D4, green);