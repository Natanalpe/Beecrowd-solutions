#include <stdio.h>

int main() {
    
    int idade, pessoas = 0;
    double media;
    
    while(scanf("%d", &idade) != EOF) {
        if(idade < 0) break;
        
        media += idade;
        pessoas++;
    }
    
    media /= pessoas;
    
    printf("%.2f\n", media);
    return 0;
}