#include <Servo.h>
#include "LiquidCrystal_I2C.h"
#define sensorPin A1
// // จอกว้าง 16 ตัวอักษร 2 บรรทัด รหัสประจำตัว 0x27
LiquidCrystal_I2C lcd(0x27, 16, 2);
Servo myservo;  
int pos = 0;    
void setup() {
  myservo.attach(9);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  pinMode(sensorPin, INPUT);
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { 
    myservo.write(pos);              
    delay(15);  
    lcd.print("Servo :");
    lcd.print(int(pos));
    lcd.print("deg");
    lcd.setCursor(0,0);                     
  }
  for (pos = 180; pos >= 0; pos -= 1) 
  { 
    myservo.write(pos);              
    delay(15);    
    lcd.print("Servo :");
    lcd.print(int(pos));
    lcd.print("deg");
    lcd.setCursor(0,0);                   
  }
}