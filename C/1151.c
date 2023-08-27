#include <stdio.h>

int main(){
    int inp,n1 = 0,n2 = 1,next=0;
    
    scanf("%i",&inp);
    
    for(int i = 1;i <= inp;i++){
        if(i==inp){
            printf("%i\n",n1);
        }else{
            printf("%i ",n1);
            next=n1+n2;
            n1=n2;
            n2=next;
        }
    }

    return 0;
}