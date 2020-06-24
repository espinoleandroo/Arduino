//www.elegoo.com
//2016.12.08

int buzzer = 12;//the pin of the active buzzer
int red = 2;
int blue = 4;

void setup()
{
 pinMode(buzzer,OUTPUT);//initialize the buzzer pin as an output
 pinMode(red,OUTPUT);
 pinMode(blue,OUTPUT);
}
void loop()
{
 unsigned char i;
 while(1)
 {
   //output an frequency
  for(i=0;i<80;i++)
  {
    digitalWrite(buzzer,HIGH);
    digitalWrite(red,HIGH);
    delay(3);//wait for 1ms
    digitalWrite(buzzer,LOW);
    digitalWrite(red,LOW);
    delay(3);//wait for 1ms
    }
    //output another frequency
    for(i=0;i<100;i++)
    {
      digitalWrite(buzzer,HIGH);
      digitalWrite(blue,HIGH);
      delay(2);//wait for 2ms
      digitalWrite(buzzer,LOW);      
      digitalWrite(blue,LOW);
      delay(2);//wait for 2ms
    }
  }
} 
