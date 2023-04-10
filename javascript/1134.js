var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var a = 0;
var g = 0;
var d = 0;
for(let i = 0; i <= lines.length; i++) {
     if(lines[i] == 1) {
          a++
     } else if(lines[i] == 2) {
          g++
     } else if(lines[i] == 3) {
          d++
     } else if(lines[i] == 4) {
          break
     } else {
          
     }
}
console.log("MUITO OBRIGADO");
console.log("Alcool: "+a);
console.log("Gasolina: "+g);
console.log("Diesel: "+d);