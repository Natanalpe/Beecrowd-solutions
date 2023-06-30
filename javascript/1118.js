var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

function valid(n) {
  return n >= 0.0 && n <= 10.0;
}

function calc() {
  let code;

  console.log("novo calculo (1-sim 2-nao)");

  while (lines.length) {
    code = parseFloat(lines.shift());
    switch (code) {
      case 1:
        return 1;
      case 2:
        return 0;
      default:
        break;
    }
    console.log("novo calculo (1-sim 2-nao)");
  }
  return 0;
}

function main() {
  let code;
  let x, y;
  x = -1.0;
  y = -1.0;

  while (lines.length) {
    y = parseFloat(lines.shift());
    if (valid(y)) {
      if (x === -1.0) {
        x = y;
      } else {
        console.log("media = " + ((x + y) / 2).toFixed(2));
        x = -1.0;
        if (!calc()) {
          break;
        }
      }
    } else {
      console.log("nota invalida");
    }
  }
  return 0;
}
main()