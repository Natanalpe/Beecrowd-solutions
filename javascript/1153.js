var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var a = parseInt(input), c = 1;
for(let i=a;i>=1;i--)c*=i;
console.log(c);