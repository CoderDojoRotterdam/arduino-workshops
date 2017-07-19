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
}


void loop() {
  // met readVisibleLux kunnen we uitlezen hoeveel licht de sensor ziet
  int lux = TSL2561.readVisibleLux();

  // En dat printen we vervolgens op het scherm
  Serial.println("Light: " + String(lightValue));

  // en wacht eventjes
  delay(1000);
}
