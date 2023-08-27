#include <stdio.h>
int main() {
    int h1,h2,m1,m2,c1,c2;
    scanf("%d %d %d %d ",&h1,&m1,&h2,&m2);
    int s,f;
    s=m1+h1*60;
    f=m2+h2*60;
    if(f<=s){
        f+=24*60;
    }
    c1=(f-s)/60;
    c2=(f-s)%60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", c1,c2);
    return 0;
}