#include <Servo.h>
Servo myservo;
void setup()
{
myservo.attach(9);
myservo.write(160); 
delay(100); 
myservo.write(0);
delay(800);
Serial.print("Servo : 0 degrees");

}
void loop()
{


}