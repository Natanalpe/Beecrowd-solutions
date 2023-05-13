var inp = require('fs').readFileSync('/dev/stdin', 'utf8');
var values=inp.split('\n')
var q=parseInt(values.shift())
for(let i=1;i<=q;i++){
    var v=values.shift().split(" ")
    var [a,b,c]=v;
    a*=2
    b*=3
    c*=5
    media=((a+b+c)/10).toFixed(1)
    console.log(media)
}