#include <Arduino.h>
#include <stdlib.h>

void setup(){
  Serial.begin(9600);
}

void loop(){
  while(Serial.available()){

    char teclado = Serial.read();
    switch(teclado){
      case '':
        break;
      default:
        exit(0);
    }
  }
}