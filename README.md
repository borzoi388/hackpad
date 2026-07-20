# Fishpad
Fishpad is the 9-key fish-shaped macropad of my dreams with an OLED display and a rotary encoder. Uses QMK firmware and it will have VIA support C:

## Features:

![whole thing](https://cdn.hackclub.com/019f78ea-daf6-72b7-a274-9965d8dd52b6/image.png)
- 9 switches and a rotary encoder! (sadly no click on the encoder :c)
- 128x32 OLED screen
- LED underglow
- Case that's supposed to look like a fish?

## Case: 

Sandwich mount! Made in Onshape. The case has 3 parts, a bottom, plate for the keys, and a top. (all different colors in the picture :D). Also has a fun mouth-shaped usb cutout.

## PCB:

Schematic
![schematic](https://cdn.hackclub.com/019f78dd-f158-7e59-b917-90d932507a68/image.png)

PCB
![pcb](https://cdn.hackclub.com/019f78dd-6d69-737e-9352-9798c7476d12/image.png)

Made with <3 in Kicad. Silkscreen imported from Figma. Time spent on the pcb was journaled 

## Firmware:

- Used QMK and used adafruit/macropad as a template since it had similar features to mine
- Not entirely finished, I will be using VIA to change the macros and leds
- I did add two layers of macros for now, one for gaming and one for drawing. Will probably change in the future!

# BOM:

    1x Seeed XIAO RP2040
    9x through-hole 1N4148 Diodes
    9x MX-Style switches
    1x EC11 Rotary encoders
    1x 0.91 inch OLED display
    9x white blank DSA keycaps
    9x SK6812 MINI-E LEDs
    4x M3x16mm screws
    1x Case (three 3d printed parts)

yup i copied this from hackpad website