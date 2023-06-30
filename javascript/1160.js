var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split("\n");
var q = parseInt(lines.shift());
for(let i = 1; i <= q; i++){
    let anos = 0;
    var cas = lines.shift().trim().split(" ");
    var PA = parseInt(cas.shift()), PB = parseInt(cas.shift());
    var G1 = parseFloat(cas.shift()), G2 = parseFloat(cas.shift());
    while(PA <= PB){
        PA += PA * (G1 / 100);
        PB += PB * (G2 / 100);
        PA = parseInt(PA);
        PB = parseInt(PB);
        anos++;
        if(anos > 100){
            break;
        }
    }
    console.log(anos > 100 ? "Mais de 1 seculo." : `${anos} anos.`);
}