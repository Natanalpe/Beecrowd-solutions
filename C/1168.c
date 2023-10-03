#include <stdio.h>
#include <string.h>

int main(){
    int a, i, sum, j, lds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    char ns[101];
    scanf("%d", &a);
    
    for(i = 0; i < a; i++) {
        scanf("%s", ns);
        sum = 0;
        
        for(j = 0; j < strlen(ns); j++) {
             sum += lds[ns[j] - '0'];
        }
        printf("%d leds\n", sum);
    }
    return 0;
}