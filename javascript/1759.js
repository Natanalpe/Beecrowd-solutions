var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var n = parseInt(input);
var arr = [];

for(let i = 0; i < n; i++){
    arr.push("Ho");
}
console.log(arr.join(" ")+"!");