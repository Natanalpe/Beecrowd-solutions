var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var xy1 = lines.shift(' ').split(' ');
var xy2 = lines.shift(' ').split(' ');
var x1 = parseFloat(xy1[0]);
var x2 = parseFloat(xy2[0]);
var y1 = parseFloat(xy1[1]);
var y2 = parseFloat(xy2[1]);

console.log(Math.sqrt(((x2 - x1) ** 2) + ((y2 - y1) ** 2)).toFixed(4))