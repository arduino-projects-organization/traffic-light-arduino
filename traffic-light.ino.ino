int red=11;
int green=12;
int blue=13;// blue as orange;
void setup() {
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
}

void loop() {
  digitalWrite(red,HIGH);
  delay(10000);
  digitalWrite(red,LOW);
  delay(500);
  digitalWrite(blue,HIGH);
  delay(5000);
  digitalWrite(blue,LOW);
  delay(500);
  digitalWrite(green,HIGH);
  delay(20000);
  digitalWrite(green,LOW);
  delay(500);
  
}