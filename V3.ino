
void setup() {                              // the setup routine runs once when you press reset:
  
  Serial.begin(9600);                       // initialize serial communication at 9600 bits per second:
  for (int k=2;k<9;k++){
    pinMode(k, OUTPUT);
    Serial.println(k);
    }
    delay(1000);
}


void loop() {                               // the loop routine runs over and over again forever:
  int Value = analogRead(A0);         // read the input on analog pin 0:
  Serial.print(Value);              // print out the value you read:
  Serial.print("\t");

  int Value1=Value;
  Value1=map(Value1, 200, 400, 0, 150);
  Value1=constrain(Value1, 0, 150);
  Serial.print(Value1);
  Serial.print("\t");
  analogWrite(3,Value1);

  int Value2=Value;
  Value2=map(Value2, 400, 600, 0, 150);
  Value2=constrain(Value2, 0, 150);
  Serial.print(Value2);
  Serial.print("\t");
  analogWrite(5,Value2);

  int Value3=Value;
  Value3=map(Value3, 600, 800, 0, 150);
  Value3=constrain(Value3, 0, 150);
  Serial.print(Value3);
  Serial.print("\t");
  analogWrite(6,Value3);

  int Value4=Value;
  Value4=map(Value4, 800, 1000, 0, 150);
  Value4=constrain(Value4, 0, 150);
  Serial.println(Value4);
  analogWrite(9,Value4);
  
  delay(1);        // delay in between reads for stability
}
