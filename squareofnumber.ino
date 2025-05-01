void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    String input = Serial.readStringUntil('\n');  // Read input until newline
    int num = input.toInt();                      // Convert String to int
    Serial.print("Square: ");
    Serial.println(num * num);
  }
}
