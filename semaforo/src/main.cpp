#include <Arduino.h>
#include <stdlib.h>

//portas dos leds
const int vermelho = 7;
const int amarelo = 5;
const int verde = 2;

int teclado = 0;

void fechar(int velocidade){
  delay(velocidade*1000);
}

void setup(){
  Serial.begin(9600);
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop(){
  
  if (Serial.available() > 0) {
    teclado = ((Serial.read()) - (48));
    Serial.print("Velocidade arduino: ");
    Serial.println(teclado);
  }

  fechar(teclado);
  digitalWrite(vermelho, LOW);
  digitalWrite(amarelo, HIGH);
  digitalWrite(verde, LOW);

  fechar(teclado);
  digitalWrite(amarelo, LOW);
  digitalWrite(vermelho, HIGH);

  fechar(teclado);
  digitalWrite(verde, HIGH);
  digitalWrite(vermelho, LOW);
}