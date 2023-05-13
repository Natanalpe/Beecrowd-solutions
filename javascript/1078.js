var inp = parseInt(require('fs').readFileSync('/dev/stdin', 'utf8'));
for(let i=1;i<=10;i++){
    var c=i*inp
    console.log(`${i} x ${inp} = ${c}`)
}