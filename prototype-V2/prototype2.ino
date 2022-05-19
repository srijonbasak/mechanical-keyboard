#include <Keypad.h>

const byte row = 3;
const byte col = 10;

char keys[row][col] = {
  {'q','w','e','r','t','y','u','i','o','p'},
  {'a','s','d','f','g','h','j','k','l',' '},
  {'z','x','c','v','b','n','m','@','#','$'}
  };

byte rowPins[row] = {A0,A1,A2};
byte colPins[col] = {2,3,4,5,6,7,8,9,10,11};

Keypad ckeypad = Keypad(makeKeymap(keys),rowPins, colPins, row, col);

void setup() {
  Serial.begin(9600);

}

void loop() {
  char ckey ;
  ckey = ckeypad.getKey();
  if (ckey){
    Serial.print(ckey);
    }

}
