#include <stdio.h>

int valid(double n){
    return (n >= 0.0) && (n <= 10.0);
}
 
int calc(){
    int code;
    
    printf("novo calculo (1-sim 2-nao)\n");
    
    while(scanf("%d",&code) != EOF){
        switch(code){
            case 1:
                return 1;
            case 2:
                return 0;
            default:
                break;
        }
        printf("novo calculo (1-sim 2-nao)\n");
    }
    return 0;
}

int main() {
    int code;
    double x,y;
    x=-1.0;
    y=-1.0;
    while(scanf("%lf",&y) != EOF){
        if(valid(y)){
            if(x == -1.0){
                x=y;
            }else{
                printf("media = %.2lf\n",(x+y)/2);
                x=-1.0;
                if(!calc()){
                    break;
                }
            }
        }
        else{
            printf("nota invalida\n");
        }
    }
    return 0;
}