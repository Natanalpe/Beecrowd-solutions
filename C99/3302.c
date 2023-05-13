#include <stdio.h>
 
int main() {
    int i;
    scanf("%i",&i);
    for(int j=1;j<i+1;j++){
        int currVal;
        scanf("%i",&currVal);
        printf("resposta %i: %i\n",j,currVal);
    }
    return 0;
}