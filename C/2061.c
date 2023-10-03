#include <stdio.h>

int main(){
    int abas, acoes, i;
    char acao[7];
    scanf("%d %d", &abas, &acoes);
    
    for(i = 0; i < acoes; i++) {
        scanf("%s", acao);
        if(acao[0] == 'f') abas++;
        else abas--;
    }
    
    printf("%d\n", abas);
    return 0;
}