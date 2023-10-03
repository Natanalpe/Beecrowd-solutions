var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var [p1, c1, p2, c2] = input.split(' ').map(e => parseInt(e))

var calc = p1 * c1 == p2 * c2
    
    if(p1 * c1 == p2 * c2) console.log(0)
    else if(p1 * c1 > p2 * c2) console.log(-1)
    else console.log(1);