var input = parseFloat(require('fs').readFileSync('/dev/stdin', 'utf8'));
for(let i = 0; i < 100; i++){
    console.log(`N[${i}] = ${input.toLocaleString('en-US', { minimumFractionDigits: 4, useGrouping: false })}`);
    input /= 2;
}