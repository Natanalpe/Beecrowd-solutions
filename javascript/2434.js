var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
[n, init] = lines.shift().split(' ').map(e => parseInt(e))
var lowest_value = init

for(let i = 0; i < n; i++) {
    var dh = parseInt(lines.shift())
    init += dh

    if(init < lowest_value) lowest_value = init
}

console.log(lowest_value)