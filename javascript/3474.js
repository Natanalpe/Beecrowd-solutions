var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var [venda, integrantes] = input.split(' ').map(e => parseFloat(e));

console.log((venda / integrantes).toFixed(2));