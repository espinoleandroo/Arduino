//www.elegoo.com
//2016.12.08

const int ledArriba = 13;//the led attach to
const int ledAbajo = 12;//the led attach to

void setup()
{ 
  pinMode(ledArriba,OUTPUT);//initialize the ledPin as an output
  pinMode(ledAbajo,OUTPUT);//initialize the ledPin as an output
  pinMode(2,INPUT);
  digitalWrite(2, HIGH);
  
} 

void loop() 
{ 
  int digitalVal = digitalRead(2); //read pin 2
  if(HIGH == digitalVal)
  {
    digitalWrite(ledArriba,LOW);//turn the led off
    digitalWrite(ledAbajo,HIGH);//turn the led on
  }
  else
  {
    digitalWrite(ledArriba,HIGH);//turn the led on 
    digitalWrite(ledAbajo,LOW);//turn the led off 
  }
}
