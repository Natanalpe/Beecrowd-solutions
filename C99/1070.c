#include <stdio.h>
 
int main() {
 
    int a,s;
    scanf("%i",&a);
    if(a%2 == 0)a++;
    for(int i=0; i<=10;i+=2){
        s=a+i;
        printf("%i\n",s);
    }
    return 0;
}