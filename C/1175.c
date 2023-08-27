#include <stdio.h>

int main(){
    int values[20],i,j=19;
    
    for(i=0;i<20;i++){
        scanf("%d",&values[i]);
    }
    for(i=0;i<20;i++,j--){
        printf("N[%d] = %d\n",i,values[j]);
    }
    return 0;
}