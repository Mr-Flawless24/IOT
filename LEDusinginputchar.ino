void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT); // Green
  pinMode(3, OUTPUT); // Yellow
  pinMode(4, OUTPUT); // Red
}

void loop() {
  if (Serial.available()) {
    char input = Serial.read();
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    if (input == 'b') {
      digitalWrite(2, HIGH);
      delay(500);
      digitalWrite(2, LOW);
      delay(500);
    } else if (input == 'g') digitalWrite(2, HIGH);
    else if (input == 'y') digitalWrite(3, HIGH);
    else if (input == 'r') digitalWrite(4, HIGH);
  }
}
