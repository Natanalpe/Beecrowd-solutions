var lines = input.split('\n');
var values = [];
for(let i = 1; i <= lines[0]; i++) {
     values = lines[i].split(' ');

     if((parseInt(values[0]) >= 200 && parseInt(values[0]) <= 300) && (parseInt(values[1]) >= 50) && (parseInt(values[2]) >= 150)) {
          console.log('Sim');
     } else {
          console.log('Nao')
     }
}