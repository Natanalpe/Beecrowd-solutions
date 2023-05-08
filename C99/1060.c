#include <stdio.h>

int main()
{
    int t;
    float a,b,c,d,e,f;
    scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
    
    if(a>=1)t++;
    if(b>=1)t++;
    if(c>=1)t++;
    if(d>=1)t++;
    if(e>=1)t++;
    if(f>=1)t++;
    
    printf("%i valores positivos\n", t);
    return 0;
}