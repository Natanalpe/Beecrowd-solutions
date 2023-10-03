var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split("\n"), reduced_values = [], maior;

function dec2bin(dec) {
  return (dec >>> 0).toString(2);
}

for(let i = 0; i < 4; i++) {
  var values = lines[i].split(' ').map(e => parseInt(e));
  
  reduced_values.push(values.reduce((a, b) => a + b))
}

maior = Math.max(...reduced_values)

console.log(`${maior} = ${dec2bin(maior)}`)