var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var [diaStr1, tempoStr1, diaStr2, tempoStr2] = lines;
var splitDia1 = diaStr1.split(" ")
var splitTempo1 = tempoStr1.split(" ")
var splitDia2 = diaStr2.split(" ")
var splitTempo2 = tempoStr2.split(" ")

var dia1 = parseInt(splitDia1[1])
var dia2 = parseInt(splitDia2[1])
var hora1 = parseInt(splitTempo1[0])
var hora2 = parseInt(splitTempo2[0])
var minutos1 = parseInt(splitTempo1[2])
var minutos2 = parseInt(splitTempo2[2])
var segundos1 = parseInt(splitTempo1[4])
var segundos2 = parseInt(splitTempo2[4])

function convertTime(d,h,m,s){
    return (d*86400)+(h*3600)+(m*60)+s;
}

var initialSecs = convertTime(dia1,hora1,minutos1,segundos1)
var finalSecs = convertTime(dia2,hora2,minutos2,segundos2)
var defSecs = finalSecs - initialSecs

var dias = defSecs/86400
defSecs%=86400
var horas = defSecs/3600
defSecs%=3600
var minutos = defSecs/60
defSecs%=60
console.log(`${parseInt(dias)} dia(s)`)
console.log(`${parseInt(horas)} hora(s)`)
console.log(`${parseInt(minutos)} minuto(s)`)
console.log(`${parseInt(defSecs)} segundo(s)`)