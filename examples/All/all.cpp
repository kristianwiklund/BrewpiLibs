#include <BrewpiBuzzer.h>
#include <BrewpiLCD.h>

Buzzer buzzer;
SpiLcd lcd;

void setup() {
   // display
 lcd.init();
 lcd.begin(20,4);
 lcd.home();
 lcd.write("Beeping 3 times!");

 // buzzer
  buzzer.init();
  buzzer.beep(3,100);
}

void loop() {

}