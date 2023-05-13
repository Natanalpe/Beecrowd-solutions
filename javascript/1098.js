var i = 0
var ch=0
var s= 0

function convertNum(num){
    if(num - parseInt(num) === 0){
        return parseInt(num)
    }else if(num == 1.9999999999999998){
        return Math.ceil(num)
    }else {
        return parseFloat(num).toFixed(1)
    }
}

while(ch<=2){
    for(let j=1;j<=3;j++){
        console.log(`I=${convertNum(i+s)} J=${convertNum(j+s)}`)
    }
    s+=0.2
    ch+=0.2
}