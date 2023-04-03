var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var linhaUm = lines.shift().split(' ');
var linhaDois = lines.shift().split(' ');

var [quantidadeUm, quantidadeDois] = [parseInt(linhaUm[1]), parseInt(linhaDois[1])];
var [valorUm, valorDois] = [parseFloat(linhaUm[2]), parseFloat(linhaDois[2])];
var [totalUm, totalDois] = [quantidadeUm * valorUm, quantidadeDois * valorDois];
var final = (totalUm + totalDois).toFixed(2);

console.log("VALOR A PAGAR: R$ " + final);