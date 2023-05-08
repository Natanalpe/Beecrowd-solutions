var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var [a,b,c,d,e,f] = lines;
var total=0;
var t=0;
a=parseFloat(a)
b=parseFloat(b)
c=parseFloat(c)
d=parseFloat(d)
e=parseFloat(e)
f=parseFloat(f)
if(a>=1){
    t++;
    total+=a;
}
if(b>=1){
    t++;
    total+=b;
}
if(c>=1){
    t++;
    total+=c;
}
if(d>=1){
    t++;
    total+=d;
}
if(e>=1){
    t++;
    total+=e;
}
if(f>=1){
    t++;
    total+=f;
}

total/=t
console.log(`${t} valores positivos`)
console.log(total.toFixed(1))