var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var [a, b, c] = input.split(' ').map(e => parseInt(e))

semiperimetro = (a + b + c) / 2;
area = Math.sqrt(semiperimetro * (semiperimetro - a) * (semiperimetro - b) * (semiperimetro - c))
console.log(area.toFixed(3) + " m2")