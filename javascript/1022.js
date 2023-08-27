var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split("\n");
var q = parseInt(lines.shift());

function reduzirFracao(numerator,denominator){
  var gcd = function gcd(a,b){
    return b ? gcd(b, a%b) : a;
  };
  gcd = gcd(numerator,denominator);

  if (numerator < 0 || denominator < 0){
    return `${(numerator * -1)/gcd}/${(denominator * -1)/gcd}`
  }

  return `${numerator/gcd}/${denominator/gcd}`;
}

function calc(N1, D1, N2, D2, operator) {
  var numerador, denominador;

  switch (operator) {
    case '+':
      numerador = N1 * D2 + N2 * D1;
      denominador = D1 * D2;
      break;
    case '-':
      numerador = N1 * D2 - N2 * D1;
      denominador = D1 * D2;
      break;
    case '*':
      numerador = N1 * N2;
      denominador = D1 * D2;
      break;
    case '/':
      numerador = N1 * D2;
      denominador = N2 * D1;
      break;
  }
  return `${numerador}/${denominador} = ${reduzirFracao(numerador, denominador)}`;
}

for (let i = 0; i < q; i++) {
  var nums = [];
  var fullSentence = lines.shift();
  var sent = fullSentence.trim().split(" ").map(e => { if (!isNaN(parseInt(e))) { nums.push(parseInt(e)); return parseInt(e); } });
  var gettingOperators = fullSentence.split(" ");
  var op = gettingOperators[3].trim();
  console.log(calc(nums[0], nums[1], nums[2], nums[3], op));
}