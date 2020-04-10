#!/bin/sh

dev=/dev/cu.usbmodem1421501
avrdude -p m32u4 -P ${dev} -c avr109 -U flash:w:.build/handwired_pterodactyl_default.hex
