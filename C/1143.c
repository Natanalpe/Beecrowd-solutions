#include <stdio.h>
#include <math.h>

int main(){
    int valor, a = 1, b = 1, c = 1, i;
    scanf("%d", &valor);
    
    for(i = 1; i <= valor; i++) {
        printf("%d %d %d\n", a, b, c);
        
        a++;
        b = pow(a, 2);
        c = pow(a, 3);
    }

    return 0;
}