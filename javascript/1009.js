var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var nome = lines.shift();
var salario = parseFloat(lines.shift());
var vendas = parseFloat(lines.shift());
var comissao = vendas * 0.15;
var salarioFinal = salario + comissao;

console.log("TOTAL = R$ " + salarioFinal.toFixed(2));