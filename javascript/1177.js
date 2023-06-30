var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var vet = []

for(let i = 0; i < 1000; i++){
    for(let j = 0; j < input; j++){
        vet.push(j);
    }
    console.log(`N[${i}] = ${vet[i]}`);
}