var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var [n, l] = lines.shift().trim().split(' ').map((x) => parseInt(x));
var m = n * l;
console.log(m);