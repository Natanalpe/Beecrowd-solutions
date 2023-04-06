var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var a = lines.shift();
var b = lines.shift();
console.log(a.length >= b.length ? "go" : "no");