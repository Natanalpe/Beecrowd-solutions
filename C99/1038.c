#include <stdio.h>
int main(void){
    int code,quantity;
    float calculo,value;
    scanf("%d %d",&code, &quantity);
    
    switch(code) {
         case 1:value = 4;
              break;
         case 2:value = 4.5;
              break;
         case 3:value = 5;
              break;
         case 4:value = 2;
              break;
         case 5:value = 1.5;
              break;
    }
    calculo=quantity*value;
    printf("Total: R$ %.2f\n",calculo);
}