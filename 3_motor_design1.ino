#include <Servo.h>

//declaring pin locations
const int servo1pin = 3;

const int pot1pin = A0;

int pot1;

//decalre servo angle, start at 90deg
int servo1angle = 90; 

int delayTime = 20;

//servo motor object
Servo servo1; 

void setup() {
  //atach servo motor object to pins
  servo1.attach(servo1pin);
 }

void loop() {
  //read potentiometer state
  pot1 = analogRead(pot1pin);
  
  // map the potentiometer reading (0-1023)
  // to the servo reading (0-180)
  servo1angle = map(pot1, 0, 1023, 0, 180);
  
  //apply changes
  servo1.write(servo1angle); 
 
  delay(delayTime); 

}