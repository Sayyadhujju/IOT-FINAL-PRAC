int thermistorPin=A0;
int buzzer=8;
int delayTime=5;
void setup()
{
pinMode(buzzer,OUTPUT);
Serial.begin(9600);
}

void loop()
{
float a=analogRead(thermistorPin);
float resistance=a*(5.0/1023.0);
float tempC=(resistance-0.5)*100;
 Serial.print("temp:");
 Serial.print(tempC);
 Serial.println("*c");
  delay(delayTime);
  if(tempC>60.0){
    for(int i=200;i<800;i++){
      tone(buzzer,i);
      delay(5);
      
    
  
}
    for(int i=800;i>200;i--){
      tone(buzzer,i);
      delay(5);
    }
  }
    else{
      noTone(buzzer);
      delay(5);
    }
  }
