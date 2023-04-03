var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var raio = lines.shift();
var pi = 3.14159;
var esfera = (4 / 3) * pi * (raio ** 3);
console.log("VOLUME = " + esfera.toFixed(3))