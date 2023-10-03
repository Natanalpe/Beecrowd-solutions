#include <stdio.h>

int main(){
    int n, i, a, b = 3, total = 0;
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        scanf("%d", &a);
        if(b != a) {
            b = a;
            total++;
        }
    }

    printf("%d\n", total);
    return 0;
}