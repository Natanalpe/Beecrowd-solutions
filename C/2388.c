#include <stdio.h>

int main(){
    int n, i, t, v, total = 0;
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        scanf("%d %d", &t, &v);
        
        total += t*v;
    }

    printf("%d\n", total);
    return 0;
}