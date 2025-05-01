void setup() {
  Serial.begin(9600); // Start serial communication
}

void loop() {
  int sensorValue = analogRead(A0); // Read analog value from sensor
  float voltage = sensorValue * 5.0 / 1023.0; // Convert to voltage
  float temperatureC = voltage * 100; // Convert voltage to °C (for LM35)

  Serial.println(temperatureC); // Print temp value (used by Serial Plotter)

  delay(500); // Delay for readability
}
