var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
for(let i = 0; i <= 9; i++){
    var val = parseInt(lines.shift());
    if(val <= 0) val = 1;
    console.log(`X[${i}] = ${val}`);
}