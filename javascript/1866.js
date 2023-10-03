var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n = parseInt(lines.shift())

for(let i = 0; i < n; i++) {
    var a = parseInt(lines.shift())
    
    console.log(a % 2 === 0 ? "0" : "1")
}