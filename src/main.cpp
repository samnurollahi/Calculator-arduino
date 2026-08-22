#include <Arduino.h>
#include <keypad.h>

char keys[4][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'},
    {'*', '0', '#'},
};

byte rowPins[3] = {6, 7, 8};
byte colPins[4] = {2, 3, 4, 9};

Keypad keypad(makeKeymap(keys), rowPins, colPins, 3, 4);

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  char key = keypad.getKey();
  if (key)
  {
    Serial.println(key)
  }
}