var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var palavra = lines.shift();
console.log(palavra.length >= 10 ? "palavrao" : "palavrinha");