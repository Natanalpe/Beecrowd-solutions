var input = require('fs').readFileSync('/dev/stdin', 'utf8');
const s = parseFloat(input);
var news;
var plus;
var perc;
if(s <= 400){
     news=s+s*0.15
     plus=s*0.15
     perc=15
}else if(s <= 800){
     news=s+s*0.12
     plus=s*0.12
     perc=12
}else if(s <= 1200){
     news=s+s*0.1
     plus=s*0.1
     perc=10
}else if(s <= 2000){
     news=s+s*0.07
     plus=s*0.07
     perc=7
}else if(s > 2000){
     news=s+s*0.04
     plus=s*0.04
     perc=4
}
console.log(`Novo salario: ${news.toFixed(2)}`);
console.log(`Reajuste ganho: ${plus.toFixed(2)}`);
console.log(`Em percentual: ${perc} %`);