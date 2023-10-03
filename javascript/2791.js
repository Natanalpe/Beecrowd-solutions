var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var n = input.split(' ').map(e => parseInt(e))

for(let i = 0; i < 4; i++) {
    if(n[i]) {
        console.log(i + 1)
        break
    }
}