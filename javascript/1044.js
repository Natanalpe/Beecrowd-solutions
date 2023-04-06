var input = require('fs').readFileSync('./dev/stdin', 'utf8');
var lines = input.split(' ');
var a = parseInt(lines[0]);
var b = parseInt(lines[1]);
console.log((b % a === 0) || (a % b === 0)?"Sao Multiplos":"Nao sao Multiplos")