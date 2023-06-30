var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split("\n");
var q = parseInt(lines.shift());

for(let i = 1; i <= q; i++){
    var num = parseInt(lines.shift());
    var perfeitos = [];
    var sum = 0;
    for(let j = 1; j < num; j++){
        if(num % j === 0){
            perfeitos.push(j);
        }
    }
    var lg = perfeitos.length
    for(let j = 0; j < lg; j++){
        sum += perfeitos[j];
    }
    console.log(sum == num ? `${num} eh perfeito` : `${num} nao eh perfeito`);
}