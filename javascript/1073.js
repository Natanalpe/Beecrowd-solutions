var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var i=parseInt(lines[0])
var c;
for(let j=1;j<=i;j++){
    if(j%2 == 0){
      c=Math.pow(j,2) 
      console.log(`${j}^2 = ${c}`)
    }
}