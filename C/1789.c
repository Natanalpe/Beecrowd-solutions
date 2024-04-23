#include <stdio.h>

int main(){
    
    int n, i, maior, x;
    
    while (scanf("%d", &n) != EOF) {
        
        scanf("%d", &maior);
        
        for(i = 1; i < n; i++) {
            scanf("%d", &x);
            
            if(x > maior) {
                maior = x;
            }
        }
    
        if (maior < 10) {
            printf("1\n");
        } else if (maior < 20) {
            printf("2\n");
        } else {
            printf("3\n");
        }
    }

    return 0;
}