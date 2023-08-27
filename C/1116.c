#include <stdio.h>
int main(){
    int q;
    float x,y;
    double c;
    scanf("%i",&q);
    for(int i=1;i<=q;i++){
        scanf("%f %f",&x,&y);
        c= x / y;
        if(y==0){
            printf("divisao impossivel\n");
        }else{
            printf("%.1lf\n",c);
        }
    }
    return 0;
}