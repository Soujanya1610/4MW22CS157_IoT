// C++ code
//
void setup()
{
  pinMode(9,INPUT);
  pinMode(10,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int temp=digitalRead(9);
  Serial.println("the street light is=");
  Serial.println(temp);
  delay(300);
  if(temp==HIGH)
  digitalWrite(10, HIGH);
  else
  digitalWrite(10, LOW);
  
}