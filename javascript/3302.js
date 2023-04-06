var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var quant = parseInt(lines[0]);
var values = [];

for(let i = 1; i <= quant; i++) {
     values.push(parseInt(lines[i]))
}

values.forEach((e, i) =>{
     console.log(`resposta ${i+1}: ${e}`)
})