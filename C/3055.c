#include <stdio.h>
 
int main() {
 
    int nota, media;
    scanf("%d %d", &nota, &media);
    printf("%d\n", (media * 2 - nota));
 
    return 0;
}