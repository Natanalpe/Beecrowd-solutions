#include <stdio.h>

int main() {

    float soma = 0, val;
    int numeros = 0, count = 11, i, j;
    char oper;
    
    scanf("%c", &oper);
    
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%f", &val);
        
            if (j < count) {
                soma += val;
                numeros++;
            }
        }
        count--;
    }
    
    if(oper == 'M') {
        soma /= numeros;
    }
    
    printf("%.1f\n", soma);
    
    return 0;
}