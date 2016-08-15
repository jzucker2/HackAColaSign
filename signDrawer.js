
const signLights = `
🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴
🔴🔴🔴⚪️🔴🔴🔴🔴⚪️🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴⚪️🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴⚪️⚪️⚪️⚪️⚪️⚪️⚪️⚪️⚪️⚪️⚪️⚪️⚪️⚪️⚪️⚪️⚪️⚪️⚪️⚪️⚪️⚪️⚪️🔴🔴
🔴🔴🔴⚪️🔴🔴🔴🔴⚪️🔴🔴⚪️⚪️⚪️🔴🔴🔴⚪️⚪️⚪️⚪️🔴🔴⚪️🔴⚪️🔴🔴🔴🔴⚪️⚪️⚪️🔴🔴🔴🔴🔴⚪️🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴⚪️⚪️🔴🔴🔴🔴🔴🔴🔴🔴
🔴🔴🔴⚪️🔴🔴🔴🔴⚪️🔴🔴⚪️🔴⚪️🔴🔴🔴⚪️🔴🔴🔴🔴🔴⚪️⚪️🔴🔴⚪️⚪️🔴⚪️🔴⚪️🔴🔴⚪️⚪️🔴⚪️🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴⚪️⚪️🔴🔴🔴🔴🔴🔴🔴🔴🔴
🔴🔴🔴⚪️⚪️⚪️⚪️⚪️⚪️🔴🔴⚪️⚪️⚪️⚪️⚪️🔴⚪️⚪️⚪️⚪️🔴🔴⚪️🔴⚪️🔴🔴🔴🔴⚪️⚪️⚪️⚪️⚪️🔴🔴🔴⚪️🔴🔴🔴🔴🔴🔴⚪️⚪️⚪️⚪️🔴🔴🔴⚪️⚪️🔴🔴🔴⚪️⚪️⚪️🔴🔴🔴🔴
🔴🔴🔴⚪️🔴🔴🔴🔴⚪️🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴⚪️🔴🔴🔴🔴🔴🔴⚪️🔴🔴⚪️🔴🔴⚪️⚪️🔴🔴🔴🔴⚪️🔴⚪️🔴🔴🔴🔴
🔴🔴🔴⚪️🔴🔴🔴🔴⚪️⚪️⚪️⚪️⚪️⚪️⚪️⚪️⚪️⚪️⚪️⚪️⚪️⚪️⚪️⚪️⚪️⚪️⚪️🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴⚪️⚪️⚪️⚪️⚪️🔴⚪️⚪️⚪️⚪️🔴🔴⚪️⚪️🔴🔴🔴🔴⚪️⚪️⚪️⚪️🔴🔴🔴
🔴🔴🔴⚪️🔴🔴🔴🔴⚪️🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴
🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴🔴
`;

