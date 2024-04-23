#include <stdio.h>

int main(){

    int a = 0, b = 0, inter = 0, gremio = 0, empates = 0, grenais = 0, escolha = 0;
    
    while(escolha != 2) {
        printf("Novo grenal (1-sim 2-nao)\n");
        
        scanf("%d %d", &a, &b);
        
        if(a > b) {
            inter++;
        } else if(b > a) {
            gremio++;
        } else if(a == b) {
            empates++;
        }
        grenais++;
        
        scanf("%d", &escolha);
        
    }
    
    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", empates);
    
    if(inter > gremio) {
        printf("Inter venceu mais\n");
    }else if(gremio > inter) {
        printf("Gremio venceu mais\n");
    } else {
        printf("Nao houver vencedor\n");
    }
    
    return 0;
}