#include <stdio.h>
int main() {
 
    int m=1,n=1,b=0,s=0,sum=0;
    
    while(scanf("%i %i",&m,&n)!= EOF){
        sum=0;
        if(m < 1 || n < 1)break;
        if(m>n){b=m;s=n;}
        else{b=n;s=m;}
        
        for(int i=s;i<=b;i++){
            printf("%i ",i);
            sum+=i;
        }
        printf("Sum=%i\n",sum);
        
    }
 
    return 0;
}