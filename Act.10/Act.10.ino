int lastState = HIGH; 
int currentState;  
void setup()
{
pinMode(2,INPUT_PULLUP);
}
void loop()
{
currentState = digitalRead(2);
if(lastState == LOW && currentState == HIGH)
{
tone(8,600);
delay(500);
noTone(8);
}
lastState = currentState;
}