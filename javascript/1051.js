var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var s,c;
var c=0;
s=parseFloat(lines[0])

if(s>4500){
    c+=(s - 4500) * 0.28;
    s=4500.00;
}
if(s>3000){
    c+=(s - 3000) * 0.18;
    s=3000;
}
if(s>2000){
    c+=(s - 2000) * 0.08;
}
if(c == 0.00){
    console.log("Isento");
}else{
    console.log("R$ "+c.toFixed(2));
}