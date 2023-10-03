var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var tabuleiro = input.trim();

if((tabuleiro == "XXO") || (tabuleiro == "OXX"))
    console.log("Alice");
else if (tabuleiro == "XOX")
    console.log("*");
else
    console.log("?");