#include <stdio.h>
 
int main() {
    int inp;
    float nota,media,a,b,c;
    scanf("%i",&inp);
    for(int i=1;i<=inp;i++){
        scanf("%f %f %f",&a,&b,&c);
        media=(a*2+b*3+c*5)/10.0;
        printf("%.1f\n",media);
    }
    return 0;
}