#include <stdio.h>

int main(){
    int a, b, sum, count = 1;
    scanf("%d", &a);
    
    sum = a;
    
    while(scanf("%d", &b) != "EOF") {
        if(b > a) break;
    }
    
    while(sum < b) {
        sum += a + count;
        count++;
    }
    
    printf("%d\n", count);
    return 0;
}