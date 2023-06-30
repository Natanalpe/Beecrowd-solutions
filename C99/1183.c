#include <stdio.h>

int main(){
    int i,j,count=0;
    double sum=0,matriz,numeros=0;
    char tipo;
    scanf("%c",&tipo);
    
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&matriz);
            if(j > count){
                sum+=matriz;
                numeros++;
            }
        }
        count++;
    }
    printf("%.1lf\n", tipo == 'S' ? sum : sum / numeros);
    
    return 0;
}