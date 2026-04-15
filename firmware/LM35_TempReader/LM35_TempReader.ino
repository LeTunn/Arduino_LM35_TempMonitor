const int lm35Pins[2] = {A0, A1}; // Khai báo mảng chứa 2 chân cảm biến

void setup() {
  Serial.begin(9600);
}

void loop() {
  float temperatures[2]; 
  
  for (int i = 0; i < 2; i++) {
    int adcValue = analogRead(lm35Pins[i]);
    temperatures[i] = (adcValue * 500.0) / 1023.0; 
  }

  // Gửi dữ liệu dạng CSV: Temp0, Temp1
  Serial.print(temperatures[0]);
  Serial.print(", ");
  Serial.println(temperatures[1]);

  delay(1000);
}