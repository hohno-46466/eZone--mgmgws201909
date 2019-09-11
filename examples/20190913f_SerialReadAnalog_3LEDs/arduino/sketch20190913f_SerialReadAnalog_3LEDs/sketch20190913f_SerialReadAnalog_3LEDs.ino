//
// sketch20190913f_SerialReadAnalog_3LEDs.ino
//

// Written by @hohno_at_kuimc
//
// Public domain
//
// Last update: Thu Sep 12 03:41:07 JST 2019 by @hohno_at_kuimc

// ---------------------------------------------------------

const int redPin = 11;
const int greenPin = 10;
const int bluePin = 9;

// ---------------------------------------------------------

void setup() {
  // put your setup code here, to run once:

   Serial.begin(57600);
   pinMode(redPin, OUTPUT);
   pinMode(greenPin, OUTPUT);
   pinMode(bluePin, OUTPUT);
}

// ---------------------------------------------------------

void loop() {
  // put your main code here, to run repeatedly:

  while (Serial.available() > 0) {
      int r = Serial.parseInt();
      int g = Serial.parseInt();
      int b = Serial.parseInt();

      char c;
      while (((c = Serial.read()) != '\n') && (c != '\r')) {}   // 行末まで読み飛ばす

      red   = 255 - constrain(r, 0, 255);
      green = 255 - constrain(g, 0, 255);
      blue  = 255 - constrain(b, 0, 255);

      analogWrite(redPin, red);
      analogWrite(greenPin, green);
      analogWrite(bluePin, blue);

      Serial.print(r); Serial.print(",");
      Serial.print(g); Serial.print(",");
      Serial.println(b);
   }
}

// ---------------------------------------------------------
