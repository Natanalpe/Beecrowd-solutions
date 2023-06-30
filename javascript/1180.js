var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var menor = Math.pow(1000,3), p = 0;
var q = parseInt(lines.shift());
var values = lines.shift().trim().split(" ").map(e => parseInt(e));

for(let i = 0; i < values.length; i++){
    if(values[i] < menor) {
        menor = values[i];
        p = i;
    }
}
console.log(`Menor valor: ${menor}\nPosicao: ${p}`);