#include <stdio.h>

int main(){
    int i=1,j=7;
    
    while(i <= 10){
        for(int a=0;a<=2;a++){
            printf("I=%i J=%i\n",i,j-a);
        }
        j+=2;
        i+=2;
    }

    return 0;
}