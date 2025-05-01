#include <ESP8266WiFi.h>
#include <ThingSpeak.h>

// WiFi credentials
const char* ssid = "YOUR_WIFI_SSID";
const char* password = "YOUR_WIFI_PASSWORD";

// ThingSpeak settings
unsigned long channelID = YOUR_CHANNEL_ID;  // e.g., 1234567
const char* readAPIKey = "YOUR_READ_API_KEY";  // or "" if public

WiFiClient client;

const int ledPin = D2;

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);

  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("WiFi connected");

  ThingSpeak.begin(client);
}

void loop() {
  int ledStatus = ThingSpeak.readIntField(channelID, 1, readAPIKey); // Field 1

  if (ledStatus == 1) {
    digitalWrite(ledPin, HIGH);  // LED ON
    Serial.println("LED ON");
  } else {
    digitalWrite(ledPin, LOW);   // LED OFF
    Serial.println("LED OFF");
  }

  delay(15000); // ThingSpeak allows 15 sec interval between reads
}
