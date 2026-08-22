#include <Arduino.h>
#include <keypad.h>

char keys[4][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'},
    {'*', '0', '#'},
};

byte rowPins[3] = {6, 7, 8};
byte colPins[3] = {2, 3, 4, 9};

void setup()
{
}

void loop()
{
}