#include <stdio.h>

int calcularMDC(int a, int b) {
    int temp;
    
    while(b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    
    return a;
}

int main(){
    int n, i, mdc, a, b;
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        mdc = calcularMDC(a, b);
        
        printf("%d\n", mdc);
    }

    return 0;
}