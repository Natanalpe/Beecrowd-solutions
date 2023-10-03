var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var n = parseInt(lines.shift()), soma;
const musicas = [ 
    "PROXYCITY",
    "P.Y.N.G.",
    "DNSUEY!",
    "SERVERS",
    "HOST!",
    "CRIPTONIZE",
    "OFFLINE DAY",
    "SALT",
    "ANSWER!",
    "RAR?",
    "WIFI ANTENNAS"
]

for(let i = 0; i < n; i++) {
    let [x, y] = lines.shift().trim().split(' ').map(e => parseInt(e));
    soma = x + y;

    console.log(musicas[soma])
}