var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var val = lines.shift();
function convertTime(num) {
    var hour = Math.floor(num / 3600);
    var minutes = Math.round(((Math.floor(num / 60)/60) - Math.floor(Math.floor(num / 60)/60)) * 60);
    var seconds = Math.round((((num-(hour * 3600)) / 60) - minutes) * 60);

    return console.log(hour+':'+minutes+':'+seconds);
}

convertTime(val);