#include <stdio.h>

int main(){
    int coluna,i,j;
    double sum=0,matriz;
    char tipo;
    scanf("%d\n%c",&coluna,&tipo);
    
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&matriz);
            if(coluna == j){
                sum+=matriz;
            }
        }
    }
    printf("%.1lf\n", tipo == 'S' ? sum : sum/12.0);
    
    return 0;
}