var pixels  = [
	/* HackH */  [[3, 1], [3, 2], [3, 3], [3, 4], [3, 5], [3, 6], [3, 7], [4, 4], [5, 4], [6, 4], [7, 4], [8, 1], [8, 2], [8, 3], [8, 4], [8, 5], [8, 6], [8, 7], [9, 6], [10, 6], [11, 6], [12, 6], [13, 6], [14, 6], [15, 6], [16, 6], [17, 6], [18, 6], [19, 6], [20, 6], [21, 6], [22, 6], [23, 6], [24, 6], [25, 6], [26, 6]],
	/* HackA */  [[11, 2], [12, 2], [13, 2], [11, 3], [13, 3], [11, 4], [12, 4], [13, 4], [14, 4], [15, 4]],
   /* HackC */  [[17, 2], [18, 2], [19, 2], [20, 2], [17, 3], [17, 4], [18, 4], [19, 4], [20, 4]],
   /* HackK */  [[23, 1], [23, 2], [23, 3], [23, 4], [24, 3], [25, 2], [25, 4]],
   /* MiddleA */[[27, 3], [28, 3], [30, 2], [30, 3], [30, 4], [31, 2], [31, 4], [32, 2], [32, 3], [32, 4], [33, 4], [34, 4], [35, 3], [36, 3]],
   /* ColaC */  [[38, 2], [38, 3], [38, 4], [38, 5], [39, 1], [40, 1], [41, 1], [42, 1], [43, 1], [44, 1], [45, 1], [46, 1], [47, 1], [48, 1], [49, 1], [50, 1], [51, 1], [52, 1], [53, 1], [54, 1], [55, 1], [56, 1], [57, 1], [58, 1], [59, 1], [60, 1], [61, 1], [39, 6], [40, 6], [41, 6], [42, 6], [43, 6]],
    /* ColaO */ [[45, 4], [45, 5], [45, 6], [46, 4], [46, 6], [47, 4], [47, 6], [48, 4], [48, 5], [48, 6]],
    /* ColaL */ [[54, 2], [55, 2], [53, 3], [54, 3], [52, 4], [53, 4], [51, 5], [52, 5], [51, 6], [52, 6]],
    /* ColaA */ [[57, 4], [57, 5], [57, 6], [58, 4], [58, 6], [59, 4], [59, 5], [59, 6], [60, 6]],
    /* RedZero */ [[0, 0], [0, 1], [0, 2], [0, 3], [0, 4], [0, 5], [0, 6], [0, 7], [0, 8], [1, 0], [1, 1], [1, 2], [1, 3], [1, 4], [1, 5], [1, 6], [1, 7], [1, 8], [2, 0], [2, 1], [2, 2], [2, 3], [2, 4], [2, 5], [2, 6], [2, 7], [2, 8], [3, 0], [3, 1], [3, 8], [4, 0], [4, 1], [4, 2], [4, 3], [4, 5], [4, 6], [4, 7], [4, 8], [5, 0], [5, 1], [5, 2], [5, 3], [5, 5], [5, 6], [5, 7], [5, 8]],
    /* RedOne */ [[6, 0], [6, 1], [6, 2], [6, 3], [6, 5], [6, 6], [6, 7], [6, 8], [7, 0], [7, 1], [7, 2], [7, 3], [7, 5], [7, 6], [7, 7], [7, 8], [8, 0], [8, 8], [9, 0], [9, 1], [9, 2], [9, 3], [9, 4], [9, 5], [9, 7], [9, 8], [10, 0], [10, 1], [10, 2], [10, 3], [10, 4], [10, 5], [10, 7], [10, 8], [11, 0], [11, 1], [11, 2], [11, 5], [11, 7], [11, 8], [12, 0], [12, 1], [12, 3], [12, 5], [12, 7], [12, 8], [13, 0], [13, 1], [13, 5], [13, 7], [13, 8], [14, 0], [14, 1], [14, 2], [14, 3], [14, 5], [14, 7], [14, 8], [15, 0], [15, 1], [15, 2], [15, 3], [15, 4], [15, 5], [15, 7], [15, 8]],
    /* RedTwo */ [[16, 0], [16, 1], [16, 2], [16, 3], [16, 4], [16, 5], [16, 7], [16, 8], [17, 0], [17, 1], [17, 2], [17, 5], [17, 7], [17, 8], [18, 0], [18, 1], [18, 3], [18, 5], [18, 7], [18, 8], [19, 0], [19, 1], [19, 3], [19, 5], [19, 7], [19, 8], [20, 0], [20, 1], [20, 3], [20, 4], [20, 5], [20, 7], [20, 8], [21, 0], [21, 1], [21, 2], [21, 3], [21, 4], [21, 5], [21, 7], [21, 8], [22, 0], [22, 1], [22, 2], [22, 3], [22, 4], [22, 5], [22, 7], [22, 8], [23, 0], [23, 1], [23, 5], [23, 7], [23, 8], [24, 0], [24, 1], [24, 2], [24, 4], [24, 5], [24, 7], [24, 8], [25, 0], [25, 1], [25, 3], [25, 4], [25, 5], [25, 7], [25, 8], [26, 0], [26, 1], [26, 2], [26, 3], [26, 4], [26, 5], [26, 6], [26, 7], [26, 8]],
    /* RedThree */ [[27, 0], [27, 1], [27, 2], [27, 3], [27, 4], [27, 5], [27, 6], [27, 7], [27, 8], [28, 0], [28, 1], [28, 2], [28, 4], [28, 5], [28, 6], [28, 7], [28, 8], [29, 0], [29, 1], [29, 2], [29, 3], [29, 4], [29, 5], [29, 6], [29, 7], [29, 8], [30, 0], [30, 1], [30, 5], [30, 6], [30, 7], [30, 8], [31, 0], [31, 1], [31, 3], [31, 5], [31, 6], [31, 7], [31, 8], [32, 0], [32, 1], [32, 5], [32, 6], [32, 7], [32, 8], [33, 0], [33, 1], [33, 2], [33, 3], [33, 5], [33, 6], [33, 7], [33, 8], [34, 0], [34, 1], [34, 2], [34, 3], [34, 5], [34, 6], [34, 7], [34, 8], [35, 0], [35, 1], [35, 2], [35, 4], [35, 5], [35, 6], [35, 7], [35, 8], [36, 0], [36, 1], [36, 2], [36, 3], [36, 4], [36, 5], [36, 6], [36, 7], [36, 8], [37, 0], [37, 1], [37, 2], [37, 3], [37, 4], [37, 5], [37, 6], [37, 7], [37, 8]],
    /* RedFour */ [[38, 0], [38, 1], [38, 2], [38, 6], [38, 7], [38, 8], [39, 0], [39, 2], [39, 3], [39, 4], [39, 5], [39, 7], [39, 8], [40, 0], [40, 2], [40, 3], [40, 4], [40, 5], [40, 7], [40, 8], [41, 0], [41, 2], [41, 3], [41, 4], [41, 5], [41, 7], [41, 8], [42, 0], [42, 2], [42, 3], [42, 4], [42, 5], [42, 7], [42, 8], [43, 0], [43, 2], [43, 3], [43, 4], [43, 5], [43, 6], [43, 7], [43, 8], [44, 0], [44, 2], [44, 3], [44, 4], [44, 5], [44, 6], [44, 7], [44, 8], [45, 0], [45, 2], [45, 3], [45, 4], [45, 7], [45, 8], [46, 0], [46, 2], [46, 3], [46, 5], [46, 7], [46, 8], [47, 0], [47, 2], [47, 3], [47, 5], [47, 7], [47, 8], [48, 0], [48, 2], [48, 3], [48, 6], [48, 7], [48, 8], [49, 0], [49, 2], [49, 3], [49, 4], [49, 5], [49, 6], [49, 7], [49, 8]],
    /* RedFive */ [[50, 0], [50, 2], [50, 3], [50, 4], [50, 5], [50, 6], [50, 7], [50, 8], [51, 0], [51, 2], [51, 3], [51, 4], [51, 7], [51, 8], [52, 0], [52, 2], [52, 3], [52, 6], [52, 7], [52, 8], [53, 0], [53, 2], [53, 5], [53, 6], [53, 7], [53, 8], [54, 0], [54, 2], [54, 4], [54, 5], [54, 6], [54, 7], [54, 8], [55, 0], [55, 3], [55, 4], [55, 5], [55, 6], [55, 7], [55, 8], [56, 0], [56, 2], [56, 3], [56, 4], [56, 5], [56, 6], [56, 7], [56, 8], [57, 0], [57, 2], [57, 3], [57, 4], [57, 7], [57, 8], [58, 0], [58, 2], [58, 3], [58, 5], [58, 7], [58, 8], [59, 0], [59, 2], [59, 3], [59, 7], [59, 8], [60, 0], [60, 2], [60, 3], [60, 4], [60, 5], [60, 6], [60, 7], [60, 8], [61, 0], [61, 2], [61, 3], [61, 4], [61, 5], [61, 6], [61, 7], [61, 8], [62, 0], [62, 1], [62, 2], [62, 3], [62, 4], [62, 5], [62, 6], [62, 7], [62, 8], [63, 0], [63, 1], [63, 2], [63, 3], [63, 4], [63, 5], [63, 6], [63, 7], [63, 8]]
];

var columnLength = 64

String.prototype.replaceCharacterAtIndexWithCharacter = function(index, character) {
    return this.substr(0, index) + character + this.substr(index + character.length);
}

const drawSign = function(lightsState) {
	// emoji are utf-16, not utf-8; the length of a single composed character is 2 utf-8 character codes
	var characterLength = '🔴'.length

	var signWithoutNewlines = signLights.replace(/\n/g, '')
	lightsState.forEach(function (value, i) {
		if (value == 1) {
			var xOrigins = []
			pixels[i].forEach(function (pixel, j) {
				// math (important things: emoji length, newlines)
				var index = (pixel[0] + (pixel[0] + (pixel[1] * (columnLength - 1)) * characterLength)) + (characterLength * pixel[1])
				signWithoutNewlines = signWithoutNewlines.replaceCharacterAtIndexWithCharacter(index , '⚫️')
			})
		}
	});

	var sign = ''
	while (signWithoutNewlines.length > 0) {
		sign += signWithoutNewlines.substring(0, columnLength * characterLength) + '\n'
		signWithoutNewlines = signWithoutNewlines.substring(columnLength * characterLength)
	}

	console.log(sign);
}

exports.drawSign = drawSign;