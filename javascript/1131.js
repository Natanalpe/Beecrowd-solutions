var input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split("\n");
var [values,a,b,inter,gremio,empates,grenais] = [0,0,0,0,0,0,0];
var escolha=0;

while(escolha !=2){
    console.log("Novo grenal (1-sim 2-nao)");

    var values = lines.shift().trim().split(" ");;
    a = parseInt(values.shift());
    b = parseInt(values.shift());
    //var maior = Math.max(a,b);
    if(a > b){
        inter++;
    }else if(b > a){
        gremio++;
    }else if(a == b){
        empates++;
    }
    grenais++;

    escolha=parseInt(lines.shift());
}

console.log(`${grenais} grenais`);
console.log(`Inter:${inter}`);
console.log(`Gremio:${gremio}`);
console.log(`Empates:${empates}`);

if(inter > gremio){
    console.log("Inter venceu mais");
}else if(gremio > inter){
    console.log("Gremio venceu mais");
}else{
    console.log("Nao houve vencedor");
}