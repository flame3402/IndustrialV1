
void setup() {                              
  
  Serial.begin(9600);                      
  Serial.println("Number digital output Pin :");
  for (int k=2;k<9;k++){
    pinMode(k, OUTPUT);
    Serial.print(k);
    Serial.print("\t");
    }
    Serial.println("");
    delay(5000);
   
    pinMode(9, OUTPUT);
    Serial.println("Number Analog output Pin : 9");
    Serial.println("");
    delay(3000);
    Serial.println("value from the specified analog pin \t value from map Functions \t value from constrain Functions  ");
    delay(3000);
}

void loop() {                           
  int sensorValue = analogRead(A0);         
  
  if (sensorValue>250)  digitalWrite(2,HIGH);
  else  digitalWrite(2,LOW);
     
  if (sensorValue>260)  digitalWrite(3,HIGH);
  else  digitalWrite(3,LOW);
   
  if (sensorValue>270)  digitalWrite(4,HIGH);
  else  digitalWrite(4,LOW);
      
  if (sensorValue>280)  digitalWrite(5,HIGH);
  else  digitalWrite(5,LOW);
    
  if (sensorValue>290)  digitalWrite(6,HIGH);
  else  digitalWrite(6,LOW);
 
  if (sensorValue>300)  digitalWrite(7,HIGH);
  else  digitalWrite(7,LOW);
 
  if (sensorValue>310)  digitalWrite(8,HIGH);
  else  digitalWrite(8,LOW);
  
  Serial.print("\t\t");
  Serial.print(sensorValue);             
  Serial.print("\t\t\t\t");
  sensorValue=map(sensorValue, 250, 310, 0, 200);
  Serial.print(sensorValue);
  Serial.print("\t\t\t\t");
  sensorValue=constrain(sensorValue, 0, 200);
  Serial.println(sensorValue);
 
  analogWrite(9,sensorValue);
  delay(100);       
}
