#include <stdio.h>
#include <string.h>

int main() {
    char tabuleiro[3];
    scanf("%s", tabuleiro);
    
    if(!strcmp(tabuleiro, "XXO") || !strcmp(tabuleiro, "OXX"))
        printf("Alice\n");
    else if(!strcmp(tabuleiro, "XOX"))
        printf("*\n");
    else
        printf("?\n");
    
    return 0;
}