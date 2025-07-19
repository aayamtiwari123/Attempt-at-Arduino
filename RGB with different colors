//same setup as rgb basics

int redPin = 3;
int greenPin = 5;
int bluePin = 7;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}
// color codes are copied from internet directly : https://www.w3schools.com/colors/colors_picker.asp
void loop() {
  // Pure Red
  setColor(255, 0, 0);
  delay(1000);
  

  //skin color- seems rather inaccurate
  setColor(255, 224, 189);
  delay(1000); 


  // Yellow (Red + Green)
  setColor(255, 255, 0);
  delay(1000);

  // Green
  setColor(0, 255, 0);
  delay(1000);

  // Cyan (Green + Blue)
  setColor(0, 255, 255);
  delay(1000);

  // Blue
  setColor(0, 0, 255);
  delay(1000);

  // Magenta (Red + Blue)
  setColor(255, 0, 255);
  delay(1000);

  // White (All colors)
  setColor(255, 255, 255);
  delay(1000);

  // Off
  setColor(0, 0, 0);
  delay(1000);
}

void setColor(int redVal, int greenVal, int blueVal) {
  analogWrite(redPin, redVal);
  analogWrite(greenPin, greenVal);
  analogWrite(bluePin, blueVal);
}
//we use pwm modulation here and we can use analogwrite on digital ports that i have taken
