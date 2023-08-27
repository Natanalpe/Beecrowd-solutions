#include <stdio.h>
 
int main() {
    char n[99];
    double s,v,sf;
    scanf("%s %lf %lf",n,&s,&v);
    sf=s+(v*0.15);
    printf("TOTAL = R$ %0.2lf\n",sf);
    return 0;
}