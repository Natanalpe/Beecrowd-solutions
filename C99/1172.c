#include <stdio.h>

int main(){
    for (int i=0;i<10;i++){
        int n=0;
        scanf("%d",&n);
        
        n <= 0 ? printf("X[%d] = 1\n",i) : printf("X[%d] = %d\n",i,n);
    }

    return 0;
}