#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    double area, semiperimetro;
    scanf("%d %d %d", &a, &b, &c);
    semiperimetro = (a + b + c) / 2.0;
    
    area = sqrt(semiperimetro * (semiperimetro - a) * (semiperimetro - b) * (semiperimetro - c));
    printf("%.3lf m2\n", area);

    return 0;
}