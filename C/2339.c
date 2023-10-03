#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printf(b / c >= a ? "S\n" : "N\n");

    return 0;
}