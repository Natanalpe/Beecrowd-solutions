#include <stdio.h>

int main() {
    
    int i;
    float val;
    
    for(i = 0; i < 100; i++) {
        scanf("%f", &val);
        
        if(val <= 10) {
            printf("A[%d] = %.1f\n", i, val);
        }
    }
 
    return 0;   
}