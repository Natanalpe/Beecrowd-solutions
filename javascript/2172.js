var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

do {
    var [x, m] = lines.shift().split(' ').map(e => parseInt(e))

    if((x * m) !== 0) console.log(x * m)

} while(x !== 0 && m !== 0)