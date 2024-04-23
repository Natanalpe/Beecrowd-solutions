#include <stdio.h>

int main(){

    int escolha, alcool = 0, gasolina = 0, diesel = 0;
    scanf("%d", &escolha);
    
    while(escolha != 4) {
        switch(escolha) {
            case 1:
                alcool++;
                break;
            case 2:
                gasolina++;
                break;
            case 3:
                diesel++;
                break;
            default:
                break;
        }
        scanf("%d", &escolha);
    }
    
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

    return 0;
}