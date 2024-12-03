void setup(){
  Serial.begin(9600); // open the serial port at 9600 bps:
  }
void loop(){
  Serial.print("NO FORMAT");  // prints a label
  Serial.print("\t");         // prints a tab
      
  Serial.print("DEC");
  Serial.print("\t");
      
  Serial.print("HEX");
  Serial.print("\t");
      
  Serial.print("OCT");
  Serial.print("\t");
  Serial.print("BIN");
  Serial.println();        // carriage return after the last label
  for (int x = 0; x < 16; x++) { 
    Serial.print(x);       // print as an ASCII-encoded decimal - same as "DEC"
    Serial.print("\t\t");  // prints two tabs to accomodate the label length       

    Serial.print(x, DEC);  // print as an ASCII-encoded decimal
    Serial.print("\t");    // prints a tab

    Serial.print(x, HEX);  // print as an ASCII-encoded hexadecimal
    Serial.print("\t");    // prints a tab

    Serial.print(x, OCT);  // print as an ASCII-encoded octal
    Serial.print("\t");    // prints a tab

    Serial.println(x, BIN);  // print as an ASCII-encoded binary
}
      Serial.println();        // prints another carriage return
      delay(20000);            // delay 20000 milliseconds
    }
