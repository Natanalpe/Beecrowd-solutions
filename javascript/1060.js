var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var q=0;
for(let i = 0; i<=lines.length;i++){
    if(lines[i] >= 1){
        q++
    }
}
console.log(`${q} valores positivos`)