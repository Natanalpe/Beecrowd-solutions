var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.trim().split('\n');

while (lines.length) {
    let n = parseInt(lines.shift());

    if (n === 0) {
        console.log("vai ter copa!");
    } else {
        console.log("vai ter duas!");
    }
}