var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var a = lines.shift() * 2;
var b = lines.shift() * 3;
var c = lines.shift() * 5;
const pesoTotal = 10;
var media = (a + b + c) / pesoTotal;

console.log(`MEDIA = ${media.toFixed(1)}`);