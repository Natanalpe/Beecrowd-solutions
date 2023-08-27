#include <stdio.h>
#include <math.h>
int main()
{
    double r,n,a;
    n=3.14159;
    scanf("%lf", &r);
    a=n*(pow(r,2));
    printf("A=%0.4lf\n",a);
    return 0;
}