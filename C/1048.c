#include <stdio.h>
 
int main() {
    
    int pc=0;
    float s,rg,sf;
    scanf("%f",&s);
    sf=s;
    
    if(s >= 0 && s <= 400){
        sf+= s*0.15;
        pc=15;
    }else if(s >= 400.01 && s <= 800){
        sf+= s*0.12;
        pc=12;
    }else if(s >= 800.01 && s <= 1200){
        sf+= s*0.1;
        pc=10;
    }else if(s >= 1200.01 && s <= 2000){
        sf+= s*0.07;
        pc=7;
    }else if(s > 2000){
        sf+= s*0.04;
        pc=4;
    }
    rg=sf-s;
    
    printf("Novo salario: %.2f\n",sf);
    printf("Reajuste ganho: %.2f\n",rg);
    printf("Em percentual: %d %\n",pc);
    return 0;
}