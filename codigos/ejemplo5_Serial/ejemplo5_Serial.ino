void setup(){
    Serial.begin(9600);
    }
void loop(){
    Serial.write(64); 
    Serial.write(0x0D0A);
    int bytesSent = Serial.write("hello");  
    delay(2000);
  }
