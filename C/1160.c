#include <stdio.h>

int main(){
    int n, i, PA, PB, anos;
    double GA, GB;
    scanf("%d", &n);
    
    for(i = 0; i < n; i++){
        
        scanf("%d %d %lf %lf", &PA, &PB, &GA, &GB);
        anos = 0;
        GA /= 100;
        GB /= 100;
        
        while(PA <= PB){
            PA += PA * GA;
            PB += PB * GB;
            anos++;
            if(anos > 100) break;
        }
        if(anos > 100) printf("Mais de 1 seculo.\n");
        else printf("%d anos.\n", anos);
    }

    return 0;
}