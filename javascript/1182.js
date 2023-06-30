var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var matr = [[],[],[],[],[],[],[],[],[],[],[],[]];
var valores = input.split('\n');
var coluna = parseFloat(valores.shift()), oper = String(valores.shift()).trim();
var sum = 0, count = 0;

for(let i = 0; i < 12; i++){
    for(let j = 0; j < 12; j++){
        matr[i].push(parseFloat(valores[count]));
        count++;
    }
}

for(let i = 0; i < 12; i++){
    sum += matr[i][coluna];
}
console.log(oper == "S" ? sum.toFixed(1) : (sum / 12).toFixed(1));