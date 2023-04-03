var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var linha = lines.shift().split(' ');
var first = parseFloat(linha[0]);
var second = parseFloat(linha[1]);
var third = parseFloat(linha[2]);

var triangulo = (first * third / 2);
var circulo = (3.14159 * Math.pow(third, 2));
var trapezio = (((first + second) * third) / 2);
var quadrado = (Math.pow(second, 2));
var retangulo = (first * second);
console.log("TRIANGULO: " + triangulo.toFixed(3));
console.log("CIRCULO: " + circulo.toFixed(3));
console.log("TRAPEZIO: " + trapezio.toFixed(3));
console.log("QUADRADO: " + quadrado.toFixed(3));
console.log("RETANGULO: " + retangulo.toFixed(3));