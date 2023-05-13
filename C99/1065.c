#include <stdio.h>
 
int main() {
 
    int a,r;
    
    for(int i=0;i <5;i++){
        scanf("%i",&a);
        if(a%2 == 0){
            r++;
        }
    }
    printf("%i valores pares\n",r);
    return 0;
}