#include <stdio.h>
 
int main() {
 
    int x, i, initial, lowest, current;
    
    scanf("%d %d", &x, &initial);
    
    lowest = initial;
    
    for(i = 0; i < x; i++) {
        scanf("%d", &current);
        
        initial += current;
        
        if(initial < lowest) {
            lowest = initial;
        }
    }
    
    printf("%d\n", lowest);
    return 0;
}