var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n').map(e => parseInt(e));
var [a, b] = lines

console.log(a-b)