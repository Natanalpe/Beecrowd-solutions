var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var numero = parseInt(lines.shift());
var porHora = parseInt(lines.shift());
var horas = lines.shift();
var salarioTotal = (porHora * horas).toFixed(2);

console.log(`NUMBER = ${numero}`);
console.log(`SALARY = U$ ${salarioTotal}`);