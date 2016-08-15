/*

The following section defines the Constants.h file

*/


// PIN Constants
var HackH = 48;
var HackA = 26;
var HackC = 24;
var HackK = 46;
var MiddleA = 36;
var ColaC = 38;
var ColaO = 28;
var ColaL = 40;
var ColaA = 30;
var RedZero = 44;
var RedOne = 34;
var RedTwo = 50;
var RedThree = 42;
var RedFour = 22;
var RedFive = 32;

// Lights
var Lights = [
    HackH,
    HackA,
    HackC,
    HackK,
    MiddleA,
    ColaC,
    ColaO,
    ColaL,
    ColaA,
    RedZero,
    RedOne,
    RedTwo,
    RedThree,
    RedFour,
    RedFive
];

// Letters
var letters = [
    HackH,
    HackA,
    HackC,
    HackK,
    MiddleA,
    ColaC,
    ColaO,
    ColaL,
    ColaA,
];

// Background
var background = [
    RedZero,
    RedOne,
    RedTwo,
    RedThree,
    RedFour,
    RedFive
];

// Timeouts
none = 0;
blinky = 1000;
minimal = 500;
normal = 800;
ish = 2000;
extended = 4000;

// Constants
var PATTERN_OFF = 0; // HIGH
var PATTERN_ON = 1; // LOW


/*


The following section defines global methods needed


*/

var delay = function(time) {
    var entryTime = Date.now();
    while (true) {
        if (Date.now() - entryTime >= time) {
            break;
        }
    }
}

var digitalWrite = function(pin, highOrLow) {
    console.log(`digitalWrite pin:${pin} highOrLow:${highOrLow}`);
}

var sizeof = function(value) {
    return value.length;
}

var random = function(min, max) {
    // Min inclusive, max exclusive
    return Math.floor(Math.random() * ((max - 0) - min) + min);
}

var log = function(message, integer) {
    console.log(message, integer)
}

/*


The following section attempts, transpile, and run the arduino code
    

*/

var fs = require('fs');

var arduinoCode = fs.readFileSync('./CocaCola/CocaCola.ino').toString();

console.log(`
Original Code: 
######################################
${arduinoCode}
######################################
`);

var arduinoCodeParts = arduinoCode.split("// )'(");

var runableCode = arduinoCodeParts[1]
    .replace(/int ([A-Za-z]*) =/g, ' var $1 =') // Replace any instance of "int variable = n"
    .replace(/int /g, '') // Remove "int" from any instance of "int variable"
    .replace(/void loop\(\) {/, 'while (true) {') // Turn our main method into a while loop
    .replace(/void ([A-Za-z]*)/g, ' var $1 = function'); // Replace any "void function" with a javascript function definition

console.log(`
Runable Code: 
######################################
${runableCode}
######################################
`);

console.log(`
Running code:
######################################
`);

eval(runableCode);
