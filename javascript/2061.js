var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var [abas, acoes] = lines.shift().split(' ').map(e => parseInt(e))

for(let i = 0; i < acoes; i++) {
    var acao = lines.shift()
    if(acao[0] == 'f') abas++
    else abas--
}

console.log(abas)