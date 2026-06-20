void setup() {
    Serial.begin(9600);
 
    int myAge = 21;
    float myHeight = 1.75;
    string myName = "Joseph Obiri Yeboah";
    bool isStudent = true;
 
    
    Serial.print("My name is: ");
    Serial.println(myName);
 
    Serial.print("My age is: ");
    Serial.println(myAge);
 
    Serial.print("My height is: ");
    Serial.print(myHeight);
    Serial.println(" meters");
 
    Serial.print("Am I a student? ");
    Serial.println(isStudent);
}
 
void loop() {
    
}