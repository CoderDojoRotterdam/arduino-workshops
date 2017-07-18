void setup() {
  // put your setup code here, to run once:
  Serial.begin(57600);
  pinMode(A3, INPUT);
}

void loop() {

  // Opdracht A;
  // ------------------------------
  
  // Met digitalRead lezen we een 1 (HIGH) of een 0 (LOW) van pin A3
  int val = digitalRead(A3);

  // Wanner de pin HIGH (1) is..
  if(val == HIGH) {
    // Dan printen we iets via de USB poort. Klik op Tools > Serial Monitor om het te controleren.
    Serial.println("Er is op de knop gedrukt!");
  }

  // Zonder deze delay print de Marvin heel vaak. Probeer het maar :)
  delay(100);
}
