#include <stdio.h>

int main() {
    
    char musicas[11][14] = {
        "PROXYCITY",
        "P.Y.N.G.",
        "DNSUEY!",
        "SERVERS",
        "HOST!",
        "CRIPTONIZE",
        "OFFLINE DAY",
        "SALT",
        "ANSWER!",
        "RAR?",
        "WIFI ANTENNAS"
    };
    
    int n, i, x, y, soma;
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        soma = x + y;
        printf("%s\n", musicas[soma]);
    }
    
    return 0;
}