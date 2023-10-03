#include <stdio.h>
 
int main() {
 
    float venda, integrantes;
    scanf("%f  %f", &venda, &integrantes);
    
    printf("%.2f\n", (venda / integrantes));
 
    return 0;
}