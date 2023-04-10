var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
console.log(parseInt(lines[1])*2 - parseInt(lines[0]));