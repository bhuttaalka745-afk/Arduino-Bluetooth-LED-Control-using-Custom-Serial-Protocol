# Arduino-Bluetooth-LED-Control-using-Custom-Serial-Protocol
This project demonstrates how to control an LED using Arduino and a Bluetooth mobile application with the help of a custom serial communication protocol. The Arduino receives commands from the mobile app through the HC-05 Bluetooth module and processes the received data to control the LED connected to a specified pin.
The program waits for a start character *, after which it reads the pin number, value, and command data using Serial.parseInt(). Based on the received command, Arduino turns the LED ON or OFF.

This approach helps in understanding structured serial communication, which is commonly used in embedded systems for reliable command-based control.

Components Used

Arduino UNO

HC-05 Bluetooth Module

LED

220Ω Resistor

Jumper Wires

Mobile Bluetooth Application

Working

The mobile Bluetooth application sends a command starting with the character *.

After the start symbol, three values are sent:

Pin number where the LED is connected

Pin value

Command number

The Arduino checks for the * symbol to confirm the beginning of a valid command.

Using Serial.parseInt(), Arduino extracts the pin, value, and command.

The specified pin is configured as OUTPUT.

If the command value is 3, the LED is turned ON.

If the command value is 4, the LED is turned OFF.

Arduino prints the received information in the Serial Monitor for debugging.

Example Commands Sent from Bluetooth App

Turn LED ON (Pin 13):

*13 1 3

Turn LED OFF (Pin 13):

*13 0 4

Applications

Bluetooth-controlled lighting systems

Smart home automation prototypes

Wireless device control using mobile applications

Learning custom serial protocols in embedded systems
