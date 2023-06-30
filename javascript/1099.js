var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines=input.split('\n')
var q=parseInt(lines.shift())
var x=0,y=0,b=0,y=0,soma=0

for(let i=0;i<=q-1;i++){
    soma=0
    var spl=lines[i].split(' ')
    x=parseInt(spl[0].trim())
    y=parseInt(spl[1].trim())
    if(x>y){
        b=x;s=y;
    }else{
        b=y;s=x
    }
    for(let j=s+1;j<=b-1;j++){
        if(j%2 == 1)soma+=j
    }
    console.log(soma)
}