#include <Keypad.h>

const byte ROWS = 3;
const byte COLS = 10;

char hexaKeys[ROWS][COLS] = {
	{'q','w','e','r','t','y','u','i','o','p'},
	{'a','s','d','f','g','h','j','k','l','-'},
	{'z','x','c','v','b','n','m','-','-','-'}
};
 
byte rowPins[ROWS] = {10, 11, 12};
byte colPins[COLS] = {0,1,2,3,4,5,6,7,8,9};
 
Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);
 
void setup() {
  Serial.begin(9600);
}
 
void loop() {
  char customKey = customKeypad.getKey();
 
  if (customKey) {
    Serial.println(customKey);
  }
}