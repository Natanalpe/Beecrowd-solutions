var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var n = parseInt(input);

const fibonacci = (Math.pow((1 + Math.sqrt(5)) / 2, n) - Math.pow((1 - Math.sqrt(5)) / 2.0, n)) / Math.sqrt(5);
console.log(fibonacci.toFixed(1));