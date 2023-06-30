var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split("\n");
var a = parseInt(lines.shift());
var sum = a;
var count = 1;

while(lines.length){
    var b = parseInt(lines.shift());

    if(b > a) break;
}

while(sum < b){
    sum += a + count;
    count++;
}

console.log(count);