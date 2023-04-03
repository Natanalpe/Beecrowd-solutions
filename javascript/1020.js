var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var inputV = lines.shift();
var years = Math.floor(inputV / 365);
var months = Math.floor((inputV - years * 365) / 30);
var days = inputV - (years * 365 + months * 30);
console.log(years + " ano(s)");
console.log(months + " mes(es)");
console.log(days + " dia(s)");