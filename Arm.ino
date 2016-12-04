#include <Servo.h>

const int armMotorPin = 1;
const int armPotPin = A0;
const int kp = 1;

Servo armMotor;

void setArmPosition(int angle){
  Serial.println("Driving arm to angle " + angle);
  int error = 100;
  double potRead; 
  int angleConversion = angle * 25;
  
  while(error > 20){
    potRead; = analogRead(armPotPin);
    error = (int)(potRead - angleConversion);
    driveArm(kp * error);
  }

  
}

void setup() {
  armMotor.attach(armMotorPin, 1000, 2000);
  pinMode(armPotPin, INPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:

}
