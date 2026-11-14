// Include LCD library
#include <LiquidCrystal.h>

// Create LCD Screen pins to variables
const int e = 51, rs = 50, d4 = 4, d5 = 5, d6 = 6, d7 = 7;

// Create Water level sensor pins
const int wlsignal = A5;
const int wlpower = 2;

// Initialize LiquidCrystal library with pins
LiquidCrystal lcd(e, rs, d4, d5, d6, d7);

void setup() {
  // Start the lcd and prep it
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  
  // Set pinmode for accurate readings and turn off water level sensor to prevent damage
  pinMode(wlpower, OUTPUT);
  digitalWrite(wlpower, LOW);
}

void loop() {
  // Start the sensor
  digitalWrite(wlpower, HIGH);

  // Delay to prevent damage
  delay(10);

  // Read the water level and turn off sensor to prevent damage
  int wlevel = analogRead(wlsignal);
  digitalWrite(wlpower, LOW);



  // Print results to LCD Screen
  lcd.setCursor(0, 0);
  lcd.print("Water Level: ");
  lcd.print(wlevel);

  // Delay for Water level sensor buffer time
  delay(1000);
}



























































































































































// Code by Hamdan Naseer (4RyuXD on Github)