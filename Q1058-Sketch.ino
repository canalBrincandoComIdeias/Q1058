void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.write(80);  
  Serial.write(94);
  Serial.write(52);  
  Serial.write(56);
  Serial.write(53);  
  Serial.write(90);
  Serial.write(84);  
  Serial.write(86);
  Serial.println();
}