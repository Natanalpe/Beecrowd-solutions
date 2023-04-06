var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split(' ');
var h = parseInt(lines.shift()); //huguinho
var z = parseInt(lines.shift()); //zezinho
var l = parseInt(lines.shift()); //luisinho

if((h > z && h < l) || (h < z && h > l)) {
     console.log("huguinho")
} else if((z > h && z < l) || (z < h && z > l)) {
     console.log("zezinho")
} else {
     console.log("luisinho")
}