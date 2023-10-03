var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var [nota, media] = input.split('\n').map(e => parseInt(e));

console.log(media * 2 - nota)