var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
for(let i = 1; i <= parseInt(lines[0]); i++) {
     if(!isNaN(lines[i][0])){
          console.log(eval(lines[i]))
     } else {
          console.log('skipped')
     }
}