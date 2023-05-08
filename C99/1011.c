#include <stdio.h>
#include <math.h>

int main(void) {
    double r,c;
    scanf("%lf", &r);
    c=(4/3.0)*3.14159*pow(r,3);
    printf("VOLUME = %.3lf\n", c);
    return 0;
}