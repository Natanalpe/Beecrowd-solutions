#include <stdio.h>

int main() {
    
    int initial, sum, i;
    
    scanf("%d", &initial);
    
    while(initial != 0){
        sum = 0;
        
        for(i = initial; i <= initial + 9; i++){
            if(i % 2 == 0){
                sum += i;
            }
        }
        
        printf("%d\n", sum);
        
        scanf("%d", &initial);
    }
    
    return 0;
}