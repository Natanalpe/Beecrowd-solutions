#include <stdio.h>
#include <math.h>

int main() {
    
    int input,h,m,s;
    scanf("%d",&input);
    h=floor(input/3600.0);
    m=round(((floor(input/60.0)/60.0)-floor(floor(input/60.0)/60.0))*60.0);
    s=round((((input-(h*3600.0))/60.0)-m)*60.0);
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}