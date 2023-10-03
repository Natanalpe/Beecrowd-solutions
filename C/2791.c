#include <stdio.h>

int main() {
    
    int n;
    
    for(int i = 1; i < 5; i++) {
        scanf("%d", &n);
        if(n){
            printf("%d\n", i);
            break;
        }
    }
    
    return 0;
}