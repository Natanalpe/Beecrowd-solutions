var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split("\n"),initial = parseInt(lines.shift());

while(initial !== 0){
    var sum = 0;
    for(let i = initial; i <= initial+9; i++){
        if(i % 2 === 0){
            sum+=i;
        }
    }
    console.log(sum);
    initial = parseInt(lines.shift());
}