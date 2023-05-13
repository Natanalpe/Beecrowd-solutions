var inp = parseInt(require('fs').readFileSync('/dev/stdin', 'utf8'));
for(let i=1;i<=10000;i++){
    if(i%inp == 2)console.log(i)
}