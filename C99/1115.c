#include <stdio.h>
 
int main() {
 
    int x,y;
    
    while(scanf("%i %i",&x,&y) != EOF){
        if(x == 0 || y == 0)break;
        
        if(x>0){
            if(y>0){printf("primeiro\n");}
            else{printf("quarto\n");}
        }else{
            if(y>0){printf("segundo\n");}
            else{printf("terceiro\n");}
        }
    }
    return 0;
}