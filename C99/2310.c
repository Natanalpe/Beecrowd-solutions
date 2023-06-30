#include <stdio.h>

int main(){
    int q,i,j,s,b,a,s1,b1,a1;
    int totalS=0,totalB=0,totalA=0;
    int totalQS=0,totalQB=0,totalQA=0;
    double mediaS,mediaB,mediaA;
    char nome[100];
    
    scanf("%d\n",&q);
    
    for(i = 1; i <= q; i++){
        scanf("%[^\n]\n",nome);
        scanf("%d %d %d\n",&s,&b,&a);
        scanf("%d %d %d\n",&s1,&b1,&a1);
        totalS+=s;
        totalB+=b;
        totalA+=a;
        totalQS+=s1;
        totalQB+=b1;
        totalQA+=a1;
    }
    mediaS = (100.0 * totalQS) / totalS;
    mediaB = (100.0 * totalQB) / totalB;
    mediaA = (100.0 * totalQA) / totalA;
    printf("Pontos de Saque: %.2lf %%.\n",mediaS);
    printf("Pontos de Bloqueio: %.2lf %%.\n",mediaB);
    printf("Pontos de Ataque: %.2lf %%.\n",mediaA);

    return 0;
}