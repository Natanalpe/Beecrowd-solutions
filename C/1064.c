#include <stdio.h>

int main()
{
    int t;
    float a,b,c,d,e,f,media;
    double total=0;
    scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
    
    if(a>=1){
        t++;
        total+=a;
    };
    if(b>=1){
        t++;
        total+-b;
    };
    if(c>=1){
        t++;
        total+=c;
    };
    if(d>=1){
        t++;
        total+=d;
    };
    if(e>=1){
        t++;
        total+=e;
    };
    if(f>=1){
        t++;
        total+=f;
    };
    total=total/t;
    printf("%i valores positivos\n%.1f\n", t,total);
    return 0;
}