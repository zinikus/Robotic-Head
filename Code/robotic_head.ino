
#include <Servo.h>

Servo neckServo;    // Controls left-right head movement
Servo jawServo;     // Controls jaw movement
Servo eyeServo;     // Controls eye movement

void setup() {
  neckServo.attach(9);
  jawServo.attach(10);
  eyeServo.attach(11);
}

void loop() {
  // Simulate head scanning
  for (int pos = 60; pos <= 120; pos++) {
    neckServo.write(pos);
    delay(20);
  }
  for (int pos = 120; pos >= 60; pos--) {
    neckServo.write(pos);
    delay(20);
  }

  // Simulate mouth movement
  jawServo.write(30);
  delay(300);
  jawServo.write(0);
  delay(300);

  // Eye movement
  eyeServo.write(random(60, 120));
  delay(500);
}
