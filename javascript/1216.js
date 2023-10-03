var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n'), count = 0, sum = 0, media;

for(let i = 0; i < lines.length; i++) {
    if(i % 2 != 0) {
        sum += parseInt(lines[i]);
        count++;
    }
}

media = sum / count;

console.log(media.toFixed(1));