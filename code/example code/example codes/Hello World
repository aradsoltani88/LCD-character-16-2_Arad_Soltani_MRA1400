#include <Wire.h> // Library for I2C communication
#include <LiquidCrystal_I2C.h> // Library for LCD
LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 16, 2); // Change to (0x27,20,4) for 20x4 LCD.
void setup() {
  // Initiate the LCD:
  lcd.init();
  lcd.backlight();
}
void loop() {
  // Print 'Hello World!' on the first line of the LCD:
  lcd.home(); // goes to the first character of the first line
  lcd.print("Hello World!"); // Print the string "Hello World!"
}
