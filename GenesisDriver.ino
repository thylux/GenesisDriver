void setup() {
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  
  pinMode(9, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  digitalWrite(9, HIGH);
  
  for(int i = 2; i < 8; i++)
  {
    //if(digitalRead(i) == HIGH )
    //{
      Serial.print(digitalRead(i));
      Serial.print(" ");
    //}
  }
  
  digitalWrite(9, LOW);
  
  Serial.print(digitalRead(6));
  Serial.print(" ");
  Serial.print(digitalRead(7));
  Serial.print(" ");
  
  Serial.println(" END ");
  delay(100);
}
