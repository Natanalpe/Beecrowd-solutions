#include <stdio.h>

int main(){
    int i=1;
    
    while(i <= 9){
        for(int b=7; b>=5;b--){
            printf("I=%i J=%i\n",i,b);
        }
        i+=2;
    }
    return 0;
}