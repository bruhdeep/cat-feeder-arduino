#include <Servo.h>

Servo servo1;

//configuring the ports
int trigPin = 9;
int echoPin = 8;
long distance;
long duration;

void setup(){
  Serial.begin(9600);
  servo1.attach(7); 
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}


void loop(){
  ultra_sonic();
  servo1.write(90);
  if(distance==25  distance==26  distance==27){
    Serial.println(distance);
    servo1.write(180);
    delay(4000);
    servo1.write(90);
  }
  else{
    Serial.println(distance);
  }
  delay(4000);//acts as global delay
}

//to check the distance
void ultra_sonic(){
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration*0.034/2;
  }