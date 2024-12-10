void setup()
{
  Serial.begin(9600);
    analogReference(EXTERNAL);
}
void loop()
{
  int valor = analogRead(A0);
  int temperatura = map(valor,0,1023,-50,200);
  Serial.print(F("Temperatura: "));
  Serial.print(temperatura);
  Serial.println("\260C");
}
