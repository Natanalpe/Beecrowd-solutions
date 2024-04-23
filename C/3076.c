#include <stdio.h>
#include <math.h>

int main(){
    int ano;
    float seculo;
    
    while(scanf("%d", &ano) != EOF) {
        seculo = floor(ano / 100) + ((ano % 100 ? 1 : ano) % 10 ? 1 : 0);
        
        printf("%.0f\n", seculo);
    }

    return 0;
}