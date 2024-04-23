#include <stdio.h>
 
int main() {
 
    int n, x, i;
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        scanf("%d", &x);
        
        printf(x > 8000 ? "Mais de 8000!\n" : "Inseto!\n");
    }
    
    return 0;
}