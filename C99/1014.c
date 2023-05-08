#include <stdio.h>
 
int main() {
    int x;
    double y,c;
    scanf("%d %lf",&x,&y);
    c=x/y;
    printf("%.3lf km/l\n",c);
    return 0;
}