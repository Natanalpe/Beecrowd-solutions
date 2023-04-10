var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split(' ');
let initial = new Date();
let final = new Date();

initial.setHours(parseInt(lines[0]));
initial.setMinutes(parseInt(lines[1]));
initial.setSeconds(0);
final.setHours(parseInt(lines[2]));
final.setMinutes(parseInt(lines[3]));
final.setSeconds(0);

let dif = new Date(final - initial);
var result = dif.getUTCHours() == 0 && dif.getMinutes() == 0? "O JOGO DUROU 24 HORA(S) E " : "O JOGO DUROU " + dif.getUTCHours() + " HORA(S) E ";
result += dif.getUTCMinutes() + " MINUTO(S)";
console.log(result)