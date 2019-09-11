//
// sketch20190913e_AnalogReadSerial_3POTs
//

// Written by @hohno_at_kuimc
//
// Public domain
//
// Last update: Mon Aug 19 07:28:04 JST 2019 by @hohno_at_kuimc

// ---------------------------------------------------------

#define VOL1 (A0)
#define VOL2 (A1)
#define VOL3 (A2)

int valVR1, valVR2, valVR3;

// ---------------------------------------------------------

void setup() {
  // put your setup code here, to run once:
  Serial.begin(57600);
}

// ---------------------------------------------------------

void loop() {
  // put your main code here, to run repeatedly:
  valVR1 = map(analogRead(VOL1), 0, 1023, 0, 255);
  valVR2 = map(analogRead(VOL2), 0, 1023, 0, 255);
  valVR3 = map(analogRead(VOL3), 0, 1023, 0, 255);

  Serial.print(valVR1);
  Serial.print(",");
  Serial.print(valVR2);
  Serial.print(",");
  Serial.println(valVR3);

  delay(100);
}

// ---------------------------------------------------------
