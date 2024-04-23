#include <stdio.h>

int main() {
    int count = 0, i, j;
    float sum = 0, val;
    char oper;
    
    scanf("%c", &oper);
    
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%f", &val);
            if ((j > 6 && i < 6 && j > 11 - i) || (i > 5 && j > i)) {
                sum += val;
                count++;
            }
        }
    }
    printf("%.1f\n", oper == 'S' ? sum : sum / count);
}