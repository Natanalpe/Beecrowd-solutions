#include <stdio.h>
 
int main() {
    int n=1,s=1,j=1,num=1;
    scanf("%i",&n);
    for(int i=1;i<=n;i++)  {
        scanf("%i",&num);
        s=0;
        j=1;
        while(j <= num){
            if(num%j == 0){
                s+=1;
            }
            j+=1;    
        }
        if(s>2){
            printf("%i nao eh primo\n",num);
        }else{
            printf("%i eh primo\n",num);
        }
    }
    
    return 0;
}