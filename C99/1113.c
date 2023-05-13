#include <stdio.h>
 
int main() {
 
    int x,y;
    while(scanf("%i %i",&x,&y) != EOF){
        if(x == y){
            break;
        }
        if(x>y){
            printf("Decrescente\n");
        }else{
            printf("Crescente\n");
        }
    }
    return 0;
}