#include <stdio.h>
int main() {
    int a;
    scanf("%i",&a);
    for(int i=1;i<=10000;i++){
        if(i%a==2){
            printf("%i\n",i);
        }
    }
    return 0;
}