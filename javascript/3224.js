var input=require('fs').readFileSync('/dev/stdin', 'utf8')
var lines=input.split('\n')
var [a,b]=lines
console.log(a.length>=b.length ?"go":"no")