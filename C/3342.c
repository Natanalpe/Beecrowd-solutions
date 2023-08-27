#include <stdio.h>
#include <math.h>

int main() {
    int i,m,b,p;
    scanf("%i",&i);
    m=pow(i,2);
    b = m%2 == 0 ? m / 2 : ceil(m / 2)+1;
    p = m%2 == 0 ? m / 2 : floor(m / 2);
    printf("%i casas brancas e %i casas pretas\n",b,p);
    return 0;
}