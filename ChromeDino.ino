
#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards
int pos = 0;  
// the setup routine runs once when you press reset:
void setup() {
// initialize serial communication at 9600 bits per second:
Serial.begin(9600);
myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}
void jump(){
  
     myservo.write(90);            
     pos=90; 
}
void rest(){
   
     myservo.write(140);              
     pos=160;                                                                                                                 
   	 delay(250);
}
// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A5);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  int voltage = sensorValue ;
  // print out the value you read:
  Serial.println(voltage);
  if(voltage<895){
    rest();
  }
  if(voltage>900){
    jump();
  }
}
