#include <stdio.h>

int main(){
    int i,j;
    double sum=0,matriz;
    char tipo;
    scanf("%c",&tipo);
    
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&matriz);
            if((j < 5 && i < 6 && j < i)||(i > 5 && j < 5 && j < 11 - i)){
                sum+=matriz;
            }
        }
    }
    printf("%.1lf\n", tipo == 'S' ? sum : sum / 30);
    
    return 0;
}