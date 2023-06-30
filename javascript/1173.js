var input = parseInt(require('fs').readFileSync('/dev/stdin', 'utf8'));

for(let i = 0; i < 10; i++){
    console.log(`N[${i}] = ${input}`)
    input*=2;
}