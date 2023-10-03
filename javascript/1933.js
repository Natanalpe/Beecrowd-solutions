var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var [a, b] = input.split(' ').map(e => parseInt(e));

console.log(a > b ? a : b);