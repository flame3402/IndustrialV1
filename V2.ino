
void setup() {                              
  
  Serial.begin(9600);                      
  Serial.println("Number Analog output Pin : ");
  for (int k=5;k<7;k++){
    pinMode(k, OUTPUT);
    Serial.print(k);
    Serial.print("\t");
    }
    Serial.println("");
    delay(2000);
 
    Serial.println("value from the specified analog pin \t value from map Functions \t value from constrain Functions  ");
    delay(3000);
}

void loop() {                           
  int sensorValue = analogRead(A0);         
  
  Serial.print("\t\t");
  Serial.print(sensorValue);             
  Serial.print("\t\t\t\t");
  int Valmap=map(sensorValue, 200, 800, 0,150);
  Serial.print(Valmap);
  Serial.print("\t\t\t\t");
  int Valcon=constrain(Valmap, 0, 150);
  Serial.println(Valcon);
 
  analogWrite(5,Valmap);
  analogWrite(6,Valcon);
  delay(100);       
}
