#include <stdio.h>
#include <string.h>

int main(){
    
    int rodada, i, jogada_1, jogada_2, total, eh_impar;
    char jogador_1[101], jogador_2[101], escolha_1[10], escolha_2[10], escolha_c[10];
    
    scanf("%d\n", &rodada);
    
    for(i = 0; i < rodada; i++){
        scanf("%s %s %s %s\n", &*jogador_1, &*escolha_1, &*jogador_2, &*escolha_2);
        scanf("%d %d", &jogada_1, &jogada_2);
    
        total = jogada_1 + jogada_2;
        eh_impar = total % 2;
        
        if(eh_impar) {
            strcpy(escolha_c, "IMPAR");
        } else {
            strcpy(escolha_c, "PAR");
        }
        
        if(strcmp(escolha_c, escolha_1) == 0) {
            printf("%s\n", jogador_1);
        } else {
            printf("%s\n", jogador_2);
        }
    }

    return 0;
}