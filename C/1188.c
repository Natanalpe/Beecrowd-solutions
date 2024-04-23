#include <stdio.h>

int main() {
    int count = 0, i, j;
    float val, sum = 0;
    char oper;
    scanf("%c", &oper);
    
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%f", &val);
            if ((i > 6) && (11 - i < j && j < i)) {
                sum += val;
                count++;
            }
        }
    }
    printf("%.1f\n", oper == 'S' ? sum : sum / count);

    return 0;
}