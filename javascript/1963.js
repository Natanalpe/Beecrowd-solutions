var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var [antigo, novo] = input.split(' ').map(e => parseFloat(e));

console.log(((novo / antigo) * 100 - 100).toFixed(2) + "%")