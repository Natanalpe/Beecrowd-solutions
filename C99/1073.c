#include <stdio.h>
#include <math.h>
int main() {
 
    int i,c;
    scanf("%i",&i);
    for(int j=1;j<i+1;j++){
        if(j%2==0){
            c=pow(j,2);
            printf("%i^2 = %i\n",j,c);
        }
    }
    return 0;
}