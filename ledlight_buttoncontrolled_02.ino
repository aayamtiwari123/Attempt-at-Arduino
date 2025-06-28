 int ledpin=2;
 int buttonpin=4;
void setup() {
  // put your setup code here, to run once:
  pinMode(buttonpin, INPUT_PULLUP);
  pinMode(ledpin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonstate=digitalRead(buttonpin);
  if (buttonstate==LOW)
  digitalWrite(ledpin, HIGH);
  else
  digitalWrite(ledpin,LOW);
  //delay(10000);
  //digitalWrite(ledpin, LOW);
  //delay(500);
}
