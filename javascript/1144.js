var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var valor = parseInt(input);
var [a, b, c] = [1, 1, 1];
var count = 1;
for (let i = 1; i <= valor*2;i++){
    console.log(`${a} ${b} ${c}`);
    if(count%2==0){
        count++;
        a++;
        b+=i;
        c=Math.pow(a,3);
    }else{
        count++;
        b++;
        c++;
    }
}