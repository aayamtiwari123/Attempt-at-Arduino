
// basic servo control
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
/*
  to move servo motor faster

  #include <Servo.h>

  Servo myServo;

  void setup() {
    myServo.attach(9);
  }

  void loop() {
    // sweep from 0° to 180°
    for(int pos = 0; pos <= 180; pos += 5){ // bigger step = faster
      myServo.write(pos);
      delay(15); // shorter delay = faster
    }
    // sweep back
    for(int pos = 180; pos >= 0; pos -= 5){
      myServo.write(pos);
      delay(15);
    }
  }
*/

