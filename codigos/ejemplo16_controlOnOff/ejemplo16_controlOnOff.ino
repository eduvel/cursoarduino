int histeresis=2;
int temperatura=0;
int setPoint=0;
void setup()
{
  Serial.begin(9600);
  analogReference(EXTERNAL);
  pinMode(6,OUTPUT);
  digitalWrite(6,LOW);
}
void loop()
{
  int valor = analogRead(A0);
  temperatura = map(valor,0,1023,-50,200);
  valor = analogRead(A1);
  setPoint = map(valor,0,1023,-50,200);
  Serial.print(F("Temperatura: "));
  Serial.print(temperatura);
  Serial.print("\260C\t Set Point: ");
  Serial.print(setPoint);
  Serial.println("\260C");
  if(temperatura>=setPoint+histeresis)
    digitalWrite(6,LOW);
  if(temperatura<=setPoint-histeresis)
    digitalWrite(6,HIGH);
}
