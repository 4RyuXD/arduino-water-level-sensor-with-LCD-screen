# arduino-water-level-sensor-with-LCD-screen
Water Level Sensor reads water level and the data is printed to an LCD Screen

-Components-

Arduino Mega 2560

Water Level Sensor

Breadboard

LCD1602 Module

Jumper Wires

220ohm Resistor

10kOhm Potentiometer

-Libraries-
LiquidCrystal by Arduino, Adafruit

-IMPORTANT-

The Circuit diagram uses a Soil Moisture Level Sensor in place of the water level sensor.
The pins on a soil moisture sensor and a water level sensor are completely different, please adjust pins in order to not fry your board
Left pin: VCC or +
Middle pin: GND or -
Right pin: Signal or S

The circuit diagram also shows Enable(e) (the 4th pin on the LCD Screen) and Register Select(rs) (The 6th pin on the LCD Screen) connected to 11 and 12 respectively but the Code uses 51 and 50 respectively, this is due to me using an Arduino Mega 2560 whereas I used an Arduino Uno R3 in the circuit diagram. Please edit the Code according to your pins
MOSI: 51(Mega)/11(Uno R3)
MISO: 50(Mega)/12(Uno R3)
