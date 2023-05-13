var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var pos=0
var neg=0
var imp=0
var par=0
var a=0
var j=0
for(let i = 0; i < 5; i++){
    a=parseInt(lines.shift())    
    if(a%2 == 0 || a == 0){
        par+=1
    }else{
        imp+=1
    }
    if(a>0)pos+=1
    if(a<0)neg+=1
    
}
console.log(`${par} valor(es) par(es)`)
console.log(`${imp} valor(es) impar(es)`)
console.log(`${pos} valor(es) positivo(s)`)
console.log(`${neg} valor(es) negativo(s)`)