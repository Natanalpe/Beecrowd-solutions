#include <stdio.h>
 
int main() {
 
    int n, i;
    scanf("%d", &n);
    
    for(i = 0; i < 1000; i++) {
        printf("N[%d] = %d\n", i, (i % n));
    }
 
    return 0;
}