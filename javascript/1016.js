var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var tempo = parseInt(lines.shift());
var vCarroX = 60;
var vCarroY = 90;
var calc = 60 * tempo / (vCarroY - vCarroX);
console.log(`${calc} minutos`);