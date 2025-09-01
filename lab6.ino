// C++ code
//
//const int dry_threshold=800;
//const int wet_threshold=300;
int moist_sensor=0;
void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop()
{
  moist_sensor=analogRead(A0);
  Serial.println(moist_sensor);
  if(moist_sensor>=800){
   digitalWrite(13, HIGH);
    digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  }
  else if(moist_sensor<800 and moist_sensor>300){
   digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    digitalWrite(11, LOW);
  }
  else {
   digitalWrite(11, HIGH);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  }
  delay(10);
}