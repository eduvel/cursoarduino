int vel = 0;    
void setup() {  
}

void loop() {
  vel=analogRead(A0)/4;
  analogWrite(3,vel);
}
