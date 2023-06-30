var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var valores = input.split('\n'), count = 0, sum = 0;
var oper = String(valores.shift()).trim();

for (let i = 0; i < 12; i++) {
    for (let j = 0; j < 12; j++) {

        var val = parseFloat(valores.shift());

        if ((j > 6 && i < 6 && j > 11 - i) || (i > 5 && j > i)) {
            sum += val;
            count++;
        }
    }
}
console.log(oper == 'S' ? sum.toFixed(1) : (sum / count).toFixed(1));