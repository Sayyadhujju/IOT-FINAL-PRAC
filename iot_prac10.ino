const int temp36=A0;
float tfmax = -100;
float tfmin = 100;
void setup() {
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int val = analogRead(temp36);
float mv = (val/1024.0)*5000;
float cel = (mv-500)/10;
float farh = (cel*9.0/5.0)+32;
  
if(farh > tfmax){
  tfmax=farh;

}
if(farh < tfmin){
  tfmin=farh;

}
Serial.print("temperature: ");
Serial.print(farh);
Serial.println("*F");
Serial.print("max: ");
Serial.print(tfmax);
Serial.println("*F");
Serial.print("min: ");
Serial.print(tfmin);
Serial.println("*F");
delay(3000);
}
