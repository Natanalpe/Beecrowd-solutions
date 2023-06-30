var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split("\n");
var q = parseInt(lines.shift());
var soma = 0, prev = 0, curr = 0;

for (let i = 0; i < q; i++) {
    var val = parseInt(lines.shift());

    sum = 1;
    prev = 0;
    curr = 1;

    for (let m = 1; m <= val; m++) {
        sum = curr + prev;
        prev = curr;
        curr = sum;
    }
    console.log(`Fib(${val}) = ${prev}`);
}