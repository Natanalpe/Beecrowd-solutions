#include <stdio.h>

int main(){
    int i, n, j, aux;
    
    while(scanf("%d", &n) != EOF){
        aux = n;
        for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++) {
                if(j == aux - 1) {
                    printf("2");
                } else if(j == i){
                    printf("1");
                } else {
                    printf("3");
                }
            }
            printf("\n");
            aux--;
        }
    }

    return 0;
}