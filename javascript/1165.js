var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split("\n");
var n = parseInt(lines.shift());

for (let i = 1; i <= n; i++) {
    var num = parseInt(lines.shift());
    var s = 0, j = 1;

    while (j <= num) {
        if (num % j === 0) {
            s += 1;
        }
        j += 1;
    }
    if (s > 2) {
        console.log(`${num} nao eh primo`);
    } else {
        console.log(`${num} eh primo`)
    }
}