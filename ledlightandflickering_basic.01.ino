 int ledpin=2;

void setup() {
  // put your setup code here, to run once:
 
  pinMode(ledpin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledpin, HIGH);
  //delay(10000);
  //digitalWrite(ledpin, LOW);
  //delay(500);
}
