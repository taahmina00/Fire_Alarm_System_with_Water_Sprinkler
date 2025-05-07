int val=0;
void setup() {
  Serial.begin(9600);
  pinMode(5,INPUT); // flame sensor
  pinMode(6,OUTPUT); // Relay
  pinMode(7,OUTPUT); // Buzzer
  digitalWrite(6,HIGH); // Relay
  
}

void loop() {
  val=digitalRead(5); // flame sensor output pin connected
  Serial.println(val);
  delay(100);
  if(val == 0) {
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    
  }
  if(val == 1)
  {
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    
  }

}
