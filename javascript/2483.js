var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var n = parseInt(input), a = [];

for(let i = 0; i < n; i++) {
    a.push('a');
}

console.log("Feliz nat" + a.join('') + "l!");