var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var a = lines.shift() * 3.5;
var b = lines.shift() * 7.5
var pesoTotal = 11;
var media = (a + b) / pesoTotal;

console.log(`MEDIA = ${media.toFixed(5)}`)