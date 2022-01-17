#include <LiquidCrystal_I2C.h> //adding the LCD I2c library
#include <Wire.h> // adding the wire.h library
LiquidCrystal_I2C lcd(0x27, 16, 2);

byte Custom_char[8] ={    //making the custom character
0b00000,
0b00000,
0b01010,
0b00000,
0b10001,
0b01110,
0b00000,
0b00000
};

void setup(){
  lcd.init();
  lcd.backlight();
  lcd.createChar(0, Custom_char);
  lcd.home();
}
void loop() {
  lcd.home();
  lcd.write(0);
  
}
