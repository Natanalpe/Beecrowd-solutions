#include <stdio.h>

int main() {
    
    int n;
    
    while(scanf("%d", &n) != EOF) {
        printf(n > 0 ? "vai ter duas!\n" : "vai ter copa!\n");
    }
    
    return 0;
}