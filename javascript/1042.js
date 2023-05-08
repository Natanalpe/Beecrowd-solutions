var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split(' ');
var a = lines[0]
var b = lines[1]
var c = lines[2]
a = parseInt(a)
b = parseInt(b)
c = parseInt(c)
if (a > b && a > c && b > c){
  console.log(c)
  console.log(b)
  console.log(a)
  console.log()
  console.log(a)
  console.log(b)
  console.log(c)
} else if (a > c && a > b && c > b){
  console.log(b)
  console.log(c)
  console.log(a)
  console.log()
  console.log(a)
  console.log(b)
  console.log(c)
}else if (b > a && b > c && a > c) {
  console.log(c)
  console.log(a)
  console.log(b)
  console.log()
  console.log(a)
  console.log(b)
  console.log(c)
}else if (b > c && b > a && c > a){
  console.log(a)
  console.log(c)
  console.log(b)
  console.log()
  console.log(a)
  console.log(b)
  console.log(c)
}else if (c > a && c > b && a > b){
  console.log(b)
  console.log(a)
  console.log(c)
  console.log()
  console.log(a)
  console.log(b)
  console.log(c)
}else if (c > b && c > a && b > a){
  console.log(a)
  console.log(b)
  console.log(c)
  console.log()
  console.log(a)
  console.log(b)
  console.log(c)
}