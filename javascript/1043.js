var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var values = input.split(' ');
var a = parseFloat(values[0]);
var b = parseFloat(values[1]);
var c = parseFloat(values[2]);
function check(v1, v2, v3) {
     var calc = v1 + v2;
     if(calc > v3) {
          return true
     } else {
          return false
     }
}

var abc = check(a, b, c);
var acb = check(a, c, b);
var bca = check(b, c, a);
var area = ((a + b) * c) / 2;
if(abc && acb && bca) {
     console.log('Perimetro = ' + (a+b+c).toFixed(1));
} else {
     console.log('Area = ' + area.toFixed(1));
}