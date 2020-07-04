#include <Servo.h>
Servo myservo;
int X = 0;
int lastState = HIGH; 
int currentState;  
void setup()
{
pinMode(2, INPUT_PULLUP);
myservo.attach(9);
Serial.begin(9600);
}
void loop()
{
currentState = digitalRead(2);
if(lastState == LOW && currentState == HIGH)
{
 X = X+20;
}
myservo.write(X);
Serial.print("Servo = ");
Serial.println(X);
lastState = currentState;
}