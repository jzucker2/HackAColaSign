# HackAColaSign

![](./Assets/hackacola.gif?raw=true)

## To make a new [pattern](./CocaColaClassic/demo.mov)
- copy the contents of [EverythingOn](./EverythingOn) into a new folder, and rename [EverythingOn.ino](./EverythingOn/EverythingOn.ino) to `folder-name.ino`

## To work with the pattern that is installed on the sign
- To update the pattern the sign use on the playa, open [CocaCola/CocaCola.ino](./CocaCola/CocaCola.ino) with your preferred editor, modify things, and run the emulator

## To run the [emulator](./emulator.js)
- With Node >= 4.0.0: installed, run `node emulator.js`
- Without Node >= 4.0.0 installed: Install Node >= 4.0.0, and see prior instructions
- Additionally you may pass a path to an an alternative file, ie: `node emulator.js -f ./CocaColaOutsideIn/CocaColaOutsideIn.ino`

## For testing
- Pass the -t flag to verify your c++ makes sense to the emulator, without running the emulator, it might pick up some c++ errors for you
- Test your thing: `node emulator -t -f YourThing/YourThing.ino`
- Test all the things: `for i in `find */*.ino` ; do node emulator -t -f $i ; done`

## Working with the sign
### Environment:
#### When code to the sign with the Arduino IDE, you need to set the following two things in the Tools menu:
- Board: Arduino/Genuino: Mega or Mega 2560
- Port: /dev/tty.usbmodem

Otherwise the IDE will compile for the wrong CPU or something, and things generally won't work.

But once it's configured, and your computer is connected via USB, hit the Upload button (circle with a ➡ (right arrow, if unicode is failing)) and the sign will start running your code.

## For further [documentation](./CocaCola/Constants.h)
- See [CocaCola/Constants.h](./CocaCola/Constants.h)
