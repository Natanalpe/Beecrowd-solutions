var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split("\n");
var sum = 0,current=0,count=0;
while(lines.length){
    current = parseInt(lines.shift());
    if(current<0)break;
    sum+=current;
    count++;
}
console.log((sum/count).toFixed(2));