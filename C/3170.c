#include <stdio.h>

int main() {
    int b, g, f;
    scanf("%d %d", &b, &g);
    f = g / 2 - b;
    
    if(f > 0) {
        printf("Faltam %d bolinha(s)\n", f);
    }else {
        printf("Amelia tem todas bolinhas!\n");
    }
    return 0;
}