var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var gramas = [300, 1500, 600, 1000, 150], total = 225

for(let i = 0; i < 5; i++) {
    var a = parseInt(lines.shift())
    total += a * gramas[i]
}

console.log(total)