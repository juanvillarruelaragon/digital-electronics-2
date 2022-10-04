# Lab 1: Juan Villarruel Aragón

### Morse code

1. Listing of C code which repeats one "dot" and one "comma" (BTW, in Morse code it is letter `A`) on a LED. Always use syntax highlighting, meaningful comments, and follow C guidelines:

```c

//A

// DIT tdit= 300 
// DAH 3*tdit = 900 seconds 
// Intra-character space: 1 Tdit= 300
// Inter-character space: 3 Tfdit= 900
//Word space: 7 Tfdit = 2100

#define LED PB5


#include <avr/io.h>
#include <util/delay.h>
#include "Arduino.h"


#define PB5 13


#define DIT 300
#define DAH 900
#define inter 300
#define caracter 900
#define space 2100



int main(void)
{

    uint8_t led_value = LOW;
    // Set pin where on-board LED is connected as output
    pinMode(LED_GREEN, OUTPUT);

    // Infinite loop
    while (1)
    {


        // Generate a lettre `A` Morse code     .-

        digitalWrite(LED_GREEN, HIGH);
        _delay_ms(DIT); //dit, point
        delayWrite(LED_GREEN,LOW);
        
        _delay_ms(inter); //delay between dit and dah

        delayWrite(LED_GREEN,HIGH); //turn on LED
        _delay_ms(DAH); //DAH, comma
        
        digitalWrite(LED_GREEN,LOW); //turn off LED
        _delay_ms(caracter); //delay between characters of a word


    }

    // Will never reach this
    return 0;
}
```

2. Scheme of Morse code application, i.e. connection of AVR device, LED, resistor, and supply voltage. The image can be drawn on a computer or by hand. Always name all components and their values!

![digital-electronics-2](https://user-images.githubusercontent.com/114478665/193771120-ce35b298-02a1-4dc9-ad10-e2a2c7108c54.png)


