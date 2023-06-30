var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var q=parseInt(lines.shift())

for(let i=1;i<=q;i++){
    [x,y]=lines.shift().trim().split(' ').map((el) => parseInt(el))
    if(y==0){
        console.log('divisao impossivel')
    }else{
        let c=x/y
        console.log(c.toFixed(1))
    }
    
}