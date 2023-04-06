var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split(' ');
var code = parseInt(lines[0]);
var qunt = parseInt(lines[1]);
var value = 0;
switch(code) {
     case 1:value = 4;
          break;
     case 2:value = 4.5;
          break;
     case 3:value = 5;
          break;
     case 4:value = 2;
          break;
     case 5:value = 1.5;
          break;
}
var calculo = qunt * value
console.log("Total: R$ " + calculo.toFixed(2));