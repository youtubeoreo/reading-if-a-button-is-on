reading-if-a-button-is-on
=========================
int sw = 2;
void setup()
{
  pinMode(sw,INPUT);
  Serial.begin(9600);
}
void loop()
{
  int state = digitalRead(sw);
Serial.println(state);
delay(1000);
}
