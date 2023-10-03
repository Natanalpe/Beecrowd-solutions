#include <stdio.h>
#include <math.h>

int main(){
    int n;
    double fibonacci;
    scanf("%d", &n);

    fibonacci = (pow((1 + sqrt(5)) / 2, n) - pow((1 - sqrt(5)) / 2.0, n)) / sqrt(5);
    printf("%.1lf\n", fibonacci);
    return 0;
}