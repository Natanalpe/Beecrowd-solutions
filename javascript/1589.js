var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.trim().split('\n');
var n = lines.shift();
while(lines.length){
    let [x, y] = lines.shift().trim().split(" ").map(e => parseInt(e));
    console.log(x+y);
}