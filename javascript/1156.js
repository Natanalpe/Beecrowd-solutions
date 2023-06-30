var s = 1,d=2;
for(let i=3;i<=39;i+=2){
    s+=i/d;
    d+=d;
}
console.log(s.toFixed(2));