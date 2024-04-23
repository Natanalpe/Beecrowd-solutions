#include <stdio.h>

int main(){
    
    int count = 11, numeros = 0, i, j;
    double sum = 0, val;
    char oper;
    
    scanf("%c", &oper);

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &val);
            if (j > i && j < count) {
                sum += val;
                numeros++;
            }
        }
        count--;
    }
    
    printf("%.1f\n", oper == 'S' ? sum : sum / numeros);

    return 0;
}