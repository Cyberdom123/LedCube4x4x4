#include "Arduino.h"

int i = 0;
int x = 0;

#define clear 2
#define set 3
#define clk 9

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(9, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);

  digitalWrite(2, LOW);
  delay(100);
  digitalWrite(2, HIGH);

  digitalWrite(3, HIGH);

  for (int i = 0; i < 17; ++i){
    digitalWrite(3, HIGH);
    digitalWrite(9, HIGH);
    delay(1);
    digitalWrite(9, LOW);
    delay(1);
  }
  //Layers  
  digitalWrite(4, HIGH);  
  digitalWrite(5, HIGH);  
  digitalWrite(6, HIGH);  
  digitalWrite(7, HIGH); 
}


void Rain(){

  digitalWrite(4, LOW);  
  digitalWrite(5, LOW);  
  digitalWrite(6, LOW);  
  digitalWrite(7, LOW); 
  
  int a = random(15);
  int b = random(3);
  delay((b * 0.5 + 2) * 400);

  digitalWrite(3, LOW);
  digitalWrite(9, HIGH);
  delay(1);
  digitalWrite(9, LOW);
  digitalWrite(3, HIGH);
  delay(1);

  for (int i = 0; i < a; ++i)
  {
    digitalWrite(9, HIGH);
    delay(1);
    digitalWrite(9, LOW);
    delay(1);
  }

  for (int i = 5; i > 0; --i)
  {
    if(i == 1){
    digitalWrite(4, HIGH);  
    digitalWrite(5, LOW);  
    digitalWrite(6, LOW);  
    digitalWrite(7, LOW);
    }
    if(i == 2){
    digitalWrite(4, LOW);  
    digitalWrite(5, HIGH);  
    digitalWrite(6, LOW);  
    digitalWrite(7, LOW);
    }    
    if(i == 3){
    digitalWrite(4, LOW);  
    digitalWrite(5, LOW);  
    digitalWrite(6, HIGH);  
    digitalWrite(7, LOW);
    }
    if(i == 4){
    digitalWrite(4, LOW);  
    digitalWrite(5, LOW);  
    digitalWrite(6, LOW);  
    digitalWrite(7, HIGH);      
    }    

    delay(180 - (i * 29));
  }
}
void Rain2(){

  digitalWrite(4, LOW);  
  digitalWrite(5, LOW);  
  digitalWrite(6, LOW);  
  digitalWrite(7, LOW); 
  
  int a = random(15);
  int b = random(3);
  delay((b * 0.5 + 2) * 400);

  digitalWrite(3, LOW);
  digitalWrite(9, HIGH);
  delay(1);
  digitalWrite(9, LOW);
  digitalWrite(3, HIGH);
  delay(1);

  for (int i = 0; i < a; ++i)
  {
    digitalWrite(9, HIGH);
    delay(1);
    digitalWrite(9, LOW);
    delay(1);
  }

  for (int i = 0; i < 5; ++i)
  {
    if(i == 1){
    digitalWrite(4, LOW);  
    digitalWrite(5, LOW);  
    digitalWrite(6, LOW);  
    digitalWrite(7, HIGH);
    }
    if(i == 2){
    digitalWrite(4, LOW);  
    digitalWrite(5, LOW);  
    digitalWrite(6, HIGH);  
    digitalWrite(7, HIGH);
    }    
    if(i == 3){
    digitalWrite(4, LOW);  
    digitalWrite(5, HIGH);  
    digitalWrite(6, HIGH);  
    digitalWrite(7, HIGH);
    }
    if(i == 4){
    digitalWrite(4, HIGH);  
    digitalWrite(5, HIGH);  
    digitalWrite(6, HIGH);  
    digitalWrite(7, HIGH);      
    }    

    delay(150 - (i * 29));
  }
}
void OneLed(){
    digitalWrite(4, HIGH);  
    digitalWrite(5, HIGH);  
    digitalWrite(6, HIGH);  
    digitalWrite(7, HIGH); 
  for (int i = 0; i < 16 * 6; ++i){
    digitalWrite(3, HIGH);
    digitalWrite(9, HIGH);
    delay(30);
    digitalWrite(9, LOW);
    delay(30);
    i++;

    if(i == 17){
      digitalWrite(2, LOW);
      delay(10);
      digitalWrite(2, HIGH);
    }
  }
    int a = random(8);
    delay(10000 * a);
    digitalWrite(4, LOW);  
    digitalWrite(5, LOW);  
    digitalWrite(6, LOW);  
    digitalWrite(7, LOW); 
}

void AnimationTest(){
  for (int z = 0; z < 16*8; ++z)
  {

    digitalWrite(9, HIGH);
  if(i%3 == 0){
    digitalWrite(3, LOW);    
  }
  delay(15);
  digitalWrite(9, LOW);
  if(i%3 == 0){
    digitalWrite(3, HIGH);    
  }
  delay(15);
  i++;

  if(i == 17){
    i = 0;
    digitalWrite(2, LOW);
    delay(20);
    digitalWrite(2, HIGH);
  }

  if(x == 1){
    digitalWrite(4, HIGH);  
  }
  if(x == 4){
    digitalWrite(5, HIGH);  
  }
  if(x == 8){
    digitalWrite(6, HIGH);  
  }
  if(x == 12){
    digitalWrite(7, HIGH);  
  }
  if(x == 16)
  {
    digitalWrite(4, LOW);  
    digitalWrite(5, LOW);  
    digitalWrite(6, LOW);  
    digitalWrite(7, LOW);
    delay(4000); 
    x = 0;
  }
  x++;
  }
}

// the loop function runs over and over again forever
void loop() {
  Rain();
}
