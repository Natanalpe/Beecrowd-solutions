var input = require('fs').readFileSync('/dev/stdin', 'utf8')
var spl = input.trim().split("")
var r = " NO"

for (let i = 0; i <= spl.length - 1; i++) {
    if(spl[i] == 1 && spl[i+1] == 3){
        r = ""
        break
    }
}
console.log(spl.join("") + r + " es de Mala Suerte")