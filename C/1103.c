#include <stdio.h>

int main() {
    int h1, m1, h2, m2;
    int tempo;
    
    while(scanf("%d %d %d %d", &h1, &m1, &h2, &m2)) {
        if(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0) break;
        
        if(h2 < h1 || (h2 == h1 && m2 < m1)) h2 += 24;
        
        tempo = (60 * h2 + m2) - (60 * h1 + m1);
        
        printf("%d\n", tempo);
    }

    return 0;
}