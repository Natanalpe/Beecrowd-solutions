#include <stdio.h>

int main() {
    
    int a, b, maior, menor, total = 0, i;
    scanf("%d %d", &a, &b);
    
    if(a > b) {
        maior = a;
        menor = b;
    } else {
        maior = b;
        menor = a;
    }

    for (i = menor; i <= maior; i++) {
        if(i % 13 != 0){
            total += i;
        }
    }
    
    printf("%d\n", total);
    
    return 0;
}