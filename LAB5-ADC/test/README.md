# Lab 5: Juan Villarruel Aragón

### Analog-to-Digital Conversion

1. Complete table with voltage divider, calculated, and measured ADC values for all five push buttons.

   | **Push button** | **PC0[A0] voltage** | **ADC value (calculated)** | **ADC value (measured)** | **ADC value (measured, hex)** |
   | :-: | :-: | :-: | :-: | :-: |
   | Right  | 0&nbsp;V | 0   | 0 | 0 |
   | Up     | 0.495&nbsp;V | 101 | 100 | 63 |
   | Down   | 1.203&nbsp;V | 246 | 257 | 101 |
   | Left   | 1.96V | 402 | 409 | 199 |
   | Select | 3.18V | 650 | 640 | 27f |
   | none   | 5.V | 1023 | 1023 | 3ff |

### Temperature meter

Consider an application for temperature measurement. Use analog temperature sensor [TC1046](http://ww1.microchip.com/downloads/en/DeviceDoc/21496C.pdf), LCD, and a LED. Every 30 seconds, the temperature is measured and the value is displayed on LCD screen. When the temperature is too high, the LED will turn on.

2. Draw a schematic of temperature meter. The image can be drawn on a computer or by hand. Always name all components and their values.

   
![lab5](https://user-images.githubusercontent.com/114478665/199114617-785e90b0-ce38-4377-afb3-8652d8f8364c.png)


3. Draw two flowcharts for `main` function and `TIMER1_OVF_vect` interrupt service routine which overflows every 1&nbsp;sec. The image can be drawn on a computer or by hand. Use clear descriptions of the individual steps of the algorithms.

   ![entrega3](https://user-images.githubusercontent.com/114478665/199113737-eda04cb6-a47b-4af8-b395-0f347963a789.jpeg)

