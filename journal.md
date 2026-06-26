# 6/25 Working on the pcb schematic
Spent about 2 hours on this. 
![schematic](https://cdn.hackclub.com/019f0512-ab4e-7f33-8f4a-703cd42f4740/image.png)
(I did eventually fix the diodes that weren't connected to the wires)

First set up the repo and kicad project, finding some of the symbols and footprints I needed (OLED and rotary encoder, still need to get the LEDs'). In the process I learned that submodules were a thing and got the OLED display's footprint linked :,D 

On to the PCB schematic - I did the OLED display first (and spent way too long finding the correct symbol for it). I watched some of [this tutorial](https://www.youtube.com/watch?v=dW0GBJ2mwgY) to see how it's wired since the video used the same type of microcontroller. (does it matter if it's the same? idk)

After that, I was beginning to work on the keys, but thought it would probably be best to have an idea of where I wanted things to go first, so I settled on this design
![sketch](https://cdn.hackclub.com/019f0521-90b7-7618-bb67-602316c1413a/image.png)
I was originally going to have a 6x2 keypad since I wanted it to look long like a fish, but decided to make it 4x3 instead to conserve a switch. I also want to try adding a LED underglow, but we'll see how that goes.

I referenced ai03's pcb tutorial for the matrix wiring, but I think I got the gist of it from browsing other Hack Clubbers' finished macropads c:

Next, I need to learn how datasheets work cuz they are probably important :sob: as well as adding the LEDs and rotary encoders to the schematic. 