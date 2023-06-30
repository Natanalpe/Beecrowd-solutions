var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var inp = parseInt(input);
var n1 =0, n2 = 1, next = 0;
var values = [];
for(let i = 1; i <= inp; i++){
    if(i == inp){
        values.push(n1);
    }else{
        values.push(n1);
        next = n1 + n2;
        n1 = n2;
        n2 = next;
    }
}

console.log(values.join(" "));