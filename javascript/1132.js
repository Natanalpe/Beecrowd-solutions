var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split("\n");
var a = parseInt(lines.shift());
var b = parseInt(lines.shift());
var maior = Math.max(a, b);
var menor = Math.min(a, b);
var total = 0;
for (let i = menor; i <= maior; i++) {
    if(i % 13 != 0){
        total+=i;
    }
}
console.log(total);