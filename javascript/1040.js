var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var splitting=lines[0].split(" ");
var a=parseFloat(splitting[0]);
var b=parseFloat(splitting[1]);
var c=parseFloat(splitting[2]);
var d=parseFloat(splitting[3]);
a*=2;
b*=3;
c*=4;
var m=(a+b+c+d)/10;
console.log("Media: "+m.toFixed(1));

if(m>=7){
    console.log("Aluno aprovado.");
}else if(m<5){
    console.log("Aluno reprovado.");
}else if(m>=5 && m<=6.9){
    console.log("Aluno em exame.");
    var n2,m2;
    n2=parseFloat(lines[1]);
    console.log("Nota do exame: "+n2.toFixed(1));
    m2=(m+n2)/2;
    if(m2>=5){
        console.log("Aluno aprovado.");
    }else if(m2<=4.9){
        console.log("Aluno reprovado.");
    }
    console.log("Media final: "+m2.toFixed(1));
}