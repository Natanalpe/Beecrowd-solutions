var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var x=parseInt(lines.shift())
var y=parseInt(lines.shift())
var soma=0
var b,s;

if(x > y){b=x; s=y;}
else{b=y; s=x;}
    
for(let i=s+1; i<=b-1;i++){
    if(i%2 != 0){
        soma+=i;   
    }
}
console.log(soma)