#include <stdio.h>
#include <ctype.h>

int isUpper(char caracter) {
    char caracterAux = toupper(caracter);
    
    return caracterAux == caracter;
}

int main() {
    int n, i, a, b;
    char caracter;
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        scanf("%d%c%d", &a, &caracter, &b);
        
        if(a == b) {
            printf("%d\n", a * b);
        } else if(isUpper(caracter)) {
            printf("%d\n", b - a);
        } else {
            printf("%d\n", a + b);
        }
    }
    
    return 0;
}