var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n = parseInt(lines.shift());

for(let i = 0; i < n * 2; i+=2) {
  var jogada = lines[i].split(' ');
  var soma = lines[i+1].split(' ').map(e => parseInt(e)).reduce((a, b) => a + b);

  var j1 = jogada[0], j2 = jogada[2];
  var r1 = jogada[1], r2 = jogada[3];
  var eo = soma % 2 == 0 ? "PAR" : "IMPAR";

  console.log(eo == r1 ? j1 : j2);
  
}