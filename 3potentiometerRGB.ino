int redPin = 9;
int greenPin = 10;
int bluePin = 11;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  int rRaw = analogRead(A0);
  int gRaw = analogRead(A1);
  int bRaw = analogRead(A2);

  // Map 0–1023 input to 0–255 output
  int r = map(rRaw, 0, 1023, 0, 255);
  int g = map(gRaw, 0, 1023, 0, 255);
  int b = map(bRaw, 0, 1023, 0, 255);

  analogWrite(redPin, r);
  analogWrite(greenPin, g);
  analogWrite(bluePin, b);
}
