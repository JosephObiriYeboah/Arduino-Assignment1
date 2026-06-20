int startValue = 5;
int ledPin = 13;

void flashLED(int times) {
  int count = times;

  while (count > 0) {
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(200);

    count = count - 1;
  }
}

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

  Serial.println("=== Smart Countdown Starting ===");

  int count = startValue;

  while (count > 0) {
    Serial.print("Count: ");
    Serial.println(count);

    delay(1000);
    count = count - 1;
  }

  flashLED(3);

  Serial.println("=== Countdown Complete ===");
}

void loop() {
  
}