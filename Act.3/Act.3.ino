#include <Servo.h>
Servo myservo;
int pos = 0;   
void setup()
{
myservo.attach(9);
}
void loop()
{
for (pos = 0; pos <= 160; pos += 1) { 
    myservo.write(pos);              
    delay(15); 
    Serial.print("Servo : 160 degrees");                      
  }
}