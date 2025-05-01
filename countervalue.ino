int counter = 150;

void setup() {
  pinMode(2, OUTPUT); // Green
  pinMode(3, OUTPUT); // Yellow
  pinMode(4, OUTPUT); // Red
}

void loop() {
  if (counter <= 100) {
    digitalWrite(2, HIGH);
  } else if (counter <= 200) {
    digitalWrite(3, HIGH);
  } else {
    digitalWrite(4, HIGH);
  }
}
