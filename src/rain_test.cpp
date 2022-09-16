#include <Arduino.h>


#define clear 2
#define set 3
#define clk 9


void rain(){
    digitalWrite(4,HIGH);
    delay(50);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    delay(50);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    delay(50);
    digitalWrite(6,LOW);
    digitalWrite(6,HIGH);
    delay(50); 
    digitalWrite(7,LOW);
}
void setup() {
  Serial.begin(9600);
  pinMode(clear, OUTPUT);
  pinMode(set, OUTPUT);
  pinMode(clk, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);


  digitalWrite(clear, LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
}

void loop() {
    digitalWrite(set,LOW);
    digitalWrite(clock,LOW);
    delayMicroseconds(50);
    digitalWrite(clock,HIGH);
    delayMicroseconds(50);
    digitalWrite(set,LOW);
    rain();
    for (int i = 0; i < 15;i++){
        digitalWrite(clock,LOW);
        delayMicroseconds(50);
        digitalWrite(clock,HIGH);
        delayMicroseconds(50);
        rain();
    }    
}