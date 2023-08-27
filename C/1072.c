#include <stdio.h>
int main() {
    int a,i,in,out;
    in=0;
    out=0;
    scanf("%i",&i);
    for(int j=1;j < i+1;j++){
        scanf("%i",&a);
        if(a>=10 && a<=20){
            in+=1;
        }else{
            out+=1;
        };
    }
    printf("%i in\n%i out\n",in,out);
    return 0;
}