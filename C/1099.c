#include <stdio.h>
 
int main() {
 
    int q,sum,x,y,b,s;
    scanf("%i",&q);
    for(int i=1;i<=q;i++){
        sum=0;
        scanf("%i %i",&x,&y);
        if(x>y){
            s=y;b=x;
        }else{
            s=x;b=y;
        }
        
        for(int j=s+1;j<b;j++){
            if(j%2 == 1){
                sum+=j;
            }
        }
        printf("%i\n",sum);
    }
    return 0;
}