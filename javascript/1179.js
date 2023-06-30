var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split("\n");
var pares = [], impares = [];

for(let i = 0; i < 15; i++){
    var val = parseInt(lines.shift());

    if(val % 2 === 0){
        pares.push(val);
    }else{
        impares.push(val);
    }

    if(pares.length == 5){
        for(let j = 0; j < 5; j++){
            console.log(`par[${j}] = ${pares[j]}`);
        }
        pares = [];
    }
    
    if(impares.length == 5){
        for(let j = 0; j < 5; j++){
            console.log(`impar[${j}] = ${impares[j]}`);
        }
        impares = [];
    }
}
for(let i = 0; i < impares.length; i++){
    console.log(`impar[${i}] = ${impares[i]}`);
}
for(let i = 0; i < pares.length; i++){
    console.log(`par[${i}] = ${pares[i]}`);
}