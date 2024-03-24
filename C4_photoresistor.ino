int potpin=0;// initialize analog pin 0, connected with photovaristor
int ledpin=11;// initialize digital pin 11, output regulating the brightness of LED
int val=0;// initialize variable val
int min_orig = 0;
int max_orig = 1023;
int min_map = 0;
int max_map = 100;

void setup()
{
pinMode(ledpin,OUTPUT);// set digital pin 11 as“output”
Serial.begin(9600);// set baud rate at“9600”
}
void loop()
{
  val= map(analogRead(potpin),min_orig,max_orig,min_map,max_map);
  
  Serial.println("la valeur originale est :");
  Serial.println(analogRead(potpin));// display the value of val

  Serial.println("la valeur mappee est :");
  Serial.println(val);// display the value of val
  
  analogWrite(ledpin,val);// turn on the LED and set up brightness（maximum output value 255）
  delay(1000);// wait for 0.01 
}
