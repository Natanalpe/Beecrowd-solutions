var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var tempoGasto = lines.shift();
var velocidadeMedia = lines.shift();
var kmPorLitro = 12;
var calculo = (velocidadeMedia / kmPorLitro * tempoGasto).toFixed(3);
console.log(calculo)