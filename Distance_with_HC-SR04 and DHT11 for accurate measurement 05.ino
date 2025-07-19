#include <DHT.h>
#define DHTPIN 5
#define DHTTYPE DHT11

const int trig = 3, echo = 2;
float t, h, s, d;
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  t = dht.readTemperature();
  h = dht.readHumidity();
  if (isnan(t) || isnan(h)) {
    Serial.println("DHT Error");
    delay(1000);
    return;
  }

  s = (331.4 + 0.6 * t) / 10000.0;

  digitalWrite(trig, LOW); delayMicroseconds(2);
  digitalWrite(trig, HIGH); delayMicroseconds(10);
  digitalWrite(trig, LOW);

  d = pulseIn(echo, HIGH) * s / 2;
  Serial.print("T: "); Serial.print(t);
  Serial.print("C H: "); Serial.print(h);
  Serial.print("% D: "); Serial.print(d);
  Serial.print("cm / "); Serial.print(d / 30.48);
  Serial.println("ft");

  delay(1000);
}
