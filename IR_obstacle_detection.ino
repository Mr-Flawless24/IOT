void setup() {
  pinMode(2, INPUT);  // IR sensor
  pinMode(3, OUTPUT); // LED
}

void loop() {
  int val = digitalRead(2);
  if (val == LOW) {
    digitalWrite(3, HIGH); // Obstacle detected
  } else {
    digitalWrite(3, LOW);
  }
}
