var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n'), l;
lines.pop()
while(lines.length) {
    l = lines.shift().trim();
    console.log(l == "xxL" ? "Esse eh o meu lugar" : "Oi, Leonard")
}