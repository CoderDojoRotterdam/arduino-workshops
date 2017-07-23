// We hebben twee variabelen nodig. Eentje die bijhoudt hoelang het LEDje moet branden
// en eentje die bijhoudt in welke stap van het spelletje we zijn.
int wachttijd = 0;
String stap = "nieuw";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(57600);
  
  // Eerst seeden we onze random number generator.
  randomSeed(analogRead(A0));

  // Configureer de pins voor onze LED en Button
  pinMode(A3, OUTPUT);
  pinMode(A5, INPUT);
}

void loop() {
  // Als we een nieuw spel beginnen..
  if(stap == "nieuw") {

    // Kiezen we een random wachttijd tussen 2 en 10 seconden
    wachttijd = millis() + random(2,10) * 1000;

    // Als we dat gedaan hebben, kunnen we gaan wachten.
    stap = "wachten";
    
  } else if(stap == "wachten") {
    // Zolang we aan het wachten zijn, moet het LEDje branden
    digitalWrite(A3, HIGH);

    // Alleen als de wachttijd verstreken is..
    if(millis() >= wachttijd) {
      // Gaan we naar de volgende stap; tellen.
      stap = "tellen";
    }
  } else if(stap == "tellen") {
    // Vanaf hier mag het LEDje uit en wachten we tot er op de knop wordt gedrukt
    digitalWrite(A3, LOW);
    
    if(digitalRead(A5) == HIGH) {
      // Er is op de knop gedrukt. Kijk naar de huidige tijd en trek daar de originele wachttijd vanaf.
      // Dit is de tijd tussen LED uit en op de knop drukken; ook wel reactiesnelheid
      Serial.println("Jouw reactiesnelheid is "+ String( millis() - wachttijd ) + "ms");

      // We beginnen direct weer opnieuw ;)
      stap = "nieuw";
    }
  }

}
