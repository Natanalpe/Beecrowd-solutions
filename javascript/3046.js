var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n = parseInt(lines.shift())
total = ((n+1)*(n+2))/2

console.log(total)