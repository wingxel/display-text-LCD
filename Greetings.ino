#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

String greeting[] = {
  "Hello friends..", "I hope you all r",
  "doing well!"
};

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.clear();
}

void loop() {
  delay(1000);
  lcd.clear();
  for (unsigned i = 0; i < greeting[0].length(); i++) {
    lcd.setCursor(i, 0);
    lcd.print(greeting[0][i]);
    delay(100);
  }
  delay(1000);
  for (int i = greeting[0].length() - 1; i >= 0; i--) {
    lcd.setCursor(i, 0);
    lcd.print(" ");
    delay(150);
  }
  delay(1000);
  for (unsigned i = 0; i < greeting[1].length(); i++) {
    lcd.setCursor(i, 0);
    lcd.print(greeting[1][i]);
    delay(100);
  }
  for (unsigned i = 0; i < greeting[2].length(); i++) {
    lcd.setCursor(i, 1);
    lcd.print(greeting[2][i]);
    delay(100);
  }
  delay(1000);
  for (int i = greeting[2].length() - 1; i >= 0; i--) {
    lcd.setCursor(i, 1);
    lcd.print(" ");
    delay(150);
  }
  for (int i = greeting[1].length() - 1; i >= 0; i--) {
    lcd.setCursor(i, 0);
    lcd.print(" ");
    delay(150);
  }
}
