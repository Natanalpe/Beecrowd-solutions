#include <stdio.h>
 
int main() {
 
    int n, i, dias;
    float comida;
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        scanf("%f", &comida);
        dias = 0;
        
        while(comida > 1.0) {
            dias++;
            comida /= 2;
        }
        
        printf("%d dias\n", dias);
    }
    return 0;
}