var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var [a, b] = input.split(' ').map(e => parseInt(e)), soma

soma = Math.floor(((a + b) * (b - a + 1)) / 2)

console.log(soma)