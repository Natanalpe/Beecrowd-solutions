#include <stdio.h>

int main(){
    int p, r;
    char resp;
    
    scanf("%d %d", &p, &r);

    if(!p) resp = 'C';
    else if(p && r) resp = 'A';
    else resp = 'B';
    
    printf("%c\n", resp);
    
    return 0;
}