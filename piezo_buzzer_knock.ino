void setup() {
  pinMode(8, OUTPUT); // Buzzer
}

void loop() {
  int knock = analogRead(A0);
  if (knock > 500) {
    tone(8, 262, 300); // Play C note
    delay(300);
  }
}
