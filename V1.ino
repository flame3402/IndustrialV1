
void setup() {                              
  
  Serial.begin(9600);                      
  Serial.println("Number digital output Pin :");
  for (int k=2;k<10;k++){
    pinMode(k, OUTPUT);
    Serial.print(k);
    Serial.print("\t");
    }
    Serial.println("");
    delay(3000);
    
    Serial.println("value from the specified analog pin");
    delay(3000);
}

void loop() {                           
  int sensorValue = analogRead(A0);         
  
  if (sensorValue>50)  digitalWrite(2,HIGH);
  else  digitalWrite(2,LOW);
     
  if (sensorValue>175)  digitalWrite(3,HIGH);
  else  digitalWrite(3,LOW);
   
  if (sensorValue>300)  digitalWrite(4,HIGH);
  else  digitalWrite(4,LOW);
      
  if (sensorValue>425)  digitalWrite(5,HIGH);
  else  digitalWrite(5,LOW);

  if (sensorValue>550)  digitalWrite(6,HIGH);
  else  digitalWrite(6,LOW);
 
  if (sensorValue>675)  digitalWrite(7,HIGH);
  else  digitalWrite(7,LOW);
 
  if (sensorValue>800)  digitalWrite(8,HIGH);
  else  digitalWrite(8,LOW);

  if (sensorValue>925)  digitalWrite(9,HIGH);
  else  digitalWrite(9,LOW);
  
  Serial.println(sensorValue);
  delay(100);       
}
