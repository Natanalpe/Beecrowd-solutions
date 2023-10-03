var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var tipo = parseInt(lines.shift());
var escolhas = lines.shift().trim().split(" ").map(e => parseInt(e));
var corretos = 0;

for(let i = 0; i < 5; i++) {
  if(escolhas[i] ===tipo) {
    corretos++;
  }
}

console.log(corretos);