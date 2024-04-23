#include <stdio.h>

int main() {
    
    int numeros = 0, i, j;
    float val, soma = 0;
    char operacao;
    
    scanf("%c", &operacao);
    
    for(i = 0; i < 12; i++) {
        for(j = 0; j < 12; j++) {
            scanf("%f", &val);
            
            if(i > j) {
                soma += val;
                numeros++;
            }
        }
    }
    
    printf("%.1lf\n", operacao == 'S' ? soma : soma / numeros);
    
    return 0;
}