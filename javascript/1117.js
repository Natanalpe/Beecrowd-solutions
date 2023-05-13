var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var validas=0;
var notaAtual=0
var media=0

while(validas != 2){
    notaAtual=parseFloat(lines.shift())
    if(notaAtual >= 0 && notaAtual <= 10){
        media+=notaAtual
        validas++
    }else{
        console.log("nota invalida")
    }
}
media/=2
console.log(`media = ${media.toFixed(2)}`)