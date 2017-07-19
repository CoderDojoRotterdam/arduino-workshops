void setup() {
  // put your setup code here, to run once:
  Serial.begin(57600);
  
  // Markeer pin A4 als intput.
  pinMode(A3, INPUT);
}

void loop() {
  // Opdracht B; Print het geluidsniveau op het scherm via Serial.println.
  // ------------------------------

  // We gebruiken hier analogRead in plaats van digitalRead omdat geluid meer waardes kan zijn
  // dan alleen maar een 1 of een 0. Hoe hard het geluid is (volume) speelt hierin een grote rol :)
  int geluid = analogRead(A3);

  // zodra het geluidsniveau boven X komt, dan printen we een berichtje.
  // X is in dit geval 400. Maar als deze grens te hoog of te laag ligt 
  // kunnen we deze natuurlijk nog bijstellen.
  
  if(geluid > 400) {
    // Als geluid harder is dan 400, print een berichtje.
    Serial.println("Geluid is boven 400. SSSssssst");
  }
}
