#include <stdio.h>

int main() {
    
    int a, b, i, j;
    scanf("%d %d", &a, &b);
    
    
    for(i = 1; i <= b; i+= a) {
        for(j = 0; j < a; j++) {
            if(j == a - 1) {
                printf("%d\n", i + j);
            } else {
                printf("%d ", i + j);
            }
        }
    }
    return 0;
}