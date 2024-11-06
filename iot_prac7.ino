// C++ code
int number;
int squared;

void setup() {
Serial.begin(9600);
Serial.println("please enter a number:");

}

void loop() {
 
if(Serial.available()>0){

  number=Serial.parseInt();
  squared=number*number;
  Serial.print("The square of ");
  Serial.print(number);
  Serial.print("is");
  Serial.println(squared);
  Serial.println("please enter another number:");
}
}
