var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines=input.split("\n")
var i=parseInt(lines[0])
const m=["January","February","March","April","May","June","July","August","September","October","November","December"]
console.log(m[i-1])