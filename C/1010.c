#include <stdio.h>

int main(void)
{
    int cod1, cod2, quant1, quant2;
    float val1, val2, total;
    scanf("%d %d %f\n", &cod1, &quant1, &val1);
    scanf("%d %d %f", &cod2, &quant2, &val2);
    total=(val1 * quant1) + (val2 * quant2);
    printf("VALOR A PAGAR: R$ %.2f\n", total);
    return 0;
}