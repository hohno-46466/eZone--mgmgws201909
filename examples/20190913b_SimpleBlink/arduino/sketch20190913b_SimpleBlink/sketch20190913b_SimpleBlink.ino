//
// sketch20190913b_SimpleBlink.ino
//

// Written by @hohno_at_kuimc
//
// Public domain
//
// Last update: Thu Sep 12 03:18:11 JST 2019 by @hohno_at_kuimc

// ---------------------------------------------------------

// 初期設定

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

// ---------------------------------------------------------

// メインループ

void loop() {
  // Arduino 本体のLEDを点灯
  digitalWrite(LED_BUILTIN, HIGH);

  // 1000ミリ秒待つ
  delay(1000);

  // Arduino 本体のLEDを消灯
  digitalWrite(LED_BUILTIN, LOW);

  // 200ミリ秒待つ
  delay(200);
}

// ---------------------------------------------------------
