#include <stdio.h>
int main(){
    
    int i, p, gramas[5] = {300, 1500, 600, 1000, 150}, total = 225;
    
    for(i = 0; i < 5; i++) {
        scanf("%d", &p);
        total += p * gramas[i];
    }
    printf("%d\n", total);
    
    return 0;
}