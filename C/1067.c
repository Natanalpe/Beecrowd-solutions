#include <stdio.h>
 
int main() {
    int a;
    scanf("%i",&a);
    for(int j=1;j<=a;j++){
        if(j%2 != 0){
            printf("%i\n",j);
        }
    }
    return 0;
}