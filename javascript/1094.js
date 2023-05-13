var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n')
var testes = parseInt(lines.shift())

var [coelhos,sapos,ratos,total] = [0,0,0,0]

for(let i=0;i<=testes-1;i++){
    var experimento = lines[i].split(' ')
    var currentQuant = parseInt(experimento[0])
    var currentType = String(experimento[1].trim())
    total+=currentQuant
    switch(currentType){
        case 'R':
            ratos+=currentQuant
            break;
        case 'S':
            sapos+=currentQuant
            break;
        case 'C':
            coelhos+=currentQuant
    }
}
var percCoelhos = (100 * coelhos)/total
var percRatos = (100 * ratos)/total
var percSapos = (100 * sapos)/total
console.log(`Total: ${total} cobaias`);
console.log(`Total de coelhos: ${coelhos}`);
console.log(`Total de ratos: ${ratos}`);
console.log(`Total de sapos: ${sapos}`);
console.log(`Percentual de coelhos: ${percCoelhos.toFixed(2)} %`);
console.log(`Percentual de ratos: ${percRatos.toFixed(2)} %`);
console.log(`Percentual de sapos: ${percSapos.toFixed(2)} %`);