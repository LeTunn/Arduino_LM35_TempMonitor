const int lm35Pin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int adcValue = analogRead(lm35Pin);
  float temperature = (adcValue * 500.0) / 1023.0;

  Serial.print("Nhiet do: ");
  Serial.print(temperature);
  Serial.println(" C");

  delay(1000);
}