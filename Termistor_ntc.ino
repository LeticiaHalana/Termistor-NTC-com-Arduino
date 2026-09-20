#include "thermistor.h"
double ntc = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  double temperature = analogRead(ntc);
  Serial.print("Temperatura: ");
  Serial.print(temperature);
  Serial.println("°C");
  delay(1000);
}
