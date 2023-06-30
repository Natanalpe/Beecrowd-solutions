var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var valores = input.trim().split(" ");
var arr = [];
var a = parseInt(valores.shift());
var b = parseInt(valores.shift());

for (let i = 1; i <= b; i += a) {
    arr = [];

    for (let j = 0; j < a && i + j <= b; j++) {
        arr.push(i + j);
    }
    console.log(arr.join(" "));
}