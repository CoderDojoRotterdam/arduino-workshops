// We maken hier gebruik van externe functies om de licht sensor aan te spreken
#include <Wire.h>
#include <Digital_Light_TSL2561.h>

void setup() {
  // Wire.begin en TSL2561.init zorgt ervoor dat er verbinding wordt
  // gemaakt met de sensor en dat we deze kunnen uitlezen.
  Wire.begin();
  TSL2561.init();

  // Serial.begin start een seriele verbinding tussen je computer en de Marvin
  Serial.begin(57600);

  // Zorg ervoor dat we naar pin A0 kunnen schrijven.
  pinMode(A0, OUTPUT);
}


void loop() {
  // met readVisibleLux kunnen we uitlezen hoeveel licht de sensor ziet
  int lux = TSL2561.readVisibleLux();

  // Als het aantal lux onder 80 komt..
  if(lux < 80) {

    // Schrijf een 1 naar A0 = LED aan
    digitalWrite(A0, HIGH);
  } else {
    // Anders, schrijf een 0 naar A0 = LED uit
    digitalWrite(A0, LOW);
  }

  // en wacht eventjes
  delay(1000);
}
