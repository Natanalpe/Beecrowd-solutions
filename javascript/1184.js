var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var valores = input.split('\n'), sum = 0, numeros = 0;
var oper = String(valores.shift()).trim();

for (i = 0; i < 12; i++) {
    for (j = 0; j < 12; j++) {
        var val = parseFloat(valores.shift());
        if (i > j) {
            sum += val;
            numeros++;
        }
    }
}
console.log(oper == "S" ? sum.toFixed(1) : (sum / numeros).toFixed(1));