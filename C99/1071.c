#include <stdio.h>

int main(){
    int soma,x,y,s,b;
    scanf("%i %i",&x,&y);
    soma=0;
    if(x > y){b=x; s=y;}
    else{b=y; s=x;}
    
    for(int i=s+1; i<=b-1;i++){
        if(i%2 != 0){
            soma+=i;   
        }
    }
    printf("%i\n",soma);
    return 0;
}