var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
while(lines.length){
    [x,y]=lines.shift().trim().split(' ').map((el) => parseInt(el))
    if(x===y)break
    x>y?console.log("Decrescente"):console.log("Crescente");
}