var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split(' ');

var a = parseInt(lines[0]);
var b = parseInt(lines[1]);
var c = parseInt(lines[2]);

var maiorAB = (a + b + Math.abs(a - b)) / 2
var maiorAC = (maiorAB + c + Math.abs(maiorAB - c)) / 2;
console.log(maiorAC + " eh o maior");