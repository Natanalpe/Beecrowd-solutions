var input = require('fs').readFileSync('./dev/stdin', 'utf8');
var lines = input.split('\n');
var arr = [parseInt(lines.shift()), parseInt(lines.shift()), parseInt(lines.shift()), parseInt(lines.shift()), parseInt(lines.shift())];
var r = 0;
arr.forEach(e => {
     if(e%2 === 0) {r++};
})
console.log(r + " valores pares")