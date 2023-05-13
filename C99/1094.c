#include <stdio.h>

int main(){
    int inp=0,coelhos=0,sapos=0,ratos=0,quantidade,total=0;
    char tipo;
    double percSapos,percCoelhos,percRatos;
    scanf("%d\n",&inp);
    
    for(int i=0;i<inp;i++){
        scanf("%d %c\n",&quantidade,&tipo);
        total+=quantidade;
        
        switch(tipo){
            case 'R':
                ratos+=quantidade;
                break;
            case 'S':
                sapos+=quantidade;
                break;
            case 'C':
                coelhos+=quantidade;
                break;
        }
    }
    percRatos=(100.0 * ratos)/total;
    percCoelhos=(100.0 * coelhos)/total;
    percSapos=(100.0 * sapos)/total;
    
    printf("Total: %i cobaias\n",total);
    printf("Total de coelhos: %i\n",coelhos);
    printf("Total de ratos: %i\n",ratos);
    printf("Total de sapos: %i\n",sapos);
    printf("Percentual de coelhos: %.2lf %%\n",percCoelhos);
    printf("Percentual de ratos: %.2lf %%\n",percRatos);
    printf("Percentual de sapos: %.2lf %%\n",percSapos);
    return 0;
}