#!/bin/bash
echo "Flashing device.............."
dfu-programmer atmega32u4 erase
dfu-programmer atmega32u4 flash usb_usb.hex
dfu-programmer atmega32u4 reset

