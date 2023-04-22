var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var values = input.split(' ');
const start = parseInt(values[0]);
const final = parseInt(values[1]);
if(start === final){
     console.log('O JOGO DUROU 24 HORA(S)');
}else if(start > final){
     console.log(`O JOGO DUROU ${(24 - start) + final} HORA(S)`);
}else{
     console.log(`O JOGO DUROU ${final - start} HORA(S)`);
}