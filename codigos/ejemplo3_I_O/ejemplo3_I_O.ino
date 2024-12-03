uint32_t tiempoInicio;
uint32_t tiempoMax=2000;
int ledPin = 13;
void setup(){
  pinMode(ledPin, OUTPUT);
}
void loop(){
  if(millis()-tiempoInicio<tiempoMax/2)
    digitalWrite(ledPin, HIGH);
  //algo que necesite hacer
  if(millis()-tiempoInicio>=tiempoMax/2)
    digitalWrite(ledPin, LOW);
  if(millis()-tiempoInicio>=tiempoMax)
    tiempoInicio=millis();
  //algo que necesite hacer
}
