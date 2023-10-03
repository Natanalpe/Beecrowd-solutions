var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n = parseInt(lines.shift()), total = 0, b = 3

for(let i = 0; i < n; i++) {
    var a = parseInt(lines.shift())

    if(b !== a) {
        b = a
        total++
    }
}
console.log(total)