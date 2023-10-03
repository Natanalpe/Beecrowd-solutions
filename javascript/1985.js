var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var n = parseInt(lines.shift()), total = 0, valor

for(let i = 0; i < n; i++) {
    var [p, q] = lines.shift().split(' ').map(e => parseInt(e))

    switch(p) {
        case 1001:
            valor = 1.5
            break
        case 1002:
            valor = 2.5
            break
        case 1003:
            valor = 3.5
            break
        case 1004:
            valor = 4.5
            break
        case 1005:
            valor = 5.5
            break           
        default:
            break
    }
    total += valor * q
}

console.log(total.toFixed(2))
