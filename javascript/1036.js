var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var l=input.split(' ');
a=parseFloat(l[0]);
b=parseFloat(l[1]);
c=parseFloat(l[2]);
if(a==0.0||(b**2-4*a*c)<0) {
    console.log('Impossivel calcular');
} else{
    var x1=(-b+(b**2-4*a*c)**(1/2))/(2*a);
    var x2=(-b-(b**2-4*a*c)**(1/2))/(2*a);
    console.log('R1 = '+x1.toFixed(5));
    console.log('R2 = '+x2.toFixed(5));
}