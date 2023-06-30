var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var valor = parseInt(input);
var [a, b, c] = [1, 1, 1];
for (let i = 1; i <= valor; i++){
    console.log(`${a} ${b} ${c}`);
    a++;
    b=Math.pow(a,2);
    c=Math.pow(a,3);
}