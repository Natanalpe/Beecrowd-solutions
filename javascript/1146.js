var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var valores = input.split("\n");

while (valores.length) {

    x = parseInt(valores.shift());
    if(x === 0)break;
    let num = [];
    for (let i = 1; i <= x; i++) {
        num.push(i);
    }
    console.log(num.join(" "));
}