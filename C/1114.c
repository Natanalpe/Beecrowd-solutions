#include <stdio.h>

int main(){
        
    int token=0,senha;
    while(!token){
        scanf("%i",&senha);
        if(senha == 2002){
            token=1;
            printf("Acesso Permitido\n");
        }else printf("Senha Invalida\n");
    }

    return 0;
}