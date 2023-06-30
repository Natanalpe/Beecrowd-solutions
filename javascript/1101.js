var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

while (lines.length) {
    let sum = 0;
    let arrNum = [];
    var [x, y] = lines.shift().trim().split(' ').map((el) => parseInt(el));

    if (x > y) [x, y] = [y, x];
    if (x <= 0 || y <= 0) break;

    for (let i = x; i <= y; i++){
        arrNum.push(i);
        sum+=i;
    }
    console.log(`${arrNum.join(' ')} Sum=${sum}`);
}