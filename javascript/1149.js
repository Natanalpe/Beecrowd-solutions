var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var valores = input.split(" ");
var x = parseInt(valores.shift());
var y = parseInt(valores.shift());
var soma = 0;
while (y <= 0) {
    y = parseInt(valores.shift());
}
var count = 0;
for (let i = x; i <= 99999; i++) {
    if (count == y) {
        break;
    }
    soma += i;
    count++;
}
console.log(soma);