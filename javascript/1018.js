var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var value = parseInt(lines.shift());

var cem = 0;
var cinquenta = 0;
var vinte = 0;
var dez = 0;
var cinco = 0;
var dois = 0;
var um = 0;

console.log(value)

while (value >= 1) {
     if (value >= 100) {
          cem += 1;
          value -= 100;
     } else if (value >= 50) {
          cinquenta += 1;
          value -= 50;
     } else if (value >= 20) {
          vinte += 1;
          value -= 20;
     } else if (value >= 10) {
          dez += 1;
          value -= 10;
     } else if (value >= 5) {
          cinco += 1;
          value -= 5;
     } else if (value >= 2) {
          dois += 1;
          value -= 2;
     } else if (value >= 1) {
          um += 1;
          value -= 1
     }
}
console.log(cem + " nota(s) de R$ 100,00")
console.log(cinquenta + " nota(s) de R$ 50,00")
console.log(vinte + " nota(s) de R$ 20,00")
console.log(dez + " nota(s) de R$ 10,00")
console.log(cinco + " nota(s) de R$ 5,00")
console.log(dois + " nota(s) de R$ 2,00")
console.log(um + " nota(s) de R$ 1,00")