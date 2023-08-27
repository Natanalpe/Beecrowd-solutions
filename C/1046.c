#include <stdio.h>
 
int main() {
 
    int s,f,c;
    scanf("%d %d",&s,&f);
    if(s==f){
        printf("O JOGO DUROU 24 HORA(S)\n",c);
    }else if(s>f){
        c=(24-s)+f;
        printf("O JOGO DUROU %d HORA(S)\n",c);
    }else{
        c=f-s;
        printf("O JOGO DUROU %d HORA(S)\n",c);
    }
 
    return 0;
}