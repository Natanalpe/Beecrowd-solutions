var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = parseInt(input.split('\n'));
if(lines % 2 === 0) {
     lines++
}
for(let i = 0; i <= 10; i += 2) {
     console.log(lines+i)
}