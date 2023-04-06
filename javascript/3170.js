var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var b = parseInt(lines.shift());
var g = Math.floor(lines.shift() / 2);
var f = g - b;
if (b > g) {
     console.log('Amelia tem todas bolinhas!')
} else if (!f) {
     console.log('Amelia tem todas bolinhas!')
} else {
     console.log(`Faltam ${g - b} bolinha(s)`)
}