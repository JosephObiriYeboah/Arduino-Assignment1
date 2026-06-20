int ledPin = 13;
 
void setup() {
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
 
    Serial.println("=== Countdown beginning ===");
 
    int counter = 7;            
 
    while (counter > 0) {       
        Serial.print("Counter is: ");
        Serial.println(counter);
 
        delay(1000);            
        counter = counter - 1;  
    }
 
    Serial.println("Liftoff!");
 
     int blinkCount = 3;   

  while (blinkCount > 0) {
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(200);

    blinkCount = blinkCount -1;  
  }
} 
void loop() {

}


    
