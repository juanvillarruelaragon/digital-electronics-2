/* Defines -----------------------------------------------------------*/
#define LED_GREEN PB5  // Arduino Uno on-board LED
#define LED_RED PB0    // External active-low LED


/* Includes ----------------------------------------------------------*/
#include <avr/io.h>         // AVR device-specific IO definitions
#include <avr/interrupt.h>  // Interrupts standard C library for AVR-GCC
#include <gpio.h>           // GPIO library for AVR-GCC
#include "timer.h"          // Timer library for AVR-GCC



int main(void)
{
    // Set pins where LEDs are connected as output
    GPIO_mode_output(&DDRB, LED_GREEN);
    GPIO_mode_output(&DDRB, LED_RED);

    // Configuration of 16-bit Timer/Counter1 for LED blinking
    // Set the overflow prescaler to 262 ms and enable interrupt
    TIM1_overflow_1s();
    TIM1_overflow_interrupt_enable();
    //Config of 8bit timer0 for red led
    TIM0_overflow_16ms();
    TIM0_overflow_interrupt_enable();
    // Enables interrupts by setting the global interrupt mask
    sei();

    // Infinite loop
    while (1)
    {
        /* Empty loop. All subsequent operations are performed exclusively 
         * inside interrupt service routines, ISRs */
    }

    // Will never reach this
    return 0;
}


ISR(TIMER1_OVF_vect)
{
    PORTB = PORTB ^ (1<<LED_GREEN);
}



ISR(TIMER0_OVF_vect)
{
    static uint8_t no_of_overflows = 0; //static so that the variable is saved os smth

    no_of_overflows++; //each interruption the value increases by one
    if(no_of_overflows>=6)
    {
      PORTB = PORTB ^ (1<<LED_RED);
      no_of_overflows = 0; //set variable to 0 so that it starts counting again
    }
}