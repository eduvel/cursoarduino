String trama="";
void setup() {
    Serial.begin(9600);
    }
void loop() {
    if(Serial.available()>0){
        trama=trama + char(Serial.read());
        Serial.println(trama);
      }   
    }
