#include "LiquidCrystal_I2C.h"
#define sensorPin A1
// // จอกว้าง 16 ตัวอักษร 2 บรรทัด รหัสประจำตัว 0x27
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup() {
  lcd.init();
  lcd.backlight();
  lcd.setCursor(4,0);
  lcd.print("HelloMDT");
  delay(1000);
  lcd.clear();

}

void loop() {
}

