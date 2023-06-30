var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split("\n");
for(let i = 0; i < 100; i++){
    var val = parseFloat(lines.shift());
    if(val <= 10){
        console.log(`A[${i}] = ${val.toFixed(1)}`);
    }
}