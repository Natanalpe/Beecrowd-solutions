#include <stdio.h>

int main() {
    int input;
    
    scanf("%d",&input);
    printf("%d\n",input);
    
    printf("%d nota(s) de R$ 100,00\n",input/100);
    input%=100;
    printf("%d nota(s) de R$ 50,00\n",input/50);
    input%=50;
    printf("%d nota(s) de R$ 20,00\n",input/20);
    input%=20;
    printf("%d nota(s) de R$ 10,00\n",input/10);
    input%=10;
    printf("%d nota(s) de R$ 5,00\n",input/5);
    input%=5;
    printf("%d nota(s) de R$ 2,00\n",input/2);
    input%=2;
    printf("%d nota(s) de R$ 1,00\n",input);
    return 0;
}