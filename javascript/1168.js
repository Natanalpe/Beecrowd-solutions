var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var n = input.split("\n"), a = parseInt(n.shift());

for(let i = 0; i < a; i++){
    var nums = n.shift().trim().split("").map(e => parseInt(e));
    var sum = 0;

    for(let j = 0; j < nums.length; j++){
        switch(nums[j]){
            case 1:
                sum += 2;
                break;
            case 2:
            case 3:
            case 5:
                sum += 5;
                break;
            case 4:
                sum += 4;
                break;
            case 6:
            case 9:
            case 0:
                sum += 6;
                break;
            case 7:
                sum += 3;
                break;
            case 8:
                sum += 7;
                break;
        }
    }
    console.log(`${sum} leds`);
}