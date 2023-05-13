var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var b=0
var curre=0
var idx=0

for(let i=1;i<=100;i++){
    curre=parseInt(lines.shift())
    if(curre>b){
        b=curre
        idx=i
    }
}
console.log(b)
console.log(idx)