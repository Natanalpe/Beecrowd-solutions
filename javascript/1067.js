var input = require('fs').readFileSync('./dev/stdin', 'utf8');
var lines = input.split('\n');

var v = lines.shift();

for(let i = 0; i <= v; i++) {
    if(i%2 === 1) {
        console.log(i)
    }
}