#include <stdio.h>

int main() {
    int n, cesta = 3;
    scanf("%d", &n);
    
    if(n <= 800) {
        cesta = 1;
    } else if(n > 800 && n <= 1400) {
        cesta = 2;
    }
    
    printf("%d\n", cesta);

    return 0;
}