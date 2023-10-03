#include <stdio.h>

int main(){
    char a[1001], b[1001];
    scanf("%s", a);
    scanf("%s", b);
    
    printf(strlen(a) >= strlen(b) ? "go\n" : "no\n");

    return 0;
}