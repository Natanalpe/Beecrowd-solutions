#include <stdio.h>
 
int main() {
    int a,b;
    double c;
    scanf("%d %d",&a,&b);
    c= b/12.0*a;
    printf("%.3lf\n",c);
    return 0;
}