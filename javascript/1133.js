var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var x = parseInt(lines.shift());
var y = parseInt(lines.shift());
var q = [];
var check = y > x;

if (check) {
     for (let i = x + 1; i <= y - 1; i++) {
          if ((i % 5 == 2) || (i % 5 == 3)) {
               q.push(i)
          }
     }
} else {
     for(let j = y + 1; j <= x - 1; j++) {
          if((j % 5 == 2) || (j % 5 == 3)) {
               q.push(j)
          }
     }
}
if (q.length > 0) {
     q.forEach(e => {
          console.log(e)
     })
}