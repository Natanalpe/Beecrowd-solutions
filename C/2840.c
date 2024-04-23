#include <stdio.h>
#include <math.h>

int main(){
    int gas, raio;
    double pi = 3.1415, baloes;
    
    scanf("%d %d", &raio, &gas);
    
    baloes = gas / ((4.0 / 3) * pi * pow(raio, 3));
    
    printf("%.0lf\n", floor(baloes));

    return 0;
}