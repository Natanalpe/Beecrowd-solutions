#include <stdio.h>

int main(){
    int sorteado[6], escolhido[6], i, j, acertos = 0;
    
    for(i = 0; i < 6; i++) {
        scanf("%d", &sorteado[i]);
    }
    
    for(i = 0; i < 6; i++) {
        scanf("%d", &escolhido[i]);
    }
    
    for(i = 0; i < 6; i++) {
        for(j = 0; j < 6; j++) {
            if(sorteado[i] == escolhido[j]) {
                acertos++;
            }
        }
    }
    
    switch(acertos) {
        case 3:
            printf("terno\n");
            break;
        case 4:
            printf("quadra\n");
            break;
        case 5:
            printf("quina\n");
            break;
        case 6:
            printf("sena\n");
            break;
        default:
            printf("azar\n");
            break;
    }
    
    return 0;
}