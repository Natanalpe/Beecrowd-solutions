#include <stdio.h>
#include <math.h>

int main() {
    int input,y,m,d;
    scanf("%d", &input);
    y=floor(input/365.0);
    m=floor((input - y * 365.0)/30.0);
    d=input - (y * 365.0 + m * 30.0);
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);
    return 0;
}