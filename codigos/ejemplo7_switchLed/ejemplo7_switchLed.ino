void setup() {
     Serial.begin(9600); 
     pinMode(8,OUTPUT);
     pinMode(9,OUTPUT);
}

void loop() {
  if(Serial.available()>0){
    char valor=Serial.read();
    switch(valor){
      case 'R':
          digitalWrite(9,HIGH);
          break;
        case 'r':
          digitalWrite(9,LOW);
          break;
        case 'V':
          digitalWrite(8,HIGH);
          break;
        case 'v':
          digitalWrite(8,LOW);
          break;
        default:
          digitalWrite(8,LOW);
            digitalWrite(9,LOW);
    }
  }
}
