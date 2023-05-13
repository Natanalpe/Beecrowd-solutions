var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var v=parseInt(lines.shift());

for(let i = 1; i <= v;i++){
    var str='';
    a=parseInt(lines.shift())
    if(a===0){
        console.log("NULL")
    }else{
        if(a%2==0){
            str="EVEN"
        }else {
            str="ODD"
        };
        if(a<0){
            str+=" NEGATIVE"
        }else{
            str+=" POSITIVE"
        }
        console.log(str)
    }
    
}