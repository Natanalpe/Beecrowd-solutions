#include <stdio.h>
 
int main() {
    int j=65,i=-2;
    
    do{
        i+=3;
        j-=5;
        printf("I=%i J=%i\n",i,j);
    }while(j != 0);
    return 0;
}