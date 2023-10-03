#include <stdio.h>

int main() {
 
    int tipo, opcao, i, corretos = 0;
    scanf("%d", &tipo);
    
    for(i = 0; i < 5; i++) {
        scanf("%d", &opcao);
        if(opcao == tipo) corretos++;
        
    }
    
    printf("%d\n", corretos);
    
    return 0;
}