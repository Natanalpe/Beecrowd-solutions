#include <stdio.h>

int main(){
    int xxx, yyy, zzz, dd;
    
    scanf("%d.%d.%d-%d", &xxx, &yyy, &zzz, &dd);
    
    printf("%03d\n%03d\n%03d\n%02d\n", xxx, yyy, zzz, dd);

    return 0;
}