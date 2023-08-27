var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var a = parseInt(input)
var raiz;

if(a === 0){
    raiz = 3.0;
    console.log(raiz.toFixed(10))
}else {
    raiz = 6.0;
    
    for(let i = 0; i < a - 1; i++){
        raiz = 6 + 1 / raiz;
    }
    raiz = 3 + 1 / raiz;
    console.log(raiz.toFixed(10))
}