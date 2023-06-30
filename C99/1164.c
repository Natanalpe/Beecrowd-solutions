#include <stdio.h>

int somaImpares(int n1, int n2){
    int sum = 0;
    for (int i = n1; i <= n2 * 2 + (n1-1); i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }
    return sum;
}

int main(void) { 
    int i,n,x,y;
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) { 
       scanf("%d %d",&x,&y); 
       printf("%d\n", somaImpares(x,y));
    } 
    return 0; 
}