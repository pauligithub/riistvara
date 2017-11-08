<<<<<<< HEAD
# Arduino Mega RGB LED board wiring

## Introduction

This wiring is for [Velleman VMA307 LED board](https://www.velleman.eu/products/view/?country=be&lang=en&id=435528).

For other boards wiring is similar.

Only RGB LED boards **with current limiting resistors** shall be used.

## Wiring illustration

![arduino-mega-rgb-led-board-wiring.png](arduino-mega-rgb-led-board-wiring.png)

**NB! current limiting resistors are not shown in illustration.**

## Wiring table

| Signal | Arduino Mega 2560 pin | Velleman WMA307 |
| --- | --- | --- |
| Red | Digital pin 22 | R (red anode via resistor) |
| Green | Digital pin 24 | G (green anode via resistor) |
| Blue | Digital pin 26 | B (blue anode via resistor) |
| Ground | GND | - (common cathode) |
=======
# Arduino Mega USB to UART converter wiring

## Introduction

This wiring schema uses only Tx from Arduino and is suitable to be used as standard error console.

## Wiring illustration

![arduino-mega-usb-uart-wiring.png](arduino-mega-usb-uart-wiring.png)

## Wiring table

| Signal | ATMega2560 port and pin | Arduino Mega 2560 pin | USB to UART converter pin |
| --- | --- | --- | --- |
| Ground (GND) | GND | GND | GND |
| Transmit data  from Arduino (TxD) | PORTD pin 3 (TXD1/INT3) | Digital pin 18 (TX1) | RxD |

>>>>>>> f5a4efbb00dfe89393430671d6e838d8dcdeecbf
