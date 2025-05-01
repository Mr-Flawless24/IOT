float maxTemp = -1000;
float minTemp = 1000;

void setup() {
  Serial.begin(9600);
}

void loop() {
  float temp = analogRead(A0) * 5.0 / 1023.0 * 100;
  if (temp > maxTemp) maxTemp = temp;
  if (temp < minTemp) minTemp = temp;

  float tempF = temp * 9 / 5 + 32;
  Serial.print("Temp (F): ");
  Serial.print(tempF);
  Serial.print(" | Max: ");
  Serial.print(maxTemp);
  Serial.print(" | Min: ");
  Serial.println(minTemp);

  delay(2000);
}
