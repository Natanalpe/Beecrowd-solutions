var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var values = input.split(' ');
var a = parseFloat(values[0]);
var b = parseFloat(values[1]);
var c = parseFloat(values[2]);
var values = [a, b, c];
var sorting = values.sort((a, b) => {return b - a})
a = sorting[0]
b = sorting[1]
c = sorting[2]
if(a >= b+c) {
     console.log('NAO FORMA TRIANGULO');
} else {
     if(a**2 == b**2 + c**2) {
          console.log('TRIANGULO RETANGULO');
     }
     if(a**2 > b**2 + c**2) {
          console.log('TRIANGULO OBTUSANGULO');
     }
     if(a**2 < b**2 + c**2) {
          console.log('TRIANGULO ACUTANGULO');
     }
     if(a === b && b === c) {
          console.log('TRIANGULO EQUILATERO');
     }
     if((a === b && a !== c) || (a === c && a !== b) || (b === c && b !== a)) {
          console.log('TRIANGULO ISOSCELES');
     }
}