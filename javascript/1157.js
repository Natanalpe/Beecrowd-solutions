var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var x = parseInt(input);
for(let i = 1;i<=x;i++){
    if(x % i === 0){
        console.log(i);
    }
}