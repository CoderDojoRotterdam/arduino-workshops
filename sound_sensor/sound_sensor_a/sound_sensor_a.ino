void setup() {
  // put your setup code here, to run once:
  Serial.begin(57600);
  
  // Markeer pin A4 als output. Zo kunnen we 'digitalWrite' gebruiken
  // om de pin aan te sturen.
  pinMode(A3, INPUT);
}

void loop() {
  // Opdracht A; Print het geluidsniveau op het scherm via Serial.println.
  // ------------------------------

  // We gebruiken hier analogRead in plaats van digitalRead omdat geluid meer waardes kan zijn
  // dan alleen maar een 1 of een 0. Hoe hard het geluid is (volume) speelt hierin een grote rol :)
  int geluid = analogRead(A3);

  // Met Serial.println schrijven we iets naar de Serial Monitor.
  // de serial monitor is te vinden onder Tools > Serial Monitor
  Serial.println(geluid);

  // om niet te veel berichten op onze serial monitor te krijgen
  // wachten we eventjes 100ms. 
  delay(100);
}
