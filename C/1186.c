#include <stdio.h>

int main() {
    float sum = 0, val;
    int numeros = 0, count = 11, i, j;
    char oper;
    
    scanf("%c", &oper);
    
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%f", &val);
            if (j > count) {
                sum += val;
                numeros++;
            }
        }
        count--;
    }
    
    printf("%.1f\n", oper == 'S' ? sum : sum / numeros);

    return 0;
}