#include <stdio.h>
#include <limits.h>

int main(){
    
    int quantidade,num,menor=INT_MAX,posicao=0,atual=0;
    scanf("%d",&quantidade);
    
    while(scanf("%d",&num) != EOF){
        if(num < menor){
            menor=num;
            posicao=atual;
        }
        atual++;
    }
    printf("Menor valor: %i\nPosicao: %i\n",menor,posicao);
    return 0;
}