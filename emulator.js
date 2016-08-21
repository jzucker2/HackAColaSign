'use strict';

/*

The following section defines the Constants.h file

*/


// PIN Constants
const HackH = 48;
const HackA = 26;
const HackC = 24;
const HackK = 46;
const MiddleA = 36;
const ColaC = 38;
const ColaO = 28;
const ColaL = 40;
const ColaA = 30;
const RedZero = 44;
const RedOne = 34;
const RedTwo = 50;
const RedThree = 42;
const RedFour = 22;
const RedFive = 32;

// Lights
const Lights = [
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
const letters = [
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
const background = [
    RedZero,
    RedOne,
    RedTwo,
    RedThree,
    RedFour,
    RedFive
];

// Timeouts
const none = 0;
const blinky = 1000;
const minimal = 500;
const normal = 800;
const ish = 2000;
const extended = 4000;

// Constants
const PATTERN_OFF = 0; // HIGH
const PATTERN_ON = 1; // LOW


/*


The following section defines global methods needed


*/

const signDrawer = require('./signDrawer.js');

const lightsState = [ ];

Lights.forEach(function (value, idx) {
    lightsState[idx] = PATTERN_OFF;
});

const delay = function(time) {
    const entryTime = Date.now();
    while (true) {
        if (Date.now() - entryTime >= time) {
            break;
        }
    }
}

const digitalWrite = function(pin, highOrLow) {
    if (typeof(pin) === 'undefined') {
        throw new Error(`You have an undefined pin being set to: ${highOrLow}`)
    }
     console.log(`digitalWrite light:${Lights.indexOf(pin)} pin:${pin} highOrLow:${highOrLow}`);
     lightsState[Lights.indexOf(pin)] = highOrLow ? PATTERN_ON : PATTERN_OFF;
     signDrawer.drawSign(lightsState);

}

const sizeof = function(value) {
    return value.length;
}

const random = function(min, max) {
    // Min inclusive, max exclusive
    return Math.floor(Math.random() * ((max - 0) - min) + min);
}

const log = function(message, integer) {
    console.log(`${message} ${typeof(integer) !== 'undefined' ? integer : ''}`);
}


/*


The following section attempts, transpile, and run the arduino code
    

*/

const fs = require('fs');

let pathToArduinoCode = './CocaCola/CocaCola.ino';
let test = false;
let verbose = false;

process.argv.forEach(function (value, index, array) {

    if ((value == "--file" || value == "-f") && array[index+1]) {
        pathToArduinoCode = array[index+1];
    } else if (value == "--test" || value == "-t") {
        test = true;
    } else if (value == "--verbose" || value == "-v") {
        verbose = true;
    }

});


const arduinoCode = fs.readFileSync(pathToArduinoCode).toString();

const arduinoCodeParts = arduinoCode.split("// )'(");

var runableCode = arduinoCodeParts[1]

const cstructReplaceRegexp = new RegExp(/\[\]\s*=\s*\{/g);

if (cstructReplaceRegexp.test(runableCode)) {
	runableCode = runableCode.replace(cstructReplaceRegexp, ' = [') // turn any C array[] = { x, y } into var array = [js, arrays]
		.replace(/\};/g, '];');
}

runableCode = runableCode.replace(/int(\s*_*[A-Za-z]+_*\d*\s*)=/g, 'var$1=') // Replace any instance of "int variable = n"
	.replace(/int /g, '') // Remove "int" from any instance of "int variable"
	.replace(/void loop\(\) {/, 'while (true) {') // Turn our main method into a while loop
	.replace(/void (\s*_*[A-Za-z]+_*\d*\s*)/g, ' var $1 = function'); // Replace any "void function" with a javascript functiondefinition

if (runableCode.indexOf(")\n") != -1) {
        throw new Error(`${pathToArduinoCode}: )\\n found without a semicolon`);
}

if (verbose) {

    console.log(`
    ######################################

    Loading: ${pathToArduinoCode}

    ######################################

    ${arduinoCode}

    ######################################

    Runable Code: 

    ######################################

    ${runableCode}

    ######################################

    Running code:

    ######################################
    `);

}

if (test) {
    // Will pass the test flag to verify quickly
    console.log(`OK: ${pathToArduinoCode}`);
    process.exit(0);
}

eval(runableCode);
