var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var km = lines.shift();
var litros = parseFloat(lines.shift());

console.log((km / litros).toFixed(3) + ' km/l')