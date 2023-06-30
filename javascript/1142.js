var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var valor = parseInt(input);
var [a,b,c] = [1,2,3];

for (let i = 1; i <= valor; i++) {
    console.log(`${a} ${b} ${c} PUM`);
    a += 4;
    b += 4;
    c += 4;
}