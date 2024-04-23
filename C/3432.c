#include <stdio.h>

int main(){
    int n, i, is_nine = 0;
    
    
    for(i = 0; i < 9; i++) {
        scanf("%d", &n);
        
        if(n == 9) {
            is_nine = 1;
            break;
        }
    }
    
    printf(is_nine ? "F\n" : "S\n");
    return 0;
}