#include <stdio.h>
 
int main() {
 
    double antigo, novo;
    scanf("%lf %lf", &antigo, &novo);
    printf("%.2lf%%\n", (novo / antigo) * 100 - 100);
 
    return 0;
}