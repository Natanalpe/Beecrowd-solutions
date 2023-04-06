var input = require('fs').readFileSync('./dev/stdin', 'utf8');
var lines = input.split(' ');
var s = parseInt(lines.shift());
var m = Math.pow(s, 2);
var brancas = m%2 === 0 ? m / 2 : Math.ceil(m / 2);
var pretas = m%2 === 0 ? m / 2 : Math.floor(m / 2);
console.log(brancas + " casas brancas e " + pretas + " casas pretas");