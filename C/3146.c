#include <stdio.h>

int main(){
    float r, circ, pi = 3.14;
    
    scanf("%f", &r);
    
    circ = 2 * pi * r;
    
    printf("%.2f\n", circ);
    return 0;
}