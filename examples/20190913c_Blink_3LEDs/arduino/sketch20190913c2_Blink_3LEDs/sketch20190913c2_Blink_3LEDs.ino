//
// sketch20190913c2_Blink_3LEDs.ino
//

// Written by @hohno_at_kuimc
//
// Public domain
//
// Last update: Thu Sep 12 03:22:48 JST 2019 by @hohno_at_kuimc

// ---------------------------------------------------------

// 初期設定

void setup() {

	Serial.begin(57600);

  pinMode(LED_BUILTIN, OUTPUT);

  // 以下の3行は「ボタンシールド」のための設定
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);

  // 以下の 3行も「ボタンシールド」のための設定
  pinMode(A5, INPUT_PULLUP);
  pinMode(A4, INPUT_PULLUP);
  pinMode(A3, INPUT_PULLUP);

}

// ---------------------------------------------------------

// メインループ

void loop() {

  // Arduino 本体のLEDを点灯
  digitalWrite(LED_BUILTIN, HIGH);

  //「ボタンシールド」の3つのLEDを点灯
  digitalWrite(9,  HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);

	Serial.println("ON");

  // 200ミリ秒待つ
  delay(200);

  // Arduino 本体のLEDを消灯
  digitalWrite(LED_BUILTIN, LOW);

  //「ボタンシールド」の3つのLEDを消灯
  digitalWrite(9,  LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);

	Serial.println("OFF");

	// 200ミリ秒待つ
  delay(200);

}

// ---------------------------------------------------------
