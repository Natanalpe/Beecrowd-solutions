var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var ddd = lines.shift();
switch (ddd) {
     case "11":
          var city = "Sao Paulo";
          console.log(city);
          break;
     case "19":
          var city = "Campinas";
          console.log(city);
          break;
     case "21":
          var city = "Rio de Janeiro";
          console.log(city);
          break;
     case "27":
          var city = "Vitoria";
          console.log(city);
          break;
     case "31":
          var city = "Belo Horizonte";
          console.log(city);
          break;
     case "32":
          var city = "Juiz de Fora";
          console.log(city);
          break;
     case "61":
          var city = "Brasilia";
          console.log(city);
          break;
     case "71":
          var city = "Salvador";
          console.log(city);
          break;
     default:
          console.log("DDD nao cadastrado")
}