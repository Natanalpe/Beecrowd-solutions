var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var a=parseInt(lines.shift())
var s;
var ini=0
var outi=0
for(let i=1;i<=a;i++){
    s=parseInt(lines.shift())
    if(s>=10 && s<=20){
        ini+=1;
    }else{
        outi+=1;
    };
}
console.log(`${ini} in\n${outi} out`)