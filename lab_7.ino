
int analogvalue = 0;   
float pinvolt;        
void setup() {

//Step 5
Serial.begin(9600);     
}

void loop() {
//Step 4 
analogvalue = analogRead(0);         //Get the value from the potentiometer
pinvolt = (analogvalue * 5.0)/1024; // Convert this value to olts

if (pinvolt < 2.5){
  Serial.print(pinvolt*20);
  Serial.print("% power. ");
  Serial.println("Safe");            
}
if (pinvolt < 4){
  if (pinvolt > 2.5){
    Serial.print(pinvolt*20);
    Serial.print("% power. ");
    Serial.println("Caution");            
}
}
if (pinvolt > 4){
  Serial.print(pinvolt*20);
  Serial.print("% power. ");
  Serial.println("DANGER!!!!!!");            
}
    
  
if (pinvolt > 0){            // If the voltage is above 0;
  analogWrite(10, 255);      // Turn LED 1 on;
}
else{
  analogWrite(10, 0);
}
if (pinvolt > .5){          // If the voltage is above 0.5;
  analogWrite(9, 255);      // Turn LED 2 on;
}  
else{
  analogWrite(9, 0);
}
if (pinvolt > 1){          // If the voltage is above 1;
  analogWrite(8, 255);     // Turn LED 3 on;
}
else{
  analogWrite(8, 0);
} 
if (pinvolt > 1.5){          // If the voltage is above 1.5;
  analogWrite(7, 255);      // Turn LED 4 on;
}
else{
  analogWrite(7, 0);
} 
if (pinvolt > 2){          // If the voltage is above 2;
  analogWrite(6, 255);     // Turn LED 5 on;
} 
else{
  analogWrite(6, 0);
}
if (pinvolt > 2.5){          // If the voltage is above 2.5;
  analogWrite(5, 255);      // Turn LED 6 on;
} 
else{
  analogWrite(5, 0);
}
if (pinvolt > 3){          // If the voltage is above 3;
  analogWrite(4, 255);     // Turn LED 7 on;
}
else{
  analogWrite(4, 0);
} 
if (pinvolt > 3.5){          // If the voltage is above 3.5;
  analogWrite(3, 255);      // Turn LED 8 on;
}
else{
  analogWrite(3, 0);
} 
if (pinvolt > 4){          // If the voltage is above 4;
  delay(200);
  analogWrite(2, 255);     // Turn LED 9 on;
  delay(200);
  analogWrite(2,0);
}
else{
  analogWrite(2, 0);
} 
if (pinvolt > 4.5){          // If the voltage is above 4.5;
  delay(50);
  analogWrite(11,255);       // Turn LED 9 on;
  delay(50);
  analogWrite(11,0);
}
else{
  analogWrite(11, 0);
} 

}



