#include <stdio.h>

int main(){
    int a, i, p, q; 
    float valor, total = 0;
    scanf("%d", &a);
    
    for(i = 0; i < a; i++) {
        scanf("%d %d", &p, &q);
        
        switch(p) {
            case 1001:
                valor = 1.5;
                break;
            case 1002:
                valor = 2.5;
                break;
            case 1003:
                valor = 3.5;
                break;
            case 1004:
                valor = 4.5;
                break;
            case 1005:
                valor = 5.5;
                break;
            default:
                break;
        }
        total += valor * q;
    }
    printf("%.2f\n", total);
    return 0;
}