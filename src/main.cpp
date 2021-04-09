#include "M5StickCPlus.h"
#include "esp32-hal.h"
#include "soc/gpio_sig_map.h"
#include "soundOut.hpp"
#include "utility/Button.h"

Button CheckPin(26, true, DEBOUNCE_MS);

void setup() {
  M5.begin();
  SOut.begin(2, 100);
}

void loop() {
  if (CheckPin.isPressed()) {
    SOut.beepOut(1500, 15);
  }
  M5.update();
  CheckPin.read(); // ピンのステータスを更新、M5.update()で呼ばれる処理
  delay(10);
}
