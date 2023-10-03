var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n = parseInt(lines.shift()), total = 0

for(let i = 0; i < n; i++) {
    var [t, v] = lines.shift().split(' ').map(e => parseInt(e))
    total += t * v
}

console.log(total)