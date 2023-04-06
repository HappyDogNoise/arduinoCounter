# arduinoCounter
program that uses an arduino, 555 timer and a 4 digit 7-segment display to count up

## Building the device
### Equipment
- 1 Arduino uno
- 1 4 digit 7-segment display
- 1 1 MΩ variableresistor
- 2 1 kΩ resistors
- 4 220 Ω resistors
- 1 10 μF 50V electrolytic capacitor
- 1 NE555P (555 timer)
- 1 LED any colour + the corresponding current limition resistor (I chose a yellow LED with a 220 Ω Resistor.
- 1 breadboard (optional)

### Reference Image

![alt text](https://github.com/HappyDogNoise/arduinoCounter/blob/main/counter.jpg)

### Method
#### 555 Timer Clock
- Connect Pin 1 to GND
- Connect Pin 2 through the Capacitor to GND
- Connect Pin 3 through the LED and the Current Limiting Restistor to GND
- Connect Pin 4 to VCC
- Leave Pin 5
- Connect Pin 6 to Pin 2
- Connect Pin 7 to Vcc using a 1 kΩ Resistor
- Connect Pin 8 to Vcc
- Connect the Left pin of the variable resistor to Pin 7 using a 1 kΩ resistor
- Connect the centre Pin of the Variable resistor to Pin 6
That is the 555 timer variable-clock circuit made.
#### Counting circuit (Arduino Pins)
- Connect Pin 2 to the output of the clock circuit (Pin 3)
- Connect Pin 3 to Pin 7 on the display
- Connect Pin 4 to Pin 5 on the display
- Connect Pin 5 to Pin 2 on the display
- Connect Pin 6 to Pin 1 on the display
- Connect Pin 7 to Pin 10 on the display
- Connect Pin 8 to Pin 4 on the display
- Connect Pin 9 to Pin 6 on the display through a 220 Ω resistor
- Connect Pin 10 to Pin 8 on the display through a 220 Ω resistor
- Connect Pin 11 to Pin 9 on the display through a 220 Ω resistor
- Connect Pin 12 to Pin 12 on the display through a 220 Ω resistor
- Connect Pin 13 to Pin 11 on the display through a 220 Ω resistor
#####DON'T FORGET TO CONNECT GROUND AND VCC TO THE CLOCK
