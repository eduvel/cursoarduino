const byte interruptPin = 2;
int contadorPulsos=0;
void setup() {
      Serial.begin(9600);
      pinMode(interruptPin, INPUT_PULLUP);
      attachInterrupt(digitalPinToInterrupt(interruptPin), detectarPulso, RISING);
    }

void loop() {
    }

void detectarPulso() {
      contadorPulsos++;
      Serial.print(F("Sensor activo -> Pulso: "));
      Serial.println(contadorPulsos);
    }
