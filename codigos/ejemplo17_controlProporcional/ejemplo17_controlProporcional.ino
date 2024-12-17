float temperatura=0;
float setPoint=0;
float error=0;
float KP=1;
float salida=0;
float bias=50;
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
  error=(setPoint-temperatura)/200*100;
  salida=KP*error+bias;
  if(salida>100)
    salida=100;
  if(salida<0)
    salida=0;
  Serial.print(F("Temperatura: "));
  Serial.print(temperatura);
  Serial.print("\260C\t Set Point: ");
  Serial.print(setPoint);
  Serial.print("\260C\t Salida: ");
  Serial.println(salida);
  valor= map(valor,0,100,0,255);
  analogWrite(6,valor);
}
