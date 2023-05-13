#include <stdio.h>
 
int main() {
 
    int a,c;
    scanf("%i",&a);
    for(int i=1;i<=10;i++){
        c=i*a;
        printf("%i x %i = %i\n",i,a,c);
    }
    return 0;
}