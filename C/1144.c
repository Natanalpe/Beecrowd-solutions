#include <stdio.h>

int main(){
    int valor, a = 1, b = 1, c = 1, count = 1, i;
    scanf("%d", &valor);
    
    for(i = 1; i <= valor * 2; i++) {
        printf("%d %d %d\n", a, b, c);
        
        if(count % 2 == 0) {
            count++;
            a++;
            b += i;
            c = a * a * a;
        }else {
            count++;
            b++;
            c++;
        }
    }

    return 0;
}