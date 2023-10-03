#include <stdio.h>

int main(){
    
    int graus_hora, graus_min, hora, min;
    
    while(scanf("%d %d", &graus_hora, &graus_min) != EOF) {
        hora = graus_hora / 30;
        min  = graus_min / 6;
        
        printf("%.2d:%.2d\n", hora, min);
    }

    return 0;
}