#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup( )
{
  Serial.begin( 9600);
}





void loop( )
{
  
  delay(1000);
  float water = analogRead(A0);

  if(water == 0){
    lcd.begin(0, 2);
    lcd.print("Ambiente SECO");
  }else if(water < 100){
    lcd.begin(0, 2);
    lcd.print("Posible Presencia");
    lcd.setCursor(0, 1);
    lcd.print("de Agua");
  }else if(water < 500){
    lcd.begin(0, 2);
    lcd.print("Presencia de");
    lcd.setCursor(0, 1);
    lcd.print("Agua");
  }else{
    lcd.begin(0, 2);
    lcd.print("Aguas con el");
    lcd.setCursor(0, 1);
    lcd.print("Agua  xD");
  }
  Serial.println(analogRead(A0));
}
