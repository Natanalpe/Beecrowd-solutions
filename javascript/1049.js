var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');
var [a,b,c] = lines;

if(a == "vertebrado"){
  if(b == "ave"){
    if(c == "carnivoro"){
      console.log("aguia");
      
    }else if(c == "onivoro"){
        
      console.log("pomba");
    }
  }
  else if(b == "mamifero"){
    if(c == "onivoro"){
      console.log("homem");
    }else if(c == "herbivoro"){
      console.log("vaca");
    }
  }
}else if(a == "invertebrado"){
  if(b == "inseto"){
    if(c == "hematofago"){
      console.log("pulga");
    }else if(c == "herbivoro"){
      console.log("lagarta");
    }
  }else if(b == "anelideo"){
    if(c == "hematofago"){
      console.log("sanguessuga");
    }else if(c == "onivoro"){
      console.log("minhoca");
    }
  }
}