#include <stdio.h>

int main(){
    int x, y, sum;

    scanf("%d", &x);
    
    while(scanf("%d", &y) != EOF) {
        if(y > 0) break;
    }
    
    sum = (x + (x + y - 1)) * y / 2.0;
    
    printf("%d\n", sum);
    
    return 0;
}