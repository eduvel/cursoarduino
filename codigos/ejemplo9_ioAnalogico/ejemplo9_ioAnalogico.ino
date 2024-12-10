    int entradaRojo = A0; 
    int entradaVerde= A2;
    int entradaAzul = A1;
    int salidaRojo=6;
    int salidaAzul=5;
    int salidaVerde=3;
    int verde = 0;  
    int rojo=0;
    int azul=0;
    void setup() {
      Serial.begin(9600);
      }
    void loop() {
      rojo = analogRead(entradaRojo);   
      azul = analogRead(entradaAzul);
      verde = analogRead(entradaVerde);
      analogWrite(salidaRojo,rojo/4);
      analogWrite(salidaAzul,azul/4);
      analogWrite(salidaVerde,verde/4);
      Serial.print(rojo);
      Serial.print("\t");
      Serial.print(azul);
      Serial.print("\t");
      Serial.println(verde);
    }
