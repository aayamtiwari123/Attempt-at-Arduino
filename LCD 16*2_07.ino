#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Change 0x27 to your module address if needed
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();          // Initialize LCD
  lcd.backlight();     // Turn on backlight

  lcd.setCursor(0,0);  // Column 0, Row 0
  lcd.print("Hello Aayam!");  // First line

  lcd.setCursor(0,1);  // Column 0, Row 1
  lcd.print("Really simple amiright");
}

void loop() {
  // Nothing here for now
}
