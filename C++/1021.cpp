#include <iostream>

int main(){
    int n[6] = {10000, 5000, 2000, 1000, 500, 200};
    int md[6] = {100, 50, 25, 10, 5, 1};
    int real, cents;

    scanf("%d.%d", &real, &cents);
    real = 100 * real + cents;

    printf("NOTAS:\n");
    for(int i = 0; i < 6; ++i){
        printf("%d nota(s) de R$ %.2lf\n", real/n[i], n[i]/100.0);
        real %= n[i];
    }

    printf("MOEDAS:\n");
    for(int i = 0; i < 6; ++i){
        printf("%d moeda(s) de R$ %.2lf\n", real/md[i], md[i]/100.0);
        real %= md[i];
    }

    return 0;
}