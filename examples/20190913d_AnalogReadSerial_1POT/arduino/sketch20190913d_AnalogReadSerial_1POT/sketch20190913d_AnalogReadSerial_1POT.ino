//
// sketch20190913d_AnalogReadSerial_1POT.ino
//

// Written by @hohno_at_kuimc
//
// Public domain
//
// Last update: Thu Sep 12 03:34:40 JST 2019 by @hohno_at_kuimc

// ---------------------------------------------------------

#define VOL (A0)

int valVR;

// ---------------------------------------------------------

void setup() {
  Serial.begin(57600);
}

// ---------------------------------------------------------

void loop() {
  valVR = map(analogRead(VOL), 0, 1023, 0, 255);
  // Serial.write(77); Serial.write(valVR); // Just for future use.
  Serial.println(valVR);
  delay(100);
}

// ---------------------------------------------------------
