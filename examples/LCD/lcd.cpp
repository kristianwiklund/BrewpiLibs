#include <BrewpiLCD.h>

SpiLcd lcd;

void setup() {
 // display
 lcd.init();
 lcd.begin(20,4);
 lcd.home();
 lcd.write("Display Online!");
}

void loop() {

}