var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split("\n");
var q = parseInt(lines.shift());

const red = (t, n) => t + n;

for (let i = 0; i < q; i++) {
    let [x, y] = lines.shift().trim().split(" ").map(e => parseInt(e))
    let vals = [];
    if(y === 0){
        console.log(0);
    }else{
        for (let j = x; j <= y * 2 + (x-1); j++) {
            if (j % 2 !== 0) {
                vals.push(j);
            }
        }
        console.log(vals.reduce(red));
    }
}