var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split("\n");
var count = 19;
for(let i = 0; i < 20; i++){
    console.log(`N[${i}] = ${lines[count]}`)
    count--;
}