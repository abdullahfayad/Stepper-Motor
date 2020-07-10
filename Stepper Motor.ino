/*
  Controlling Stepper Motor
  by Abdullah Fayad
*/

#include <Stepper.h>//include the Stepper library

// Define number of steps per rotation:
int stepsPerRevolution = 2048;

// create object of stepper type and put the number of pin connected to it
Stepper stepo = Stepper(stepsPerRevolution, 8, 10, 9, 11);

void setup() {
}

void loop() {
  stepo.setSpeed(10);// Set the speed to 10 rpm
  stepo.step(stepsPerRevolution/2); // Step half revolution in one direction
  delay(100);
  stepo.setSpeed(15);// Set the speed to 15 rpm
  stepo.step(stepsPerRevolution);// Step one revolution in one direction
  delay(100);
  stepo.step(-stepsPerRevolution);// Step one revolution in the other direction
  delay(100);
}
