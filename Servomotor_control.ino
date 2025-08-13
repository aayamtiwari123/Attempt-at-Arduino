#include <Servo.h>

Servo myServo;

void setup() {
  myServo.attach(9); // signal on D9
}

void loop() {
  myServo.write(0);    // move to 0°
  delay(1000);
  myServo.write(90);   // move to 90°
  delay(1000);
  myServo.write(180);  // move to 180°
  delay(1000);
}
