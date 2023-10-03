var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var [a, b, c] = input.split(' ').map(e => parseInt(e));
console.log(b / c >= a ? "S" : "N")