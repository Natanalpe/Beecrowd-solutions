#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() {
    int i, quant;
    unsigned long long curr = 1, prev = 0, sum = 1;

    scanf("%d", &quant);
    int values[quant];

    for (i = 0; i < quant; i++) {
        scanf("%d", &values[i]);
    }

    for (i = 0; i < quant; i++) {
        sum = 1;
        prev = 0;
        curr = 1;

        for (int j = 1; j <= values[i]; j++) {
            sum = curr + prev;
            prev = curr;
            curr = sum;
        }

        printf("Fib(%d) = %llu\n", values[i], prev);
    }
    return 0;
}