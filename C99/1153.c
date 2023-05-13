#include <stdio.h>
 
int main() {
    int a,c=1;
    scanf("%i",&a);
    for(int i=a;i>=1;i--){
        c*=i;
    }
    printf("%i\n",c);
    return 0;
}