#include "M5StickCPlus.h"
#include "esp32-hal.h"
#include "soc/gpio_sig_map.h"
#include "soundOut.hpp"
#include "utility/Button.h"

class MyBtn : public Button
{
public:
  MyBtn(uint8_t pin, uint8_t invert, uint32_t dbTime);
};
MyBtn::MyBtn(uint8_t pin, uint8_t invert, uint32_t dbTime) : Button(pin, invert, dbTime) {}

MyBtn mb(26, true, DEBOUNCE_MS);

void setup() {
  M5.begin();
  SOut.begin(2, 100);
}

void loop() {
  if (mb.isPressed()) {
    SOut.beepOut(1500, 5);
  }
  M5.update();
  mb.read(); // ボタンのステータスを更新、M5.update()で呼ばれるべき処理
  delay(1);
}
