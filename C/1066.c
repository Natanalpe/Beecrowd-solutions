#include <stdio.h>

int main(){
    int a;
    int pos=0;
    int neg=0;
    int imp=0;
    int par=0;
    
    for(int i=0;i< 5;i++){
        scanf("%i",&a);
        
        a%2 == 0 ||a == 0 ? par++ : imp++;
        if(a>0)pos++;
        if(a<0)neg++;
    }
    printf("%i valor(es) par(es)\n%i valor(es) impar(es)\n",par,imp);
    printf("%i valor(es) positivo(s)\n%i valor(es) negativo(s)\n",pos,neg);

    return 0;
}