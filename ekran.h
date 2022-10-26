#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F, 16, 2);
class Ekran{
  public:
  Ekran(int ln){
    
  }
  void setup(){
    lcd.begin();
    lcd.backlight();
    lcd.clear();
  }
  void yaz(String metin){
    lcd.setCursor(0,0);
    lcd.print(metin);
  }
  private:
};
