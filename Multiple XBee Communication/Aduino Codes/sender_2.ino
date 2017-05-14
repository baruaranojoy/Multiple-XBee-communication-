void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  String ch = "XBee 12345" ;
  Serial.println(ch);
  delay(1000);
}
