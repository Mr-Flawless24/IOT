void setup() {
  Serial.begin(9600);
}

void loop() {
  int tempReading = analogRead(A0);
  float voltage = tempReading * 5.0 / 1023.0;
  float tempC = voltage * 100;
  Serial.print("Temp (C): ");
  Serial.println(tempC);
  delay(1000);
}
